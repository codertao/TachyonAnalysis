# Weapon definitions (extracted 2026-11-10) [c]

Source: the compiled-in table `g_WeaponDefs 0x55a560` (stride 0x110, ids 0..0x25, 0x1c = terminator).
Internal names: `{name, id}` table at `0x55a3c0`. Display names: `def+0x4c` = record index into
`ingame.bin` (group WEAPON_NAMES). Models: `def+0x74` → slot filled from the load table at
`0x559fc4..0x55a3a4` (`{pak, slot, pal, pal, flag}`). Nothing loads or patches these values from
config; `0x4936c0` only derives DPS (`+0x24..0x38`) and flight range (`+0xcc`) at startup. There's a
debug dump of the same numbers, `Weapon_DumpStats 0x498900` (writes `weapon_desc`, behind debug flag `0x5a6730`).
Full rows: `notes/weapons.json` (generator: scratchpad `weapons.py`).

Distances are raw/65536 (same as `multiplayer.md`); speed is units/s at 50 Hz. HUD range readout = units/128 (see `units.md`).

### Speed units vs the HUD / ship speeds
- HUD speed readout (`FUN_00428410`) = `ROUND(|v| raw/frame × 400/65536)` + " M". So **HUD = table u/s × 8**
  (laser 375 u/s → 3000 on the HUD).
- `.des` `MAX_SPEED` is stored ×163.84 (= 65536/400; `0x423e60`, const `0x52e760`, applied in the des
  loader at `0x463ac7`), so the **HUD shows `.des` MAX_SPEED directly** at full throttle. `ACCELERATION` becomes
  `MaxSpeed_raw/(ACC×50)` per frame, i.e. roughly seconds from 0 to max speed. Afterburner top =
  `MAX_SPEED × TOP_SPEED_BOOST` (`0x464029` → des+0x98).
- Flight model `Entity_ApplyTurnControl 0x4241c0`: target = top × rankSpeed[`0x532f9c`, 1.0–1.15] × power factor
  × **1.25 if item `SPEED_BOOSTER` (0x400)**; velocity converges to target × throttle/1024 (drift-damped).
- Bolts do not inherit shooter velocity (`Proj_Launch`).
- Buyable ships: cruise 470–615, burner 1120 (Phoenix)–2152 (Blade). Blade at rank 10 with the booster on burner
  ≈ 3094, which beats every laser except Deimos (3260) and Pulsar (3520). It could overrun its own Arc/Glint
  shots. AI `SOLPTRLF` (patrol) burner = 830 × 3.7 = 3071.

## Field map
| Off | Meaning |
|---|---|
| +0x00 | id |
| +0x04 | AI usage category bits (matched by AI weapon pick `0x492f40`) |
| +0x08 | second AI selection mask |
| +0x0c | AI aim tolerance (must be ≥ required) **[l]** |
| +0x14 | base damage per hit |
| +0x18 / +0x1c / +0x20 | shield / hull / "system" factor, /256. +0x20 drains the system meter, power `+0x28` (non-zero only on Tesla EMP missile, EMP Projector, Tractor Wave): disables AI ships at 0, unused for players (`damage.md`) |
| +0x24..+0x38 | derived shield/hull DPS for player and AI refire |
| +0x3c | lifetime (frames) |
| +0x40 | refire (frames), player mounts |
| +0x44 | refire for AI/turret mounts (WeaponSys flag 4), −1 = same as +0x40 |
| +0x48 | ? (small index 5..37) |
| +0x4c | display name index (ingame.bin) |
| +0x50 | default ammo; 0 = uses energy instead |
| +0x54 | speed (16.16 units/frame) |
| +0x58 | energy per shot (only when ammo = 0; Solaris: per frame of charge) |
| +0x5c | AI target class mask (−1 any, 3 fighter+bomber, 12 capship+starbase) |
| +0x60 | AI engage range |
| +0x64..+0x70 | think / impact FX / fire / create callbacks |
| +0x74 | model slot |
| +0x84 | guidance class (0 missile homing, 1 torpedo, 2 unguided); +0x88 max turn, +0x8c turn ramp |
| +0x98 | on-hit callback (direct / splash / sapper) |
| +0x9c..+0xac | blast/impulse parameters **[?]** |
| +0xd4 | class label string (turrets only) |
| +0xdc / +0xe0 | pre-fire (charge/hold) and release callbacks |
| +0xe4 | max charge frames (Solaris 500) |
| +0xf4 / +0xf8 | sapper effect bit (1 inertia, 2 power, 4 phase, 8 remote) / duration **[l]** |
| +0x104 | WEAPON_CLASS bit (1 laser, 2 torpedo, 4 missile, 8 sapper, 0x10 rocket, 0x20 gun, 0x40 special, 0x80 rail) |
| +0x108 | ? (50000; 20000 for rockets) |

## Table
Shield/hull per hit = damage × factor / 256 (nominal; players take ×0.648 on top, ×0.445 on SP easy; AI ships, turrets and parts take half
shield damage). Sappers' damage is never applied (they attach and drain). Hull damage only lands while the hit pool is below 1% (`shields.md`). DPS = per-hit × 50/refire.

| id | Internal | Display | Class | Model | Dmg | Shield/hit | Hull/hit | Sys/hit | Refire s (AI) | Shield DPS | Hull DPS | Energy | Ammo | Speed | Life s | Travel | AI range | Targets |
|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|---|
| 0 | GALSPAN_LIGHT_LASER | Glint Lt Laser | Laser | glazl.pak | 1250 | 1250 | 341 |  | 0.20 | 6250 | 1705 | 50 |  | 375.0 | 3.0 | 1125 | 437.5 | any |
| 1 | GALSPAN_MEDIUM_LASER | Flare Med Laser | Laser | glazm.pak | 1750 | 1750 | 1025 |  | 0.24 | 7292 | 4271 | 65 |  | 375.0 | 3.0 | 1125 | 625.0 | any |
| 2 | GALSPAN_HEAVY_LASER | Deimos Hvy Laser | Laser | glazh.pak | 7500 | 7500 | 4482 |  | 1.00 | 7500 | 4482 | 96 |  | 407.5 | 3.0 | 1222 | 625.0 | any |
| 3 | BORA_LIGHT_LASER | Arc Lt Laser | Laser | blazl.pak | 1150 | 1150 | 287 |  | 0.20 | 5750 | 1435 | 55 |  | 310.0 | 3.0 | 930 | 437.5 | any |
| 4 | BORA_MEDIUM_LASER | Boran Med Laser | Laser | blazm.pak | 1650 | 1650 | 1160 |  | 0.24 | 6875 | 4833 | 70 |  | 310.0 | 3.0 | 930 | 625.0 | any |
| 5 | BORA_HEAVY_LASER | Hvy Mining Laser | Laser | blazh.pak | 2500 | 2500 | 1250 |  | 0.30 | 8333 | 4167 | 100 |  | 342.5 | 3.0 | 1027 | 625.0 | any |
| 6 | ADVANCED_LASER | Pulsar Laser | Laser | blaza.pak | 1000 | 1000 | 796 |  | 0.10 | 10000 | 7960 | 130 |  | 440.0 | 3.0 | 1320 | 625.0 | any |
| 7 | FORTIS_TORPEDO | Solaris Torpedo | Torpedo | torpfrts.pak | 35000 | 35000 | 26796 |  | 0.50 (10.00) | 70000 | 53592 | 10 |  | 150.0 | 15.0 | 2250 | 1000.0 | capship+starbase |
| 8 | SECO_TORPEDO | Hunter Torpedo | Torpedo | torpseco.pak | 5000 | 5000 | 3828 |  | 4.00 | 1250 | 957 | 2000 |  | 175.0 | 8.0 | 1400 | 500.0 | any |
| 9 | BLAST_TORPEDO | Blast Torpedo | Torpedo | torpblst.pak | 12000 | 12000 | 12000 |  | 5.00 | 2400 | 2400 | 8000 |  | 112.5 | 8.0 | 900 | 625.0 | any |
| 10 | ADVANCED_BLAST_TORPEDO | Adv Blast Torpedo | Torpedo | torpabst.pak | 12000 | 12000 | 12000 |  | 5.00 | 2400 | 2400 | 12000 |  | 175.0 | 5.0 | 875 | 1250.0 | any |
| 11 | SHIELD_TORPEDO | Disruptor Torpedo | Torpedo | torpshld.pak | 40000 | 40000 | 0 |  | 30.00 | 1333 | 0 | 8000 |  | 200.0 | 10.0 | 2000 | 1250.0 | any |
| 12 | TIGER_MISSILE | Tiger Missile | Missile | misstigr.pak | 8000 | 2000 | 8000 |  | 0.50 (4.00) | 4000 | 16000 |  | 12 | 188.1 | 30.0 | 5644 | 1250.0 | any |
| 13 | HEAVY_MISSILE | Sunspot Missile | Missile | misshevy.pak | 14000 | 9953 | 14000 |  | 0.50 (4.00) | 19906 | 28000 |  | 8 | 187.5 | 30.0 | 5625 | 1250.0 | any |
| 14 | DISABLER_MISSILE | Tesla EMP Missile | Missile | missdisb.pak | 25000 | 9375 | 0 | 25000 | 5.00 | 1875 | 0 |  | 6 | 130.0 | 30.0 | 3900 | 1250.0 | any |
| 15 | SWARM_MISSILE | Swarm Missile | Missile | missswrm.pak | 17000 | 11953 | 17000 |  | 0.50 (5.00) | 23906 | 34000 |  | 8 | 212.5 | 20.0 | 4250 | 1250.0 | any |
| 16 | REMOTE_MINE | Remote Sapper | Sapper | mineremt.pak | 2200 | 2200 | 1100 |  | 0.28 | 7857 | 3929 |  | 2 | 300.0 | 3.0 | 900 | 437.5 | any |
| 17 | INERTIAL_MINE | Inertia Sapper | Sapper | mineinrt.pak | 2200 | 2200 | 1100 |  | 0.28 | 7857 | 3929 |  | 12 | 300.0 | 3.0 | 900 | 437.5 | any |
| 18 | POWER_MINE | Power Sapper | Sapper | minepwer.pak | 2200 | 2200 | 1100 |  | 0.28 | 7857 | 3929 |  | 16 | 300.0 | 3.0 | 900 | 437.5 | any |
| 19 | SHIELD_MINE | Phase Sapper | Sapper | mineshld.pak | 2200 | 2200 | 1100 |  | 0.28 | 7857 | 3929 |  | 16 | 300.0 | 3.0 | 900 | 437.5 | any |
| 20 | SPIRE_ROCKET | Spire Rocket | Rocket | roktspir.pak | 3500 | 3486 | 3486 |  | 0.50 (1.00) | 6972 | 6972 |  | 40 | 325.0 | 10.0 | 3250 | 1250.0 | any |
| 21 | PLASMA_ROCKET | Plasma Rocket | Rocket | roktplas.pak | 18000 | 17929 | 7031 |  | 0.50 (1.00) | 35858 | 14062 |  | 20 | 260.0 | 10.0 | 2600 | 1250.0 | any |
| 22 | HELIOS_ROCKET | Helios Rocket | Rocket | rokthlos.pak | 90000 | 89648 | 89648 |  | 0.50 (4.00) | 179296 | 179296 |  | 2 | 62.5 | 30.0 | 1875 | 2500.0 | capship+starbase |
| 23 | RAILGUN | Railgun | Rail | railgun.pak | 20000 | 7421 | 20000 |  | 4.00 | 1855 | 5000 | 3500 |  | hitscan | 3.0 | 0 | 437.5 | any |
| 24 | GATLING_GUN | Chatter Cannon | Gun | bullet.pak | 500 | 46 | 500 |  | 0.10 | 460 | 5000 |  | 750 | 300.0 | 3.0 | 900 | 437.5 | any |
| 25 | EMP_CANNON | EMP Projector | Gun | empburst.pak | 1500 | 750 | 0 | 1500 | 0.12 | 6250 | 0 | 75 |  | 250.0 | 3.0 | 750 | 437.5 | any |
| 26 | CORONA_DEVICE | Corona Device | Special | corona.pak | 12000 | 12000 | 12000 |  | 1.00 | 12000 | 12000 | 22000 |  | 250.0 | 3.0 | 750 | 62.5 | any |
| 27 | TRACTOR_WAVE | Tractor Wave | Special | tractor.pak | 1500 | 750 | 0 | 1500 | 1.00 | 750 | 0 | 15 |  | 250.0 | beam | - | 437.5 | any |
| 29 | LIGHT TURRET | LIGHT TURRET | turret/special | gtlazl.pak | 3000 | 3000 | 1500 |  | 0.50 | 6000 | 3000 | 0 |  | 400.0 | 5.0 | 2000 | 1500.0 | fighter+bomber |
| 30 | LARGE TURRET | LARGE TURRET | turret/special | gtlazh.pak | 6000 | 6000 | 3000 |  | 1.00 | 6000 | 3000 | 0 |  | 400.0 | 5.0 | 2000 | 1500.0 | fighter+bomber |
| 31 | LARGE TURRET | LARGE TURRET | turret/special | turlaser.pak | 8000 | 8000 | 4000 |  | 1.00 | 8000 | 4000 | 0 |  | 400.0 | 5.0 | 2000 | 1500.0 | fighter+bomber |
| 32 | LARGE TURRET | LARGE TURRET | turret/special | turlasr2.pak | 10000 | 10000 | 5000 |  | 1.00 | 10000 | 5000 | 0 |  | 400.0 | 5.0 | 2000 | 1500.0 | fighter+bomber |
| 33 | MINE BLAST | MINE BLAST | turret/special | torpblst.pak | 15000 | 15000 | 15000 |  | 5.00 | 3000 | 3000 | 3000 |  | hitscan | 0.02 | 0 | 625.0 | any |
| 34 | BEAM_A | BEAM_A | turret/special | beam_a.pak | 70000 | 70000 | 70000 |  | 10.00 | 7000 | 7000 | 3500 |  | hitscan | 3.0 | 0 | 1187.5 | capship+starbase |
| 35 | BEAM_A | BEAM_A | turret/special | beam_d.pak | 70000 | 70000 | 70000 |  | 10.00 | 7000 | 7000 | 3500 |  | hitscan | 3.0 | 0 | 1187.5 | capship+starbase |
| 36 | BEAM_A | BEAM_A | turret/special | beam_c.pak | 70000 | 70000 | 70000 |  | 10.00 | 7000 | 7000 | 3500 |  | hitscan | 3.0 | 0 | 1187.5 | capship+starbase |
| 37 | BEAM_A | BEAM_A | turret/special | sbeam.pak | 200000 | 200000 | 200000 |  | 10.00 | 20000 | 20000 | 3500 |  | hitscan | 3.0 | 0 | 1937.5 | capship+starbase |

## Notes per weapon
- **Solaris Torpedo** (FORTIS, id 7): charge weapon (`Weapon7_ChargeScale`); 10 energy per frame held,
  up to 500 frames; damage × charge fraction. Its DPS figures assume full charge every 25 frames and are meaningless.
- **Hunter / Adv Blast / Disruptor Torpedo** have turn rates (guided). Disruptor has hull factor 0 (shield only).
  Guidance differs per torpedo; see "Missile and torpedo guidance" below.
- **Tesla EMP Missile, EMP Projector, Tractor Wave**: hull factor 0, system factor 1.0.
- **Chatter Cannon** (GATLING, id 0x18): shield factor 24/256, the only weapon ≤ 32, which also picks
  the alternate shield-hit FX (`shields.md`). 750 rounds.
- **Railgun**: hitscan (`Weapon_FireHitscan`). **Tractor Wave**: sustained beam (lifetime effectively infinite).
- **Remote Sapper**: tap to drop, holding > 49 frames aborts (`Weapon10_HoldGate`).
- **Helios Rocket** and **Solaris**: AI only aims them at capships/starbases.
- **Turrets 0x1d–0x25**: see `capships.md` (SUB_TYPE mapping). MINE BLAST (0x21) is the blast of a
  detonated mine.

## Missile and torpedo guidance
Every missile and torpedo is created by `Proj_CreateMissile`. It starts in `Proj_ThinkMissileLaunch`: straight flight for a
launch phase from `0x55a51c[guidance*8]` (guidance 0 = 6 frames, guidance 1 = 2 frames). When that ends, life resets to
def+0x3c and think switches to def+0x64. So the guidance class (+0x84) only sets the launch phase length. Behaviour comes
from the per-weapon think. Frames are 50 Hz. Angles use 0x2000000 per turn.

Shared steering (`Proj_SteerToward 0x494db0`): yaw/pitch toward the target, each clamped to the current turn rate
(+0xec). Velocity is then re-pointed along the nose at def+0x54. The turn rate starts at 0 and ramps by def+0x8c per frame up to def+0x88.

| Weapon | Think | Steering | Lock loss | Re-acquire | Detonation |
|---|---|---|---|---|---|
| Tiger / Sunspot / Tesla EMP / Swarm missiles (12-15), Disruptor Torpedo (11) | `Proj_ThinkMissile` | yes | error > 45 deg in yaw or pitch -> `Missile_LoseLock`, flies straight from then on; decoys (every 32 frames) | never | contact (post-think segment cast); expiry -> +0x118 hook, removed |
| Hunter Torpedo (8) | `Torp_ThinkHunter 0x4951b0` = `Proj_ThinkMissile` + extra | yes | same | every 8 frames while unlocked: nearest hostile within 250 units (~1.95 range) | contact; expiry |
| Blast Torpedo (9, also weapon 33) | `Torp_ThinkProximity 0x495250` | none (turn 0) | n/a | n/a | after the first 50 frames, every 8 frames: any hostile within 43.75 units -> splash (`Proj_OnHitSplash`); also splashes on expiry |
| Adv Blast Torpedo (10) | `Torp_ThinkAdvBlast 0x495310` | yes | no 45-degree cutoff; decoys still break lock | never | within 6.25 units of the locked target or expiry -> splash; no +0x118 hook |

Turn rates (max per frame; time to reach max from launch):

| Weapon | Max turn | Ramp | Time to max |
|---|---|---|---|
| Tiger Missile | 22.5 deg/frame | 0.18 deg/frame per frame | 128 frames (2.56 s) |
| Sunspot Missile | 14.1 | 0.35 | 40 (0.8 s) |
| Tesla EMP / Swarm Missile | 11.25 | 0.18 | 64 (1.28 s) |
| Hunter Torpedo | 7.0 | 0.09 | 80 (1.6 s) |
| Adv Blast Torpedo | 16.9 | 0.18 | 96 (1.92 s) |
| Disruptor Torpedo | 12.7 | 0.18 | 72 (1.44 s) |

- Locking a player (target poolType 1) sets `TachConn.oneShotFlags |= 1` on that player's connection every frame. This is the
  incoming-missile flag.
- The Disruptor Torpedo uses exactly the missile think. Only its 2-frame launch phase and its stats differ.
- The Helios Rocket (22) also has `Proj_ThinkMissile` as its think, with guidance 2 and turn 0. Its launch path was not checked.

