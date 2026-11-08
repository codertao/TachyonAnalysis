# Collision: detection, response and AI avoidance (investigated 2026-11-08)

Confidence tags: **[c]** confirmed, **[l]** likely, **[?]** unclear.

## TL;DR
- **Only the local player's ship physically collides.** The client detects the hit and moves the
  ship back. It then tells the server, which applies the damage **[c]**.
- **AI ships, capital ships and turrets never collide physically.** Nothing on the server stops
  them passing through stations, asteroids, capital ship hulls or each other **[c]**:
  - AI fighters *steer around* obstacles with look-ahead ray probes.
  - Capital ships just follow their routes. Mission designers keep routes clear.
- The only server-side "body" collision is a special case: capital ship parts vs **target drones**
  (type 0xb).
- Every collision test is a **segment cast**: a quick sphere check, then the model's collision
  mesh. No test is volume vs volume.

## Shared primitive: segment cast [c]
`Coll_SegmentCast 0x418d10 (from, to, outHit, entList, excl1, excl2, ?, filterFn)`:
- Tests the list's fast sub-lists (`+0x10`, `+0xc`) first, then the quadrant grid cells the
  segment crosses.
- Returns the **first** entity hit, or 0.
- Per entity:
  - **Broad phase:** the segment vs the model's bounding sphere (`Coll_SegmentVsSphere 0x4187d0`).
  - **Narrow phase:** the segment vs the model's collision mesh (`Coll_SegmentVsModel 0x4b36b0`).
    This only applies when the pak's flags `+0x28 & 1` are set; the mesh is at `+0x48`. See
    "Collision meshes" below.
- Exclusions are in globals `0x5b2d80/84`. The optional filter callback is `0x5b3190`.

Weapons use the same casts (projectile step segment vs targets), so projectile hits are mesh
accurate.

## Player ship collision (client side) [c]
`PlayerShip_CollisionPostThink 0x4535b0` is installed as the player DCB's `+0x6c` post-think, by
`0x4545f0` and `0x42e267`.

1. **Skip conditions:** it doesn't run while `0x5b39ec` or `0x5b3344` is set (cutscene, docking or
   warp flags **[l]**).
2. **Six probes:**
   - All six start from last frame's position (`+0xd4`, copied from `+0x34`).
   - They end at points offset in the ship's own frame:
     - **nose:** +z by model radius + 0x2000;
     - **tail:** −z by radius/4;
     - **sides:** −x, +y, −y, +x by radius/4.
   - So the hull is approximated as a long probe forward and short stubs on the other sides.
   - The probes test the **client entity list `0x5b31d4`**. That list holds every replica: ships,
     capital ship parts, stations, gates, asteroids and debris. Anything whose model has a
     collision mesh can be hit.
3. **First hit → `PlayerShip_OnCollision 0x4532e0 (player, other)`:**
   - **Veto hook:** if the other entity's descriptor has a `+0x6c` hook, it is called first. It can
     cancel the collision or suppress damage.
   - **Undo the move:** position and orientation are snapped back to the last safe pose
     (`+0xe0..+0xf4`).
   - The rest only runs if the cooldown `0x5b2118` is 0. `PlayerDcb_PostThinkCamera 0x454040`
     decrements it by 1 each frame.
   - **Feedback:** camera shake grows with speed (`0x5b1ed8 += clamp(speed/maxSpeed × 0.5,
     ≥0.1) × 30`, minimum 2). It also plays an impact sound and a force-feedback jolt
     (`0x4a0760`).
   - **Then one of two responses:**
     - **Bounce** (static geometry, or a handler that returns non-zero): velocity ×**−0.95**,
       spin `0x5b1e98..a0` negated, cooldown **50 frames**.
     - **Deflect** (the other entity's `+0x88` handler returned 0): random orientation jitter of
       ±`0x200000` (±22.5°) on each axis, velocity ×0.85 (x, y) and ×0.55 (z), cooldown
       **100 frames**. You glance off and slow down instead of bouncing back.
4. **Reporting:** the hit is reported to the server as event **0x2009** `{impact speed, other's
   server id}` (`NetCli_SendCollision 0x415a10`), either by the per-entity handler or directly.
   Impact speed is the player's current speed `0x5b1ecc`.

**Per-entity handlers (`+0x88`)** decide the response:

| entity | handler | effect |
|---|---|---|
| ship replicas (`ShipReplica_Init`), asteroids (`Asteroid_InitClient 0x408110`) | `Ent_OnPlayerCollide 0x4156a0` | report `{speed, id}`. Bounce, except deflect when the other's type is 2 |
| debris chunks (`Debris_Spawn 0x421f20`) | `Debris_OnPlayerCollide 0x421e10` | the debris destroys itself (50,000 dmg). Report `{speed/2, 0}`, deflect |
| no handler (stations, capital ship parts, gates, …) | – | report `{speed, 0}`, bounce |

## Collision damage (server) [c]
`TachSrv_OnCollision 0x45fd70` handles event 0x2009.
1. It does nothing in SP god mode or when the player's des has `+0x1d0` set.
2. If the other entity's descriptor has a `+0x70` hook, that hook handles the event and nothing
   else happens.
3. **Damage formula:**
   ```
   f   = min(speed, 1.25 × maxSpeed) / maxSpeed × 0.95, clamped to [0.2, 1.25]
   dmg = Shield_GetMax(...) × f      (des +0xd0 block; +0xc or +8 by state bit)
   ```
   So a collision always costs **at least 20%** of that maximum. A full-speed crash costs about
   95%, and boosting past max speed costs up to 125%.
4. `Shield_ApplyDamage 0x419170` takes it from shields first, at half rate (`×0x100 >> 9`). Once
   the shields are down, the hull takes it at full rate.
5. If an entity id was sent, **the other entity takes the same damage** through its `+0x80`
   handler, with damage type `0x26` (`TachSrv_DamageEntityById 0x45fa50`). So ramming an AI
   ship or asteroid hurts it too.
6. If hull ≤ 0, `TachSrv_OnShipKilled`.

**Trust model:** collisions are client-authoritative. The server never re-checks geometry or
speed; it trusts the reported impact speed. A client that never sends 0x2009 takes no collision
damage.

## AI fighters: avoidance, not collision [c]
- `Ai_CollisionLookahead 0x404aa0` (AI post-think, every 16 frames):
  - It casts a ray from the ship to `pos + (vel + fwd×3) × 350`, about 7 s of travel.
  - Filter `Ai_LookaheadFilter 0x404630` predicts where moving ships will be and skips the AI's
    own target.
- **On a hit, `Ai_AvoidCollision 0x404a50`:**
  - Enters state "AVOIDING COLLISION". That label is in the state-name table `0x5321c0`, but the
    state has no separate state function.
  - `Ai_FindClearDirection 0x404770` probes **5000 units** in ±y and ±x of the ship's frame and
    steers toward the first clear one.
  - If none is clear, it reverses: velocity ×−2, with a goal point 2000 units back.
- **Suppressed while attacking:** within 6000 units of its attack target
  (`Ai_ApproachTarget 0x402330`), so dogfighting AIs can fly through things.
- No hit is ever *resolved* for an AI ship. If the probes miss (small or fast obstacles, or close
  combat), the ship just passes through.

## Capital ships [c]
- No avoidance and no collision response; they follow their routes (`capships.md`).
- `CapPart_CollisionPostThink 0x4121d0` → `CapPart_CollideTargetDrone 0x412080`: each part tests
  only against **type 0xb target drones** (`TargetDrone_Spawn 0x41aa30`) and deals them
  50,000/25,000 damage. This looks like a training-mission mechanic **[l]**.
- The player *does* bounce off capital ship hulls, through the client path above (parts are
  replicas with meshes). No damage is dealt to the part, because no id is sent.

## `NO_AI_COLLIDE`: dead flag [c]
- It is a **cutscene** (`.sen`) header key, parsed by `Scene_ParseFlags 0x4596f0` into scene
  `+0x134` bit 2.
- Nothing ever tests bit 2. The other bits are used: END_MISSION 1, EXILE 4, `_TO_CREDITS`
  0x10, `_TO_MAIN` 0x20 (`Scene_Finish 0x45b430`).
- So the flag has no effect in this build.

## Collision meshes: where they come from [c]
- **Stored in the `.pak` file.** Each 3DPK model can carry a collision block. Header flag
  `+0x28 & 1` says it's present, and header `+0x48` is its file offset. `Pak_RelocCollision
  0x4afe60` turns the offsets into pointers at load. `Model_CopyCollision 0x4b0bf0` copies the
  block into each model instance.
- **One mesh per pak, in rest pose.** It is not per part, so animated parts never move it: the
  Enforcer's arms swing but its collision mesh stays put.
- **Block layout** (all offsets relative to the block start; size = `hdr + (nV + nT×6 + nN) × 12`):
  ```
  +0x04 u32 header size (0x38)   +0x08 nVerts   +0x0c nTris   +0x10 nNormals
  +0x14 vertsOfs  (float xyz)    +0x18 trisOfs   +0x1c normalsOfs (float xyz)
  tri (0x48): u32 v0, v1, v2 (byte offsets into verts), u32 normal (byte offset),
              13 floats of precomputed edge/plane data [l], +0x44 runtime "hit" flag
  ```
  Example: `CUTLESS.PAK` has 500 verts, 305 tris and 211 normals at file offset `0x300e0`, in model
  units (about ±2).
- **The test** (`Coll_SegmentVsTriList 0x4b3560`):
  - The segment is moved into the model's local space (`Coll_SegmentToModelSpace 0x4b3280`:
    subtract the position, inverse rotate, then apply scale).
  - Then a **brute-force loop over every triangle**, with no tree or grid. The bounding sphere has
    already filtered.
  - Each triangle is **one-sided**: it only counts if the segment starts in front of its plane
    (`(p0 − v0)·n ≥ 0`). So something already inside a hull can leave without hitting.
  - The plane-crossing point must be within `t ∈ [0, 1]` and inside the triangle (barycentric).
  - The **first** hit in list order is returned, not the nearest.
- **Coverage across all 1,160 paks:** 740 have a mesh (median 72 tris, maximum 2,416 in
  `MARSBK.PAK`).
  - **With a mesh:** ships, station and capital ship parts, asteroids.
  - **Without one:** effects, projectiles, missiles, mines, planets, nebulae, skyboxes,
    cockpit/glass/shadow overlays, hangar interiors, and a few odd ones (`BORAFRIG.PAK`,
    `MEGAGATE.PAK`).
  - A missing mesh means intangible: segment casts pass through even when the sphere check hits.
- **Per-entity override, entity `+0xc4`:** `Coll_SegmentVsList` passes this to the narrow phase.
  When it's non-zero, that model's mesh is used instead of the visual model's.
  - **Gates are the user.** `megagate.des` has `GATE_OPEN_COLLIDE: mgatopen.pak` and
    `GATE_CLOSE_COLLIDE: mgatclsd.pak`. These are invisible collision-only paks: the visual
    `megagate.pak` has no mesh.
  - `Ent_CreateHyperGate 0x426dd0` loads both into desc `+0x160/+0x164`.
  - The gate state code (`Gate_UpdateCollideState 0x426200`, `0x425850`, `0x426700`) swaps
    `+0xc4` between them as the gate opens and closes. So an open gate lets you fly through its
    centre, and a closed one is solid.
  - Debris (`0x421f43`) also sets `+0xc4`.

## Open
- What the descriptor `+0x6c` (client veto) and `+0x70` (server) collision hooks are used for.
  Docking bays are the obvious candidate. Gate open/closed collision is done by swapping
  models instead (see above).
- `Shield_GetMax` state bit (`+0x2c & 4`): which of shield/hull max is used, and when.
- Entity type 2 (deflect instead of bounce in `Ent_OnPlayerCollide`): probably other players'
  ships **[?]**.
