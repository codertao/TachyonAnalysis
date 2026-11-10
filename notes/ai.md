# AI: fighters, wingmen, turrets and skill (investigated 2026-11-09)

Confidence tags: **[c]** confirmed in code, **[l]** likely, **[?]** unclear.
Distances are world units, where 1 unit = 0x1000 raw (the same convention as `collision.md`).
Angles: 512 units per revolution, stored as 16.16. "Frames" are 50 Hz server ticks.

## The short version
- There are **two unrelated AIs**:
  - **Ship AI** (`Dcb_Think_AiFighter 0x4039c0`) runs on every SPED-spawned ship: fighters,
    freighters, drones and wingmen. It is a 15-state machine plus "micro-state" think pointers. It
    flies the same flight model as the player (`Dcb_Think_Ship`, `.des` turn rates).
  - **Turret AI** (`Turret_Think 0x404c00`, see `capships.md`) runs on each capital-ship turret.
    It is a simple point-and-shoot loop.
- **Skill** (ROOKIE 0 / VETERAN 1 / ACE 2 / ELITE 3) only exists for ship AI. Turrets, capital
  ships and their movement never read it.
- Skill changes **four things**: lead accuracy, how long the AI keeps chasing before it breaks
  off, how it reacts to being hit, and shield management. It does **not** change turn rate,
  speed, weapons, damage, target choice, or fire-decision geometry.

## Turret AI vs ship AI
| | Turret (`Turret_Think`) | Ship (`Dcb_Think_AiFighter`) |
|---|---|---|
| Runs on | OCF TYPE 2 parts of capital ships and bases | every SPED ship (`Sped_ConstructEntity` installs it) |
| Movement | none; slews yaw/pitch at ~70°/s per axis | full flight model, `.des` rotation/speed, collision look-ahead |
| Target choice | nearest hostile in range that matches the weapon's class mask; re-picks every 256 frames | `.des` `ai` block: MAIN_TARGET_CLASS first, then TARGET_CLASS, range plus scan cone, attacker cap |
| Re-think rate | lead re-solved every 32 frames | decisions every 16 frames, fire choice every 64, shields every 128 (staggered per entity by `+0x320`) |
| Lead | `Ai_LeadAimPoint`, ± spread/2 frames (spread from a turret field, default 32) **[?]** | inline in `AiThink_Attack`, ± skill jitter (below) |
| Fire rule | aim error < weapon tolerance (guns ~45°); in practice every tick (see `capships.md`) | separate missile/gun windows; normal weapon cooldown |
| Skill | none | ROOKIE..ELITE |
| Reacts to damage | no | may break off or evade, calls for help, posts mission events |
| Coordination | none | wingmen and friends answer calls for help; attacker cap per target |

## Where skill comes from [c]
1. `.des` `ai` → `SKILL: ROOKIE|VETERAN|ACE|ELITE` (`ShipDes_ParseSkill 0x462cc0`, table
   `0x549e60`) goes into des `+0x55c`.
   - **If the key is missing or unrecognised, the default is ACE (2)**. Freighters, shuttles,
     mines and crates fall into this case. Most of them never fight anyway.
2. An SPX placement can override it: the placement byte `+0x39` holds skill + 1 (0 = use `.des`).
   - Of 2,978 ship placements across all `.spx` files, 538 override it: 171 ROOKIE, 97 VETERAN,
     64 ACE, 206 ELITE.
   - Heavy users include `Bora_Battleaxe` (32 ELITE), `GalSpan_Orion` (24 ELITE), `Drone_Worker`
     (25 ELITE), `GalSpan_Poseidon` (29 ROOKIE) and `Bora_Cutlass` (32 ROOKIE).
3. **Hard difficulty** (`spacesav[0x2f] == 2`) adds +1, capped at ELITE (`Sped_ConstructEntity`).
4. The result is stored in entity `+0x310` (u16).
   - Debug overlay: `AiDebug_DrawSkill 0x464cd0` prints `SKILL: %s` and `AI FUNC: %x THR: %d`.
   - The state name comes from `Ai_StateName`.

`.des` SKILL values (all 254 `.des` files, 100 with an `ai` block):
| Skill | Ships |
|---|---|
| ROOKIE | AGT_Mako, Biolith_Dart, Bora_Dagger, CMI_Dart, CMI_Piranha, Hajod_Fighter_1, Independent_Merc_Dart/Mako/Piranha, Void_Pirate_Fighter |
| VETERAN | Bora_Battleaxe, Bora_Cutlass, GalSpan_Orion/Pegasus/Poseidon, AGT_Orion, Red_Pirate(_Shrike), Skav_Pirate_Manta, drones, most `Wingman_*` (Freesh, Pixie, Embers, Jasper, Keels, Kincaid, Leiber, Mishka, Rand, 500) |
| ACE | Bora_Claymore/Mace/Leviathan, GalSpan_Phoenix, Cassitor_Assault_Drone, Red_Pirate_Fighter_2, Malkar_Treg, Onrald_Flare, Independent_Merc_Gar, Wingman_1000/Brixx/Ramos/Saril |
| ELITE | Bora_Warhammer, GalSpan_Archangel, GalSpan_Merc_Corvus, Demon_Pirate_Fighter, Hajod_Fighter_2, Star_Patrol_Enforcer, Baron/Baroness champions, Redship_Rory, Susan_Bradley_Waraxe, Leoff_Coward, Wingman_Bernardo/Demon |
| (none → ACE) | freighters, shuttles, mines, crates, Bora_Pirate_Fighter, Training_Fighter, Drone_Worker, Exile_Claw_Mace, Exile_Star_Patrol_Enforcer |

## What each skill level changes [c]
Skill is read in exactly five places (`+0x310`):

| Effect | ROOKIE | VETERAN | ACE | ELITE | Code |
|---|---|---|---|---|---|
| **Lead error**: random offset added to lead time, re-rolled every 16 frames | ±64 frames (±1.3 s) | ±32 (±0.6 s) | ±16 (±0.3 s) | **0 (perfect)** | `g_AiSkillLeadJitter 0x5323a8` = {127,63,31,0} mask |
| **Patience**: net off-target time before breaking off | 6.4 s | 12.8 s | 19.2 s | 25.6 s | `g_AiSkillPatience 0x5323c8` = {20,40,60,80} ×16 frames |
| **Random-jink length** (scale factor) | ×1.0 | ×0.61 | ×0.27 | ×0.12 | `g_AiSkillJinkScale 0x5323b8` |
| **Evade when hit** (chance per hit) | 5/8 (62%) | 5/32 (16%) | 5/16 (31%), and only if the attacker is on its tail while shields > 4% | 5/8, but only if the attacker is on its tail while the hull is undamaged; 5/16 once damaged | `Ai_ShouldEvadeHit 0x4042c0` |
| **Shield recharge rate** (every 128 frames) | left at 1.0× until shields are ≤ 4%, then cut to 1/32× | same as ROOKIE | 1.0× normally, 1.5× below 50%, 2.0× below 25%, 1/32× at ≤ 4% | same as ACE | `Ai_ManageShields 0x4034e0` sets the shield rate (`shields.md`) |

What this means in play:
- **Rookies** miss a lot (lead off by up to a second), break off a lot (6 s patience), and jink for
  a long time when they do. They also dodge most hits, so they are slippery but harmless.
- **Elites** lead perfectly and hang on your tail for 25 s. They only evade hits when you are
  actually behind them, and they recover from a jink in 1–2 s.
- Lead time is `distance / projectile speed + 16 frames`, plus the jitter. Slow weapons (speed
  < ~0.5/frame) get no lead at all, only the jitter.

## Ship AI state machine [c]
- The state table pointer is at `+0x33c`, with 15 rows of `{enter, think, name, busy}`
  (stride 0x10). `Ai_SetState 0x401080` runs `enter`, stores the state in `+0x104`, copies
  `think` into `+0x304` and `busy` into `+0x325`.
- The think pointer `+0x304` is then swapped freely between **micro-states** (approach, attack,
  maneuver, jink, …) without changing `+0x104`. So the debug state name lags behind what the
  ship is doing.
- `+0x308` saves the think to resume after a break-off.
- There are two tables:
  - `g_AiStatesDefault 0x5322b8`;
  - `g_AiStatesWingman 0x5321c8`, used when placement `+0x68 != 0`. Only `Wingman_Init` sets
    that, for the hired wingman. It swaps in the wingman follow/formation/defend/RTB handlers
    (`0x499xxx`).

| # | Name | Think | Busy | Notes |
|---|---|---|---|---|
| 0 | FREE FLIGHT | `AiState_FreeFlight` | | new random heading every 5–25 s, throttle 75%; looks for a target every 16 frames |
| 1 | ATTACKING TARGET | `AiState_Attack` | | acquires a target, then Approach → Attack (below) |
| 2 | AVOIDING COLLISION | – | | name only. Avoidance swaps `+0x304` directly (`collision.md`) |
| 3 | EVADING ATTACKER | – | | name only. Evasion is the maneuver/jink micro-states |
| 4 | FOLLOWING LEADER | `AiState_FollowLeader` / wingman `0x499310` | | |
| 5 | FOLLOWING ROUTE | `AiState_FollowRoute` | | waypoint within 1000; **attacks anything it finds**, then rejoins its formation |
| 6 | HEADING TO GATE | `Ai_ApproachTarget` | yes | |
| 7–10 | bay / platform / docking / undocking | `0x4057b0`, `0x405360`, `0x405180`, `0x4054f0` | yes | |
| 11 | WAITING FOR FURTHER ORDERS | `AiState_Wait` (drone think) | yes | never evades |
| 12 | TIGHT FORMATION | `AiState_TightFormation` / wingman `0x499330` | | moves 1/8 of the way to its slot each frame and copies the leader's heading and velocity |
| 13 | DEFENDING DCB | wingman only: `AiState_Defend` | | attacks whatever is targeting the protected entity |
| 14 | RETURNING TO BASE | wingman only: `AiState_ReturnToBase` | yes | throttle 75%, docks within 500 |

"Busy" states block hit evasion (`Ai_ShouldEvadeHit` returns 0 when `+0x325` is set).

With no target, `Ai_ReturnToDefault 0x401e20` picks the next state:
- wingman: DEFEND if it has a protect target, else FOLLOW;
- a ship with a leader: FOLLOW;
- a ship with a route: ROUTE;
- otherwise FREE FLIGHT.

## Targeting [c]
`Ai_FindTarget 0x4015e0` → `Ent_FindTarget 0x48b450` uses the `.des` `ai` block. It is parsed
into des `+0x56c..` by `ShipDes_ParseAiClasses`/`ShipDes_Finalize`:
- **Hostility** comes from the side table, not the `.des`: `side[team].+4` is temporarily put into
  the search mask. `RACE` and placement `+0x38` choose the team.
- Candidates must match MAIN_TARGET_CLASS or TARGET_CLASS. Classes: FIGHTER 1, BOMBER 2,
  CAPSHIP 4, STARBASE 8, TURRET 0x10.
- Candidates must be within **TARGET_RANGE**, and either within **TARGET_360_RANGE** or inside
  the **TARGET_SCAN_ANGLE** cone (stored as cos(half-angle)).
  - Both ranges are stored `<<13`, i.e. twice the `.des` number in world units **[l]**.
  - Typical values: range 30000–40000, 360-range 2500–7000, scan 90–360°.
- **The nearest MAIN-class target wins.** The nearest secondary target is taken only if there is
  no main-class candidate.
- **Attacker cap:** targets whose attacker count `+0xc8` has reached `+0xca` are skipped.
  `Ent_SetEngageLimits 0x48b090` sets the caps:

  | Target | Max attackers `+0xca` | Max missiles in flight `+0xce` |
  |---|---|---|
  | AI ship | 3 | 2 |
  | capital ship | 8 | 7 |
  | player | 2, then **1 / 3 / 5** by difficulty (easy/normal/hard) | 2 |
  | other entities | 4 / 4 or 2 / 2 | |

  This is the main thing difficulty changes besides +1 skill on hard.
- `Ai_TargetFilter 0x4012e0`: the target's class can veto being targeted (`class+0x68`). A route
  can restrict targets (`+0x100` → `0x401270`) **[?]**.
- `+0x324` = attack mode. 1 = destroy, 2 = disable; it picks the weapon class. The wingman
  DISABLE order sets 2.

## Dogfighting: `AiThink_Attack 0x402cc0` [c]
Runs every 16 frames:
1. **Range:** a target beyond **40000** is dropped back to `AiThink_Approach`, which turns toward
   it and re-enters Attack within **20000**.
2. **Aim:**
   - lead point = target position + target velocity × (lead time ± skill jitter);
   - desired orientation = toward the lead point;
   - aim error = the yaw/pitch difference between current and desired orientation.
3. **Fire decision** (every 64 frames):
   - **missile** (weapon class 6): aim error < 28°, distance 16000–30000, and the target's
     missiles-in-flight count below its cap;
   - **guns** (class 0x31): aim error < 7° and distance < 14000;
   - on the other 16-frame ticks it keeps firing while aim error ≤ the weapon's own tolerance
     (`def+0xc`) and distance ≤ its range (`def+0x60`).
   - The weapon then fires each frame through `Weapon_TryFire` with the normal cooldown. Unlike
     turrets, it doesn't take the flag-4 no-cooldown path.
4. **Throttle:** full throttle (0x400). Within 10000 of a fighter or bomber target, it matches the
   target's speed (`FlightModel_SolveThrottle`).
5. **Anti head-on:** within 4000 of a *player* target when not on its tail (`Ai_IsBehind`: rear
   cone ±65°):
   - if the player is on *its* tail, it just keeps turning;
   - otherwise it runs `Ai_AvoidCollision` and sheers away.
6. **Patience:**
   - aim error > 14° → `+0x328` += 1, else −= 1 (floor 0);
   - above the skill threshold (20/40/60/80) → `Ai_BreakOff(self, 10)`, saving Attack in `+0x308`.

Big targets (capital ships, starbases and turrets, class & 0x1c) get standoff attack runs instead.
After a maneuver, `Ai_ResumeAttack` picks a point away from the target (`Ai_PickStandoffPoint`),
flies there (`AiThink_StandoffPoint`) and turns back in once it is more than 16000 away.

## Break-off and evasion: `Ai_BreakOff 0x402910` [c]
Called with arg 10 when patience runs out, and arg 2 when a hit passes `Ai_ShouldEvadeHit`.
It resets fire and sets full throttle, then rolls:
- **1/4: reversal** (`g_AiManeuverReverse 0x532030`): pitch 255 units (~180°), then hold 200 frames.
- **1/4: climb-roll-turn** (`g_AiManeuverClimbRollTurn 0x532060`): pitch +90°, hold 100; roll
  45°, hold 100; yaw −90°, hold 100.
- **1/2: random jink:**
  - a random yaw and pitch offset (any direction);
  - duration (rand%400 + arg×50) frames × the skill jink scale:

    | Trigger | ROOKIE | VETERAN | ACE | ELITE |
    |---|---|---|---|---|
    | out of patience (arg 10) | 10–18 s | 6–11 s | 2.7–4.9 s | 1.2–2.2 s |
    | hit (arg 2) | 2–10 s | 1.2–6 s | 0.5–2.7 s | 0.25–1.2 s |

- Maneuver steps wait until the ship is within 2 angle units of the commanded orientation before
  their hold timer starts, so turn rate (from the `.des`) sets how long a maneuver takes.
- When it ends, `Ai_EndManeuver 0x402730`:
  - resumes the saved think;
  - or re-attacks its target;
  - or attacks its last attacker (`+0x334`) if hostile;
  - or re-acquires a target.

## Damage reaction: `AiShip_OnDamage 0x404440` [c]
1. Apply shield damage and post mission events (damage %, attacked by player). Play the hit
   voice line if the ship has an actor (`handle_hit_for_voiceline`).
2. Roll `Ai_ShouldEvadeHit`; on success, `Ai_BreakOff(2)`.
3. Count consecutive hits from the same attacker. **From the 16th**, `Ai_CallForHelp 0x404110`
   runs, if the attacker is below its attacker cap:
   - **Attacker is the player and not hostile to this ship** (friendly fire):
     `Ai_PatrolRespond 0x404070`. The first idle AI ship in the quadrant with `.des`
     `STAR_PATROL` set attacks the player. Only `SOLPTRLF.DES` sets it.
   - **Otherwise:** the first idle friendly AI ship (by `side[team].+8`) in the quadrant that can
     target the attacker switches to ATTACK on it.
4. A ship with no think hook gets `Dcb_InitAiShip` (drone think).

## Wingman (hired merc) [c]
- `Wingman_Init 0x498a20` spawns it from the hire's `DESFILE`/`SCRFILE` and stores it in
  `g_Wingman 0x5653a0`. Its skill comes from its `.des` (`Wingman_*`: VETERAN/ACE/ELITE; +1 on
  hard).
- `Wingman_Command 0x499440` maps the player's orders to states and voice lines:

  | Order | Effect | Voice |
  |---|---|---|
  | 1 | attack the player's target (`WingCmd_Attack`) | ATTACK_TARGET |
  | 2 | DEFEND the player's target (`WingCmd_Protect`) | PROTECT_TARGET |
  | 3 | attack in disable mode, if it has a disable weapon (`WingCmd_Disable`) | DISABLE_TARGET |
  | 4 | DEFEND the player (`WingCmd_CoverMe`) | COVER_ME |
  | 5 | FOLLOW the player (`WingCmd_FormOnMe`) | YES_SIR |
  | 6 | RETURN TO BASE | RETURN_TO_BASE |

  It answers NO_SIR when an order isn't possible, e.g. there is no target.
- In DEFEND, it attacks whichever hostile is targeting the protected entity, and otherwise follows
  it.

## Open / to verify
- Whether the `.des` TARGET_RANGE really is half world units (the `<<13` vs 1 unit = `<<12`).
- Weapon class masks 6 / 0x31 passed to `0x4930c0` (assumed missile / gun).
- The route/zone target restriction `0x401270`.
- The "busy" column for states 7–10 and 14 is from the table; the docking handlers weren't read.
