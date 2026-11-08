# Capital ships: parts, subsystems and turrets (investigated 2026-11-08)

Confidence tags: **[c]** confirmed, **[l]** likely, **[?]** unclear. Angles are in engine units,
2^25 per full turn (1° ≈ 93,207; `0x20000` ≈ 1.4°). The server ticks at 50 Hz.

## Model: the `.OCF` file
- A `CAPITOL_SHIP` `.des` points to `OCF_FILE: x.ocf`, a CBIN listing paks and `part_NN` groups.
  Each part has: `PAK`, `SCALE`, `ANGLES` (mount orientation), `ATTACH: parentPart, attachPoint, ?`,
  `TYPE`, `SUB_TYPE`, and optionally `PART_ID`, `HITPOINTS`, `SOUND_LOOP`, docks and
  `CREDIT_POWERPLANT`.
- `Ocf_ParsePart 0x4094a0` stores `flags = 1 << (TYPE−1)` at part `+0x34`.

| TYPE | flag | meaning |
|---|---|---|
| 0 | – | hull section (structure only) |
| 2 | 0x2 | **turret** (`SUB_TYPE` picks the weapon) |
| 4 | 0x8 | **weapon generator** |
| 5 | 0x10 | **shield generator** |
| 6 | 0x20 | engine / thruster (no collision post-think) |
| 9 | 0x100 | **power generator** (counted) |
| 8 / 7 / 10 / 14 | 0x80 / 0x40 / 0x200 / 0x2000 | land / launch / reload dock, credit powerplant |

Default part hitpoints are 20,000; credit powerplants get 400,000.

## Every part is its own server entity [c]
`CapShip_SpawnParts 0x4125e0` allocates one DCB from the AI pool for **each** OCF part, chained
through `+0xe0`:
- **The root part** gets `Dcb_InitMultiPart` and `Dcb_Think_MultiPart`. It steers, integrates
  motion and repositions every child each frame (`Dcb_UpdateChildTransforms`).
- **Attached parts** get `CapShip_InitChildPart`. Parts flagged `0x91e` (turrets, generators,
  docks) get their own hitpoints (`+0xbc`, default 100,000) and damage handler
  `CapPart_OnDamage`.
- **TYPE 2 parts** get `Dcb_InitTurret 0x411f80` (entity type `0xf`):
  - hitpoints `+0x180` = 50,000, damage handler `Turret_OnDamage`;
  - `+0xf4..+0xfc` holds the mount orientation, refreshed each frame from the hull;
  - `+0x4c..+0x54` is the turret's **own aim orientation**;
  - its weapon is a `WeaponSys` at `+0x100`; its range is `+0x158 = def+0x60`.

**Subsystem effects** (`CapPart_Destroyed 0x4119d0`, root flags `+0x138`, initial value 0x118):
- **Weapon generator (8) destroyed:** root bit 8 is cleared and **every turret on the ship goes
  dead** (`Dcb_Think_Turret` only runs the AI while that bit is set).
- **Shield generator (0x10) destroyed:** the root stops its shield-regeneration tick.
- **Power generators (0x100):** counted in root `+0x140`. When the last one dies, bit 0x100 is
  cleared and a mission event is posted. The steering hook switches to `CapShip_DriftHook`: hold
  heading, no thrust.
- **Part hp reaching 0** posts mission event `{cat 1, obj, code 14, partId}`, the "code 14"
  condition in `spxtrig.py`.

## Turret AI: `Turret_Think 0x404c00` (each turret independently) [c]
Runs every server frame per turret, but only while the ship's weapon generator is alive and root
`+0x130` bit 1 is clear.
1. **Slew:**
   - yaw `+0x4c` and pitch `+0x50` each move toward the desired aim (`+0x138..`) by at most
     `0x20000` per frame. That is about **1.4°/frame, roughly 70°/s, per axis**, and the axes move
     independently.
   - Roll is never touched.
2. **Fire:**
   - Condition: `(|Δyaw| + |Δpitch|)/2 < def+0xc` **and** a valid solution (`+0x150`) **and** a
     target.
   - It calls `Weapon_TryFire`, which fires along the turret's *current* orientation from its
     mount points. So shots go where the barrel points, not straight at the target.
3. **Every 32 frames** (staggered per turret by an index in `+0x154`, so turrets don't all think on
   the same frame):
   - **Target selection:**
     - It looks for a new target if it has none, and on every 8th of these slots (every 256
       frames, about 5 s) even if it has one.
     - `Ent_FindNearestHostile` picks the **nearest** entity in the quadrant that is hostile by
       the side table, matches the weapon's class mask (`def+0x5c`), and is within range.
     - Each turret picks for itself; nothing coordinates the turrets on a ship.
   - **Range check:** if the target is further than range, the target is dropped.
   - **Lead** (`Ai_LeadAimPoint`):
     - time = distance ÷ projectile speed (`def+0x54`), plus a random offset in
       ±spread/2 (default spread 32).
     - aim point = target position + target velocity × time.
     - Beam weapons have speed 1, so they get no lead.
     - The spread comes from a field on the turret; it is probably the ship's `ACCURACY`
       **[?]**.
   - **Arc limit:**
     - The aim point is converted into the mount's local frame.
     - The required elevation must be in **(5°, 90°]** above the mount plane.
     - Otherwise the turret drops the target and returns to rest (`Turret_ClearTarget`).
     - There is no yaw limit: turrets traverse a full 360° but only cover their own hemisphere.
     - The lead solution is only recomputed every 32 frames; in between, the turret slews
       toward the last one.

## Turret weapons (`g_WeaponDefs 0x55a560`, stride 0x110; `SUB_TYPE` → id via `0x533e90`)
| SUB_TYPE | id | class name (+0xd4) | range (+0x60) | fire tol (+0xc) | targets (+0x5c) | proj speed (+0x54) | life (+0x3c) | cost (+0x58) |
|---|---|---|---|---|---|---|---|---|
| 0 | 0x1d | LIGHT TURRET | 1500 | 45° | fighter+bomber | 8.0 | 250 | 0 |
| 1, 4, 7 | 0x1e / 0x1f / 0x20 | LARGE TURRET | 1500 | 45° | fighter+bomber | 8.0 | 250 | 0 |
| 2, 3, 6 | 0x22 / 0x23 / 0x24 | BEAM_A | 1187.5 | 0.7° | capship+starbase | – | 150 | 3500 |
| 5 | 0x25 | BEAM_A (heavy) | 1937.5 | 0.7° | capship+starbase | – | 150 | 3500 |

- Class bits (`g_AiClassNames`): FIGHTER 1, BOMBER 2, CAPSHIP 4, STARBASE 8, TURRET 0x10. So gun
  turrets only shoot small craft, and beams only shoot big ships.
- In the data, SUB_TYPE 0 (324 parts) and 7 (138) dominate; beams are rare (2/3/5/6: 32 parts).
- `+0x14` differs per type (light 3000, large 6000/8000/10000, beams 70000 / 200000). It is
  probably damage **[l]**.
- Record 0x21 ("MINE BLAST") sits in the same block but isn't reachable from a SUB_TYPE.

## Refire rate (resolved statically, 2026-11-08) [c]
- `Turret_SetupWeapon` passes 1 as the last argument of `WeaponSys_Init`, which sets system flag 4
  (checked in the disassembly at `0x4108a4` → `0x4935aa` → `0x49353f`).
- With flag 4, `Weapon_TryFire` compares against `def+0x44` instead of `def+0x40`
  (`0x4977f0..0x497800`: `cmp now, def[0x44] + lastFire; jl skip`).
- `def+0x44` is **−1** in every turret record. Nothing writes `g_WeaponDefs` at runtime, so the
  check always passes.
- The energy check doesn't throttle either:
  - gun cost (`def+0x58`) is 0;
  - beams cost 3500 against an "energy" word (`+0x15c`) that `Dcb_Think_Turret` resets to 40,000
    after every think.
- Nothing else clears the solution flag `+0x150` between shots.
- **So a turret fires once per server tick (50/s) for as long as it has a target, a solution, and
  aim error under the tolerance.** For guns that tolerance is wide (~45°).
- The effective limits are:
  - the shared server projectile pool (`Server_common_DCBS`, **500** slots). Gun shots live 250
    frames, so a couple of busy turrets can fill it; when the pool is full `DcbPool_Alloc` fails
    and the shot silently doesn't happen;
  - the 5° elevation floor and 32-frame re-solve.
- `def+0x40` (25 / 50 / 500 frames) looks like the intended cooldown. It is used when flag 4 is
  absent, as for player-style weapon systems. Whether the flag-4/`+0x44` path for turrets is a
  bug or intended can only be settled at runtime; the code path itself is unambiguous.
- Root `+0x130` bit 1 = **weapons off**, set by the `WEAPONS_ACTIVATE` order (msg 0x19, arg 0).

## Movement: route following plus mission orders, no combat autonomy [c]
The root part's steering comes from hook `+0x134`, called by `Dcb_Think_MultiPart` before
`Entity_TurnToward` and integration.

**`CapShip_SteerHook`** (default when the placement has a route and isn't flagged inactive, and
the power generators are alive):
1. Turn toward the desired orientation `+0xec` with the `.des` rotation limits (e.g. Bora
   destroyer yaw 10, pitch/roll 0.5), and apply the current throttle `+0x118` (0x400 if unset).
2. Every 16 frames: point `+0xec` at the current waypoint (nav `+0x14`, i.e. `+0x100`). Within
   **1000 units**, `Nav_ReachedWaypoint` runs:
   - the waypoint's action (`+0xc`): 0 = switch route (arg `route<<16|point`), 1 = hyperspace
     out, 2 = deactivate (drift), 3 = group order / enter gate, 4 = unspawn;
   - then advance to the next waypoint (stride 0x20). **The route wraps to its first point, so
     routes loop forever** unless an action ends them;
   - posts mission events `{OBJ, code 5, route<<16|pt}` and `{GROUP, code 2, …}`.
3. **Speed per leg:** a waypoint with an arrival time (`+0x14`, seconds in 16.16) sends msg 0x1a
   with speed = distance ÷ (time × 50). `FlightModel_SolveThrottle` turns that into a throttle,
   so the ship paces itself to arrive on schedule, capped by the `.des` MAX_SPEED.

**Other hooks:**
- `CapShip_DriftHook`: hold the current heading, apply no thrust. Used for no route,
  `ACTIVATE 0`, or all power generators destroyed.
- `CapShip_HyperInHook` / `CapShip_HyperOutHook`: scripted arrival (spawned behind its point,
  decelerates, posts code 9) and departure (accelerates, posts code 8, unspawns).
- `CapShip_DeathThink`: EXPLODE runs a 1000-frame (20 s) death with escalating secondary
  explosions, then posts code 16. TIMED_EXPLODE uses arg × 50 frames.

**No autonomy:**
- No code path reacts to enemies or damage: no evasion, no turning to bring guns to bear, no
  collision avoidance, no target pursuit.
- Damage only posts mission events (damage %, attacked-by-player).
- All movement changes come from the route data or from SPX trigger actions delivered as orders
  through `CapShip_OnMessage` (HYPERSPACE, ACTIVATE, EXPLODE, CHANGE_RACE, CHANGE_WP,
  WEAPONS_ACTIVATE, RESTORE_POWERPLANT, TIMED_EXPLODE, objective on/off).
- Docking orders (DOCK_WITH_OBJ, TAKEOFF, …) aren't handled by capital ships.
- The only "AI" on a capital ship is its turrets.

## Open
- Units of `def+0x14` and `def+0x60`, and which field the lead spread is.
- Whether starbase turrets (`Ent_CreateStarbase`, the `0x40b000` module, client side) share this
  AI. They likely do, through the same OCF part path **[l]**.
