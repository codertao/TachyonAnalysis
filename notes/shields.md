# Shields, power and damage allocation (investigated 2026-11-09)

Confidence tags: **[c]** confirmed in code, **[l]** likely, **[?]** unclear.
See also `multiplayer.md` ("Weapons and projectiles", "Ship-to-ship collisions and death") and
`collision.md`.

## The short version
- **Players have two shield pools, front and rear.** The key names `POWER_TRANSFER_SHIELD_FTOR` /
  `_RTOF` and the HUD's `SHIELDS` group (`HULL` / `FRONT` / `REAR`) confirm which is which.
- **The server owns both pools.** It applies all damage and regeneration. The client gets the
  values in every GAMEDATA and only displays them (plus a local preview of transfers).
- **Damage is split between front and rear by the *world* compass bearing of the hit, not by
  the ship's facing.** `Shield_SplitFrontRear` never subtracts the ship's yaw, so the split is
  tied to a fixed world direction: a hit point toward world −z goes all to the front pool, and
  toward +z all to the rear. That is only right for one heading; turned around, hits from ahead
  drain the *rear* shield. **[c]** in code. Still to confirm in game (`to_verify.md`).
- **The server allocates the damage, but from the client's claim.** For player bolts, the shooter's
  client says *what* was hit, *where* (hit position), with *which weapon* and *what damage scale*.
  The server trusts all of it, recomputes the damage number, and does the shield/hull/front/rear
  allocation itself. The victim's client has no say.
- Several power inputs are client-supplied and unchecked: the **shield recharge rate** (in
  PLAYERDATA every 16 frames) and the **power-transfer amount** (0x2005). Laser energy is never
  charged on the server.
- **AI ships, turrets and collisions only use the front pool.** `Shield_ApplyDamage` touches only
  `+8`. The rear pool regenerates but is never damaged or checked.

## The power struct [c]
The same layout is used everywhere:
- client player: `g_PlayerPower 0x5b20e0`;
- server player DCB: `+0x11c`;
- AI ships: `+0x10c`;
- turrets/parts: `+0x15c` / `+0x144`.

The ship def's power block is at des `+0xd0`.

| Off | Field | Max (def `+0xd0` block) |
|---|---|---|
| +0x00 | laser energy | `+0` (`+4` with laser upgrade) |
| +0x04 | laser recharge rate (16.16, 1.0 = 0x10000) | |
| +0x08 | **front shield** | `+8` (`+0xc` with shield upgrade) |
| +0x0c | shield recharge rate (front) | |
| +0x10 | **rear shield** | same max as front |
| +0x14 | shield recharge rate (rear) | |
| +0x18 | afterburner energy | `+0x40` (`+0x44` with upgrade) |
| +0x1c | burner recharge rate | |
| +0x20 | speed factor (float, see below) | |
| +0x24 | hull | `+0x20 × g_HullLevelScale[level] >> 8` |
| +0x28 | **system meter** (init `def+0x20`): drained by weapon system factor while the shield is down; AI ships are disabled at 0, unused for players (`damage.md`) | |
| +0x2c | upgrade flags: 1 laser, 2 burner, 4 shield (each picks the ×1.25 max) | |

- Upgraded maxima are `.des` value × 1.25 (`ShipDes_Finalize`).
- `def+0x10` (block `+0x10`) = 1% of the shield max. It is the "shields down" threshold.

## Damage
### Players: `TachSrv_DamagePlayer 0x460f60` (server) [c]
1. Veto checks: god mode (SP), invulnerable flag, rules `+0x84`.
2. `bearing = Vec_BearingXZ(ship.pos, hitPos)`. This is `atan2(dx, dz)` of the world-space
   offset; y is ignored.
3. `Shield_SplitFrontRear(bearing, dmg)`:
   - fold the bearing to 0..256 (0 = hit point toward world −z, 256 = toward +z; from `Math_Atan2Core`'s quadrant code);
   - **rear share = dmg × b/256, front share = the rest.** At 90° it's 50/50.
4. Both shares × global scale `0x5a663c` = 166/256 ≈ 0.648, always (set at startup). On SP easy, also ×0.687.
5. `Shield_ApplyDamageFR 0x4191f0`, weapon factors `def[6]` shield, `def[7]` hull, `def[8]`:
   - `front -= frontShare × shf >> 8`, clamped at 0. If front is then < 1% of max,
     `hull -= frontShare × hf >> 8` (and `+0x28` likewise).
   - The same for rear with the rear share.
   - So the hit that breaks a shield already leaks that pool's share into the hull. There is no
     overflow carry.
6. Hull ≤ 0 → `TachSrv_OnShipKilled`. Otherwise rules `+0x28` (SP hull-% event) and an impact
   sound. Always sends **0x1005** to the victim (`CliOn_YouTookDamage`: red flash + rumble, no
   direction).

Notes:
- The hit position is a world point:
  - the segment-cast contact for bolts (`Proj_OnHitDirect`);
  - the model contact or the target's centre for blasts (`0x493de0`); centre → atan2(0,0) → all
    front;
  - the client's 0x2003 `hitPos` for MP player bolts.
- **Nothing rotates the offset into ship space**, so the front/rear choice depends on the
  attacker's compass direction, not on where they are relative to your nose. Single-player runs
  the same server code in-process (`singleplayer.md`), so this applies there too.

### AI ships, turrets, capital-ship parts: `Shield_ApplyDamage 0x419170` [c]
- Single pool: `shield(+8) -= dmg × shf >> 9`, i.e. **half rate** compared with the player
  formula. Once shield ≤ 1%, `hull -= dmg × hf >> 8` (and `+0x28`).
- No direction at all.

### Collisions: `TachSrv_OnCollision 0x45fd70` [c]
- `Shield_ApplyDamage(dmg, 0x100, 0x100, 0)` on the player's struct: **front pool only**, at half
  rate. Hull takes full damage once the front shield is below 1%, **even if the rear shield is
  full**.

## Who decides what, in multiplayer [c]
| Source | Hit decided by | Damage/allocation done by | Client-controlled inputs |
|---|---|---|---|
| Player bolts/guns | **shooter's client** (cast vs its replica of the target) | server (`TachSrv_OnHitReport` → victim `+0x80`) | target id, hit position (→ front/rear split), weapon id (→ base damage + factors), damage scale (u16 << 2, up to ~4.0×) |
| Player guided missiles, torpedoes | server (server-owned entity) | server | lock target only |
| AI / turret bolts | server | server | none |
| Collisions | **reporter's client** | server, front pool + hull, both parties | speed and other id |
| Sappers, beams, hazards | server | server | none |

- The 0x2003 "kind" byte (1 = shield hit, 2 = hull hit, from the replica's `+0xc0 & 0x40`) only
  picks the impact effect. The server ignores it for damage.
- The victim's client never computes damage. Its bolt copies just vanish on contact
  (`multiplayer.md`).

## Regeneration [c]
**Server, per player** (`TachSrv_PlayerThink 0x460d90`):
- Every 16 frames, `Power_Regen(flags 0x12)`, i.e. shields only, forced even from 0:
  - `pool += g_PowerRegenLevelScale[level] × (rate >> 11) >> 8`, for front and rear separately,
    capped at max;
  - level 0 at 1.0× → **+32 per 16 frames (100/s) per pool**;
  - the level table `0x532fc8` = {256×4, 307×3, 358×3, 409}, indexed by `+0xfc` = Base Wars rank (0 elsewhere), see `damage.md`.
- Then the sapper drain (`+0x14c` flags: power sapper drains laser, inertial drains burner, −10
  per tick).
- **The rate comes from the client.** `Tach_SrvReadPlayerData` copies PLAYERDATA `+0x2c`
  (= client `g_PlayerPower[3]`) into *both* `+0x128` and `+0x130` every 16 frames, with no clamp.
  The legit range is 0–2.0 in 0.5 steps (`Power_StepRate` wraps). A modified client could send
  anything.
- The server never regenerates laser or burner for players. It doesn't track them
  authoritatively (no energy check on fire, see `multiplayer.md`), except through
  `SpRules_RefillPools`.

**Repair platforms** (`Ent_TouchRefill 0x40b590`, desc flag 0x200, rules `+0x2c`):
- MP `MpRules_RepairTick 0x450290`: hull +1/1024 of max per call;
- then `SpRules_RefillPools 0x437870`: front, rear, laser, burner +1/1024 each.

**Client** (`PlayerPower_RegenTick 0x453970`, every 16 frames):
- Regenerates **laser and burner only** (flags 0xc; 0xd while the burner is in use).
- **Shields are never regenerated or damaged locally.** They change only on GAMEDATA, or as a
  local preview of a transfer that the next GAMEDATA overwrites.
- GAMEDATA carries front `+0x124`, rear `+0x12c` and hull `+0x140` as u16, plus sapper flags
  `+0x14c`. `Tach_ReadGameData` writes them to `g_PlayerPower[2]`, `[4]` and `[9]`.

**Speed cost:**
- `Power_UpdateSpeedFactor 0x455e90`: for each system below max (laser, either shield, burner),
  factor −= rate × 4000/65536, i.e. −6.1% at 1.0× and −12.2% at 2.0×.
- The result scales `.des` MAX_SPEED (`FUN_00423e80`). So recharging fast costs top speed, but
  this is enforced only on the client (position is client-authoritative anyway).

## Player controls [c]
Keybind actions, action table `0x53cdd8`:

| Action | Id | Code | Net |
|---|---|---|---|
| POWER_TRANSFER_SHIELD_RTOF | 0x2b | `PlayerCmd_ShieldBalance(-1)`: rear → front, min(rear/8, room) | 0x2005 op 2 |
| POWER_TRANSFER_SHIELD_FTOR | 0x2c | `PlayerCmd_ShieldBalance(1)`: front → rear | op 1 |
| POWER_TRANSFER_BURNER_TO_SHIEL | 0x2d | `PlayerCmd_PowerTransfer(4)` (needs system bit 4) | op 4 |
| POWER_TRANSFER_WEAPON_TO_SHIEL | 0x2e | `(3)`: amount = min(laser, laserMax/8) | op 3 |
| POWER_TRANSFER_SHIELD_TO_BURNE | 0x2f | `(6)` | op 6 |
| POWER_TRANSFER_SHIELD_TO_WEAPO | 0x30 | `(5)`: amount = shieldMax/16 | op 5 |
| POWER_INC_*_CHARGE | 0x28–0x2a | `PlayerCmd_IncRate`: cycle that rate +0.5 (wraps 2.0 → 0) | via PLAYERDATA (shield rate only) |

**Server side of 0x2005** (`TachSrv_OnPowerOp 0x45f2a0`):
- ops 1/2 move between front and rear, same as the client;
- ops 3/4 add **amount/4 to each pool** (amount/2 total);
- ops 5/6 subtract **amount from each pool**.
- The amount is the client's u16 and the server debits nothing for 3/4. A modified client can
  refill both shields at will.
- Case 2 falls through into case 3, but with amount 0 that's a no-op.

**SMART_SHIELDS** (ship system bit 0x4000, `SmartShields_Tick 0x453f30`, client, every 32
frames):
- Sets the shield rate to 2.0× if the average shield is below 50%, 1.5× below 75%, else 1.0×.
- If one pool is under half the other, it presses FTOR/RTOF automatically.
- This is the player's equivalent of the AI's `Ai_ManageShields` (`ai.md`).

**HUD:**
- `Hud_DrawEnergyBars` draws one shield bar = (front + rear) / (2 × max).
- `Hud_DrawShipStatus 0x429100` draws the ship diagram: hull colour by % (≥70 normal, ≥30 amber,
  >0 red), **FRONT** and **REAR** brightness by each pool.
- SP rates come from `PLAYER_SHIP_DATA` `LASER/SHIELD/BURNER_RECHARGE_RATE`; MP starts at 1.0
  (`PlayerPower_LoadRates`).

## Impact rendering (investigated 2026-11-10) [c unless tagged]
### The effect
`ShieldFx_Spawn 0x423270` creates a client-pool DCB (type 9) from `g_ShieldFxTable 0x5359c8`,
indexed by a **variant**:

| Variant | Model | Placement | Used for |
|---|---|---|---|
| 0 | shield2.pak | bubble on target | ships, normal weapon |
| 1 | shield6.pak | bubble | ships, weapon shield factor ≤ 32 (only weapon 0x18) |
| 2 | shield3.pak | bubble | team 2 (race.cfg index 2 = **galspan**), normal weapon |
| 3 | shield4.pak | bubble | galspan, weapon 0x18 |
| 4 | shield7.pak | bubble | unused? |
| 5 | shield6.pak | small flash at hit point | turrets, capship/station parts, missiles, other replicas |
| 6 | shield4.pak | at hit point | unused? |

- `ShieldFx_PickVariant 0x420eb0(team == 2, weaponShieldFactor)` picks 0–3. The team is the
  ship des `+0x544` on the server (race index **[l]**) and replica `+0xc2` on the client.
- Bubble (flags 0): centred on the target, scale = target model radius × 0.61, follows the target
  every frame. Flags 3: at the hit point, fixed scale 4.0, doesn't follow.
- The bubble is oriented by `Vec_DirAngles(src, hitPos)`: yaw/pitch of the vector from the hit
  point back toward the projectile. So the flash faces the shot.
- `ShieldFx_Think 0x420fd0`: intensity ramps 0 → 127 → 0 in steps of 10 per frame (~26 frames,
  about 0.5 s), then the DCB is freed. Sound id 2 (bank 2), throttled to once per 12 frames.
- Models come from `g_FxModelLoadTable 0x53ec80` (shield1–7.pak/.pal, explode*, shockwav).
- Hull hits (kind 2) don't use this. They play explosion effect 0 (`0x535a68[0]`, scale 0.125) at
  the hit point.

### Shield vs hull choice
- **Server:** `Shield_ApplyDamage` / `Shield_ApplyDamageFR` return 1 if the pool stayed above 1%,
  else 2. `AiShip_OnDamage`, `Turret_OnDamage`, multipart `0x411b70`, missile `0x40a1c0` and
  `TachSrv_DamagePlayer` all pass that as `kind` to `Weapon_PlayImpact(weapon, 0, kind, …)`.
- **Shooter's client:** uses the replica's `+0xc0 & 0x40`. That bit is "front shield > 1%",
  set by `Dcb_SetRangeFlags 0x403480` in server thinks (`0x80` = rear) and copied into every
  snapshot record (byte 5 → `Dcb_ApplyRecord`). The rear pool is ignored, and the flag is up to
  one snapshot stale. Gates hard-code `0x44`, so they always flash.
- Client `+0x80` stubs:
  - player/AI ship replicas: `ShipReplica_ReportHit` (flag → kind; variant 0–3);
  - replicas spawned with record byte 5 bit 2: `Replica_ReportHitHull` (always hull spark);
  - capship part replicas (type 0xd): `Replica_ReportHitShielded` (flag → kind; variant 5);
  - capship/**starbase** base parts (`CapPartReplica_Init`):
    - destructible parts (flags `& 0x6918`: weapon/shield/power generators, powerplants, …) use
      `CapPartReplica_ReportHit` → 0x2027, always a hull spark;
    - everything else (hull sections) uses `Replica_ReportHit`, **always a shield flash**
      (variant 5).
  - gates (type 0x13 `0x426700`): `Replica_ReportHit`.

### Who sees what
`Impact_Bolt` / `Impact_Missile` (weapon `def+0x68`):
- client side: kind 1 → `ShieldFx_SpawnLocal`; kind 2 → explosion effect 0;
- server side: kind 1 → **0x1004** (`ShieldFx_Broadcast`), kind 2 → **0x1003** effect 0.

Delivery spec for both: radius **375 units** from the hit point, same quadrant, synced clients,
minus player `0x5653f8`.

**Client 0x1004 handler** (`CliOn_ProjectileImpact`):
- `Dcb_FindById(hitId)`; if found and not throttled (12 frames per entity, `+0x120`), it calls
  `ShieldFx_Spawn(ent, …, angles from the packet, variant)`.
- `hitId == 0` → nothing is drawn.

Server-owned bolts (AI, turrets) and missiles: `Proj_OnHitDirect` stages `hitId` = target
`+0x78`, so 0x1004 works and nearby clients see the bubble.
- **Exception:** `TachSrv_DamagePlayer` sets `0x5653f8` = the victim's connection, so **the
  victim is excluded** from its own ship's 0x1004/0x1003. The victim only gets 0x1005 (red screen
  tint + sound 2 + rumble).
- `TachSrv_DamagePlayer` also never sets the variant (`0x5653fc`). It reuses whatever the last
  hit left there.

**Player bolts (0x2003 / 0x2027) — third parties see no shield flash:**
- `TachSrv_OnHitReport` calls `Weapon_StageDamage(weapon, shooter, NULL, pkt, sender, 0, 0, …)`.
  Checked in the disassembly at `0x45f1c6`/`0x45f1c8`: target id and target entity are both 0.
- The victim handler's own impact (server kind) therefore sends **0x1004 with hitId 0**, which
  every client ignores.
- Then `OnHitReport` calls `Weapon_PlayImpact` again with the **client's** kind:
  - kind 1 → a second 0x1004 with hitId 0, also ignored;
  - kind 2 → 0x1003 effect 0 at `hitPos`, which does render.
- Net effect in MP (and SP, which uses the same path):
  - only the **shooter** sees shield bubbles from player fire (its local `ShieldFx_SpawnLocal`);
  - bystanders within 375 units see only hull sparks, and only when the shooter's client said
    "hull";
  - the victim sees neither (excluded when `0x5653f8` = victim, otherwise hitId 0).
- The angles in those dead 0x1004s are computed from `0x5653c0`, which is stale on this path
  (projectile position not staged).
- `0x565408` (0x1004 projectile id / 0x1003 dead id from impacts) is never written, so it's
  always 0.

## Open
- Confirm in game: bystanders don't see shield flashes from player fire, and the victim never
  sees its own bubble.
- Confirm the world-bearing split in game: take fire from the same world side while facing two
  opposite headings. Also, which heading (yaw 0?) faces −z, i.e. for which heading the split is right.
