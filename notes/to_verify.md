# Things to check at runtime (gdb / debugger session)

Behaviours inferred from static analysis that should be confirmed on a live game. Planned
approach: `space.exe` (GoG copy) under wine, with gdb via `winedbg --gdb` or gdbserver. Addresses
are 1:1 with the Ghidra project (ImageBase 0x400000).

Each item gives what to check, where to break, and what to expect. Tick items off and move the
result into the topic note.

## Capital ship turrets (`capships.md`)
- [ ] **Turret refire rate.** Static reading: no cooldown, so a turret fires every server tick
  (50/s) while on target.
  - Break on `Weapon_TryFire 0x497790` when the shooter's type `+0x76 == 0xf`, or on its
    successful call to `Weapon_Fire` at `0x497818`.
  - Count hits per turret over one second. Check whether `def+0x44` (−1) or `def+0x40` (25/50/500)
    governs.
  - Also check whether the server projectile pool (`0x58b03c`, 500 slots) fills up during a
    capship fight (`DcbPool_Alloc` returns 0 in `0x496370`).
- [ ] **Fire tolerance.** Confirm `def+0xc` = `0x400000` (~45°) for guns is the aim-error gate in
  `Turret_Think 0x404c00`. Do turrets fire while still slewing?
- [ ] **Elevation arc.** A turret should drop targets below 5° or above 90° of its mount plane
  (`0x71c70 < pitch ≤ 0x800000`).
- [ ] **Lead spread source.** Which field feeds `Ai_LeadAimPoint 0x402a20` param 8? Is it the
  `.des` `ACCURACY` value?
- [ ] **Subsystem effects.** Kill a weapon generator: turrets stop (root `+0x138` bit 8). Kill the
  last power generator: the ship drifts (hook `+0x134` = `CapShip_DriftHook 0x410e30`).
- [ ] Do starbase turrets use the same AI (`Turret_Think`)?

## Capital ship movement
- [ ] Routes loop back to the first waypoint (`Nav_ReachedWaypoint 0x4018a0`), and the arrival
  radius is 1000 units.
- [ ] Waypoint arrival time: speed is set to distance ÷ (time × 50) via msg 0x1a
  (`Nav_SetWaypoint 0x4016c0`).

## Enforcer arm animation (`animation.md`)
- [ ] **MP pose bug.** On a remote MP client, replica `+0xac` holds the snapshot orientation, not
  the yaw rate. Do remote Enforcers sit in a full `YAW_RIGHT` pose? Watch `Ship_PreRender 0x462fd0`
  weights.
- [ ] Degree → engine-angle constant: read `DAT_0052e538` at runtime (expected 0x10000, giving
  2^25 per turn).

## Palette / rendering (`formats.md` "Per-sector palette re-tint")
- [ ] `RGB` tint feeds the light shade ramp (`Light_BuildShadeRamp 0x4b37a0`), not palettes.
- [ ] What `DEF_GAMMA` / `DEF_BRIGHT` / `GAME_GAMMA_INC/DEC` control (hardware gamma?).

- [ ] Fog sheets: how deep they sit relative to world geometry (z = 10/d; viewer assumes
      2.5·d world units), and whether the two texture stages modulate.
- [ ] What `FUN_0042e140(2·counter, 0xff)` does at a lightning flash (screen shake / static?).
- [ ] Render option `0x5b8f48` that gates fog sheets: which menu setting?

## Collision (`collision.md`)
- [ ] Player bounces off a station or capital ship hull: break `PlayerShip_OnCollision 0x4532e0`.
  Check velocity ×−0.95 and the 50-frame cooldown; ramming an AI ship should deflect or bounce
  and damage both.
- [ ] Collision damage: watch `TachSrv_OnCollision 0x45fd70`. Is it at least 20% of shields per
  hit? Which max does `Shield_GetMax 0x455e40` return?
- [ ] AI ships really pass through geometry when attacking (avoidance off within 6000 units).
  Watch `Ai_AvoidCollision 0x404a50` hits.
- [ ] `NO_AI_COLLIDE` is never read: set a watchpoint on scene `+0x134` during a cutscene.
- [ ] Which entities have a descriptor `+0x6c` / `+0x70` collision hook (gates?).

## Weapons netcode (`multiplayer.md` "Weapons and projectiles")
- [ ] Player bolt hits are client-reported: break `NetCli_SendHitReport 0x415b20` on the shooter
  and `TachSrv_OnHitReport 0x45f180` on the host. Do remote clients' bolt copies ever cause damage
  (they shouldn't)?
- [ ] Missiles: no local missile on fire, so the shooter sees it after a round trip. Check
  `Proj_CreateMissile 0x495960` runs only on the host, and that the missile shows up through the
  snapshot.
- [ ] Missile launch phase (6/2/0 frames) and the class-2 case (0 → never switches?).
- [ ] Can a player's bolt shoot down a missile in MP (missile replica `+0x80`)?
- [ ] Empty-ammo fire: with server ammo at 0, does the client still see its bolt and get hits
  credited through 0x2003? Watch `TachSrv_OnFire 0x45ef70` returning early.
- [ ] Sapper attach round trip: 0x2017 → 0x1101 + 0x1020; the drain msg 0x11 every 8 frames on the
  host.

## Single-player / netcode (`singleplayer.md`, `multiplayer.md`)
- [ ] Real-time server tick rate: is it one `NetSrv_Tick` per 50 Hz fixed step?
- [ ] Startup name tables (stages 0/1): capture and decode the actual STARTUPDATA blob.
- [ ] Replica lag in a real MP session: break in `TachCli_ReplicaThink 0x415430` and compare the replica's `+0x34` with `+0x108`. At steady velocity, expect
  `+0x108 − +0x34 ≈ 15 × +0xa0`. Also confirm the 16-tick snapshot interval per client.

## Ship AI and skill (`ai.md`)
- [ ] **Skill values.** Break in `Sped_ConstructEntity 0x434ac0` after the hard-mode bump
  (`0x434ca9`) and read `+0x310` for a few ships. Placement override (`+0x39`) should win over
  `.des` SKILL; missing SKILL should give 2 (ACE).
- [ ] **Lead jitter.** In `AiThink_Attack 0x402cc0` at `0x402dd5`, `ebp` = jitter mask {127,63,31,0}
  by skill. An ELITE should lead perfectly; watch where its shots land vs a ROOKIE.
- [ ] **Patience / break-off.** Watch `+0x328` climb while you out-turn an AI; at 20/40/60/80 it
  should call `Ai_BreakOff 0x402910` with arg 10.
- [ ] **Attacker cap.** On easy (cap 1) only one AI should be in Attack on the player at a time;
  others should pick other targets or fly free. Read player `+0xc8`/`+0xca`.
- [ ] **TARGET_RANGE units.** The `.des` range is stored `<<13`; compare the acquisition distance
  against `.des` TARGET_RANGE (×1 or ×2 world units?).
- [ ] **Call for help / Star Patrol.** Hit a neutral ship 16 times in a row and check whether a
  `SOLPTRLF` patrol ship engages (`Ai_PatrolRespond 0x404070`).

## Shields (`shields.md`)
- [ ] **Front/rear split is world-relative.** Break in `Shield_SplitFrontRear 0x4192c0` and read
  arg 0 (bearing) and the ship's yaw `+0x4c`. Take fire from the same world side while facing two
  opposite headings: if the same pool drains both times, the split ignores facing.
- [ ] **Client-sent shield rate.** PLAYERDATA `+0x2c` → server `+0x128/+0x130`. Send 0x40000 and
  check that the server regenerates at 4× (it doesn't clamp).
- [ ] **0x2005 op 3 amount.** Send `{3, 0xffff}` and check that both shields jump on the server
  with no laser cost.
- [ ] **SPX sector flags vs hardware items.** `+0x88` bit0 radiation damage is skipped when des
  `+0x158 & 8`, bit1 fog range cap when `+0x158 & 0x40`. Buy RADIATION SCREEN / FOG RADAR and
  check those bits get set (guess from JOBS.BIN unlock text; see formats.md SPX).
- [ ] **SPX placement unknowns.** Kind-3 `+0x58` (0..5, mostly fighters) and flag 0x4 (most common
  bit) have no static reader; gate `+0x54` (usually 1) and `+0x64`. Watch reads with a hardware
  breakpoint on a loaded placement (formats.md SPX).
