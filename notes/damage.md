# Damage: calculation and application (investigated 2026-11-10)

Confidence: **[c]** confirmed in code (decompile, disassembly where noted), **[l]** likely, **[?]** unclear.
Related: `shields.md` (power struct, regen, impact FX), `weapons.md` (per-weapon numbers),
`multiplayer.md` (who reports hits), `collision.md`.

## Pipeline overview [c]
Every damage event goes through the same three steps:

1. **Stage.** `Weapon_StageDamage 0x493320(weapon, shooter, srcPos, hitPos, excludeConn, targetId,
   target, scale, projId, quadrant)` fills globals from the weapon def:
   - `0x5653e0` **dmg = def+0x14 × scale >> 16**;
   - `0x5653e4` shield factor `def+0x18`, `0x5653e8` hull factor `def+0x1c`, `0x5653ec` system
     factor `def+0x20` (all /256);
   - `0x5653cc` hit position (world); `0x5653c0` source position; `0x5653f4` shooter;
     `0x5653d8` target id, `0x5653f0` target entity (used for impact FX only).
2. **Apply.** The caller invokes the target's `+0x80` handler, which reads the globals.
3. **Effect.** The handler calls `Weapon_PlayImpact` with kind 1 (shield held) or 2 (hull hit)
   (`shields.md` → Impact rendering).

### Where `scale` comes from
| Source | scale | Notes |
|---|---|---|
| Player bolt, MP/SP (0x2003 / 0x2027) | client's u16 `<< 2` | 1.0, or 0–1.0 for the Solaris charge; unchecked, up to ~4.0 |
| AI fighter / turret shots | 1.0 | `Weapon_TryFire(…, 0x10000, …)` in `Dcb_Think_AiFighter` / `Turret_Think`; AI never charges |
| Direct-hit projectiles (server) | projectile `+0xf0` (= fire-time scale) | `Proj_OnHitDirect 0x4943c0` |
| Beams and railgun-type on-hit `0x4942d0` | 1.0 fixed | |
| Blast sphere | intensity × 256 (≤ ~1.0) | see Blasts |
| Collisions | n/a | own formula, see below |
| Debug kill-target `0x430840` | dmg 250000, factors 1.0 | |

## Players: `TachSrv_DamagePlayer 0x460f60` [c]
In order:
1. **Vetoes:**
   - the player is dead (connection `+0x1d0`);
   - SP god-mode cheat;
   - SP cutscene playing (`0x58f1c0`);
   - rules `+0x84`, which is **NULL in both the SP and MP rule tables**, so there's no friendly-fire
     filter and teammates and your own blasts hurt you;
   - hull already ≤ 0.
2. **Front/rear split by world bearing:** `Shield_SplitFrontRear(atan2(hitPos − shipPos))`, rear
   share = dmg × b/256. The ship's facing is ignored (`shields.md`).
3. **× global player damage scale `0x5a663c` = 0xa6 = 166/256 ≈ 0.648.** Set unconditionally by
   `CmdLine_ParseSwitches 0x433420` (disassembly `0x43345b`), never changed. So **players always
   take ~65% of the nominal damage**, in SP and MP alike.
4. **× 45000/65536 ≈ 0.687 on SP easy** (`spacesav[0x2f] == 0` and SP). Combined with step 3:
   **easy ≈ 0.445×**.
5. **`Shield_ApplyDamageFR 0x4191f0`**, per pool independently:
   - `pool −= share × shf >> 8`, clamped at 0;
   - **if the pool is now < 1% of max**: `hull −= share × hf >> 8` and `system −= share × sysf >> 8`.
   - So the hit that breaks a pool leaks that pool's **whole** share into the hull, not just the
     overflow. A pool that's down passes its share straight to the hull. The other pool is
     unaffected even if full.
   - Returns kind 1 if both pools stayed above 1%, else 2.
6. Hull ≤ 0 → `TachSrv_OnShipKilled`. Otherwise the rules `+0x28` hook (SP: hull-% event) and an
   impact (0x1004/0x1003, victim excluded). The victim always gets **0x1005** (red tint, sound, rumble).

### Worked example
Pulsar Laser (1000, shields 1.0, hull 0.78) hitting a player from straight "ahead" in world terms
(b = 0):
- front share = 1000 × 0.648 = 648, so the front shield takes 648;
- once the front shield is < 1%, the hull takes 648 × 0.78 ≈ 505 per hit.

On SP easy: 445 / 346.

### Scope of the ×0.648 (verified 2026-11-10) [c]
- **Every player ship has `TachSrv_DamagePlayer` as its handler.** The server player DCB is
  created in `0x4552a0` (`+0x80 = TachSrv_DamagePlayer`) for every joined player, SP or MP. It's
  the only damage handler player ships have.
- **The value is always 0xa6.** `CmdLine_ParseSwitches` is called from `CmdLine_Dispatch`
  (WinMain) at every startup, before any mode runs. It's the only write to `0x5a663c` (one
  `mov` at `0x43345b`), and the only read is `0x460ffb` in `DamagePlayer`. It's applied on the
  **server**, so the host's exe decides; a client can't change it.
- **Paths that reach it:**
  - player bolts (0x2003 → `+0x80`);
  - AI and turret bolts and missiles (`Proj_OnHitDirect` → `+0x80`);
  - blasts (`Blast_Damage*` → `+0x80`);
  - beams (`0x4942d0` → `+0x80`);
  - the *other* party in a collision (`TachSrv_DamageEntityById` → `+0x80`).
- **Paths that bypass it** (they write the power struct directly):
  - your **own** collision damage (`TachSrv_OnCollision` → `Shield_ApplyDamage`);
  - **sector radiation** (`Sector_RadiationTick 0x460c20`: 150 to each pool, then hull, every
    16 ticks, unless the radiation-screen bit is set);
  - the **Phase sapper** shield drain (`Power_DrainShields`, msg 0x11 kind 4);
  - power transfers (0x2005).
- **Collision bug:** `TachSrv_DamageEntityById` sets only dmg, shooter = 0 and weapon 0x26. When
  the rammed entity is a player, `DamagePlayer` uses the **stale** shield/hull/system factors and
  hit position left over from the last staged hit (any weapon, any target). So ramming damage to
  the other player varies with whatever was hit last on the server, and its front/rear split uses
  that old hit point.

## AI ships: `AiShip_OnDamage 0x404440` [c]
1. **Alliance filter `0x4043f0`:** damage from a player (type 1) or an unknown shooter always
   applies. Damage from another AI applies only if
   `raceTable[victim.race].friendMask (+8) & raceTable[shooter.race].bit (+0)` is 0. So **allied
   races can't hurt each other**; enemies and neutrals can. **[c]** for the code; that `+8` is the
   friend mask is inferred from the logic **[l]**.
2. **`Shield_ApplyDamage 0x419170`**, single pool (the front pool `+8`):
   - `shield −= dmg × shf >> 9`, i.e. **half rate**;
   - if shield ≤ 1% after that: `hull −= dmg × hf >> 8`, `system −= dmg × sysf >> 8`;
   - no direction and no global scale.
3. Hull < 1 → mission "killed by" event + death. Otherwise:
   - mission damage events and the impact;
   - an **evade check** (`Ai_ShouldEvadeHit`, skill-based, `ai.md`);
   - 16 consecutive hits from the same attacker → `Ai_CallForHelp`;
   - wingman voice line.
4. **System meter at 0 → disabled.** If `+0x134` (power `+0x28`) is 0, `Dcb_InitAiShip 0x4036f0`
   swaps the think for `Dcb_Think_AiShip` (plain drift, no AI or weapons), posts mission event
   {1, 6} and sets `+0xf7 = 1` (once).

## The system meter (power `+0x28`) [c] / [l]
- Starts at the des hull value (`def+0x20` of the power block).
- `Shield_ApplyDamage(dmg, shf, hf, sysf, …)` does `+0x24 −= dmg×hf` and `+0x28 −= dmg×sysf`
  (`ApplyDamageFR` does the same per pool share). The hull factor feeds only the hull, and the
  **system factor feeds only `+0x28`**. Only the Tesla EMP Missile, EMP Projector and Tractor
  Wave (system factor 1.0) drain it.
- Like hull damage, it only lands **while the shield is down** (below 1%).
- **AI ships:** reaching 0 disables them (above).
- **Players:** server `+0x144` is decremented but nothing reads it, and it isn't in GAMEDATA. EMP
  weapons have **no effect on human players** beyond their shield damage **[l]**: no reader found
  in server/client code; the other `+0x144` hits in the disassembly belong to scene objects.

## Turrets and capital-ship/station parts [c]
- `Turret_OnDamage 0x411af0` and multipart `0x411b70` use `Shield_ApplyDamage` on their own power
  struct (`+0x15c` / `+0x144`): half-rate shield, then hull and system. There's no alliance filter.
- Death:
  - turret: `0x411aa0`;
  - capship part: `CapShip_StartDeath(…, 1000)`.
- Mission damage events are posted for parts.
- MP part hits arrive by part id (0x2027 → `CapShip_DamagePartById` walks the part chain).
- Hull sections without a handler are indestructible (client always shows a shield flash).

## Blasts (blast torpedoes, mine blast) [c]
`Proj_OnHitSplash 0x4941b0` turns the projectile into a stationary blast sphere (`0x494160`):
- scale 2.0, intensity 255, growth rate `def+0x9c` (Blast/Adv Blast 60000, Mine blast 90000);
- after a 7-frame hold, `0x494080` runs each frame:
  - `scale += growth`, `growth −= 1250`;
  - `reservoir −= decay` (starts 3.0, −128 per frame, min 1.0);
  - intensity = min(255, reservoir >> 16), with the reservoir starting at 162.5 → **~62 frames
    of life**.
- **Every 16 frames** while intensity > 15 (`0x493ec0`, phase = projectile serial & 15), it damages
  every entity whose surface is inside `blstsphr radius (~0.99) × scale`:
  - players list (`0x493ce0`, skips the owner only if `def+0xd8 & 1`, which no blast weapon sets);
  - the AI list and the 3×3 spatial cells around it (`0x493de0`, no owner skip).
  - **The shooter isn't protected.**
- Per tick: `scale = intensity << 8`, i.e. ×intensity/256. The hit point is the model contact
  toward the target, else the target centre.
- Simulated ticks (frame, radius scale, intensity):
  - phase 0: (0, 2.0, 255) (16, 10.3, 132) (32, 19.6, 85) (48, 24.0, 38), **sum 1.99× damage**;
  - phase 8: (8, 3.8, 156) (24, 15.6, 108) (40, 22.4, 61), **sum 1.27×**.
  - A target at the centre takes 1.3–2× the listed damage over the blast's life. Targets further
    out only get the later, weaker ticks. Mine blast radius grows to ~49 instead of ~24.
  - For scale: a Bora shuttle model radius is ~17.
  - Note: these ticks may hit the same entity twice if it's in both the list and a cell **[?]**.

## Collisions: `TachSrv_OnCollision 0x45fd70` [c]
- The client reports 0x2009 `{impact speed v, other id}`.
- If the other entity's desc has a `+0x70` collide hook, that hook handles it instead.
- Otherwise, `dmg = ShieldMax × clamp(min(v, 1.25·maxSpeed) / maxSpeed × 0.95, 0.2, 1.25)`:
  - **at least 20% of your shield max per bump**, up to 125%;
  - applied with `Shield_ApplyDamage(dmg, 1.0, 1.0, 0)` → front pool at half rate, then the hull
    once the front pool is < 1%, even if the rear pool is full;
  - **the same dmg** is applied to the other entity (`TachSrv_DamageEntityById`).
- No global ×0.648 here.

## Sappers [c]
- On hit they attach (`Sapper_OnHit`). The listed 2200 damage is **not** applied.
- `Sapper_ThinkServer` sends message 0x11 with the sapper kind (`def+0xf4`: 1 inertia, 2 power,
  4 phase, 8 remote) to the target every 8 frames until its timer runs out.
- The effect (drain −10 per 16-frame tick on laser or burner for players, `shields.md`) lives in
  the target's message handler.

## Max values the damage works against [c]
### Ship .des scaling (everyone)
- `Ship_LoadDes 0x463ef0` multiplies the shield max (`+0xd8`) and hull (`+0xf0`) of **every SHIP
  .des** (players and AI) by **`0x5a6638` = 0x99/256 ≈ 0.598**. The value is set unconditionally
  in `CmdLine_ParseSwitches`.
- `ShipDes_Finalize` then precomputes the **upgraded** maxima ×1.25 (constant `0x52e76c` = 1.25):

  | Upgraded field | Base field | Pool |
  |---|---|---|
  | `+0xdc` | `+0xd8` | shield |
  | `+0xd4` | `+0xd0` | laser energy |
  | `+0x114` | `+0x110` | burner |

- The "down" threshold `+0xe0` = base shield / 100, so it doesn't grow with the upgrade.

### Upgrade items: SHIELD_INCREASE / WEAPONS_INCREASE / BURNER_INCREASE
- These are ship **system items** in `g_ShipSystemTable 0x5361b8` (21 items, bits 1..0x100000):
  - `0x20000` WEAPONS_INCREASE;
  - `0x40000` SHIELD_INCREASE;
  - `0x80000` BURNER_INCREASE;
  - also `8` ANTI_RADIATION (the radiation-damage exemption), `0x4000` SMART_SHIELDS, …
- `Systems_ToPowerUpgradeFlags 0x455dd0` maps them to power `+0x2c` bits: 1 laser, 4 shield,
  2 burner.
- `Shield_GetMax` / `Power_GetLaserMax` / `Power_GetBurnerMax` return the ×1.25 field when the
  bit is set. SHIELD_INCREASE raises **both** front and rear pool maxima to 1.25×.
- Source of the bits (connection `+0x158`):
  - **SP:** `Systems_GetInstalledBits` (installed hardware) at join.
  - **MP:** the join loadout, then **0x2028** (`TachSrv_OnLoadout 0x4607b0`), applied as sent with
    no check.
  - `Power_SetUpgradeFlags` only changes the cap; the current pools aren't refilled.
    `Power_Init` (spawn/respawn) fills to the new max.

### Rank (power level `+0xfc`) — Base Wars only
- The server player DCB is zeroed on allocation. `+0xfc` is written only by the Base Wars module
  (`0x40c000–0x40e400`) and the SP "ship enhanced" cheat. So **outside Base Wars the level is 0
  and every table below is 1.0**.
- **Base Wars:** `BaseWars_AddPoints` (cap 3700) → `BaseWars_UpdateRank` sets rank 1–10 from
  `g_RankPointThresholds` {0, 100, 250, 400, 700, 1100, 1600, 2200, 2900, 3700}. It also sends
  0x1127 and the messages "YOU HAVE INCREASED YOUR RANK" / "SHIP UPGRADED: <stat> INCREASED"
  (or the DOWNGRADED versions).
  - Kill points **[l]** (`0x40d030`): base `spacesav[0x6e]` × (1 + 0.5 × rank gap) when killing a
    higher rank, × (1 − 0.1 × gap) when killing a lower rank (floor 0).
  - Base-related awards `0x40d7a0` / `0x40dae0` (×25 per …) **[?]**.
  - `0x40d710` resets rank to 1 and points to 0.
- What each rank gives (tables indexed by rank, capped at 10; rank 0 = 1.0):

  | Rank | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 |
  |---|---|---|---|---|---|---|---|---|---|---|
  | Hull max `g_HullLevelScale` | 1.0 | **1.2** | 1.2 | 1.2 | **1.4** | 1.4 | 1.4 | **1.6** | 1.6 | 1.6 |
  | Top speed `g_RankSpeedScale` | 1.0 | 1.0 | **1.05** | 1.05 | 1.05 | **1.10** | 1.10 | 1.10 | **1.15** | 1.15 |
  | Recharge `g_PowerRegenLevelScale` | 1.0 | 1.0 | 1.0 | **1.2** | 1.2 | 1.2 | **1.4** | 1.4 | 1.4 | **1.6** |

  Hull → `Power_GetHullMax` (spawn, repair cap). Speed → flight model `0x424130`/`0x424150` ×
  des top speed / burner speed (client side). Recharge → `Power_Regen` amount. This matches the
  rank-up message tables `0x533020`: rank 2 HULL, 3 TOP SPEED, 4 ENERGY RECHARGE RATE, 5 HULL, …
- A rank-up raises the hull **cap** but doesn't add hull right away (no refill in
  `BaseWars_UpdateRank`). You get it at the next spawn or via repair.
- How the client's flight model gets the local rank for the speed scale isn't traced
  (0x1127 stores it per scoreboard slot) **[?]**.
- `Cheat_ShipEnhanced 0x414520` (SP cheat): rank 10 and hull set to the rank-10 max.

## Factors that are *not* considered
- Ship facing (front/rear uses world bearing), relative velocity, range and falloff (except blast
  intensity over time), armour type.
- AI skill: it changes aim and evasion, not damage.
- Difficulty for AI targets: only player damage gets the SP-easy factor.
- Server-side validation of client hit reports (target, position, weapon, scale), `shields.md` /
  `multiplayer.md`.

## Open
- Base Wars point awards other than kills; how the client applies its rank to top speed.
- Capital-ship shield generators: does destroying one drop other parts' shields? (No link found
  in `0x411b70`.)
- Blast double-hits across the list and spatial cells.
