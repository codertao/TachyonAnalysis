# Missions / campaign ("jobs")

Missions are **`.JOB` files** (93 in `Tachyon.pff`), each a **CBIN** (same format/key as other
configs; `.inf` decodes available in `pff/`). Filenames are `<PREFIX><NN>.job` built via
`"%s%02d.job"` — PREFIX = campaign/region/faction (`BORA`, `DISPUT`, `EARTH`, `FRONTI`, …),
plus `GLOBAL%02d.job`. `NN` tracks to `CAMPAIGN_MISSION` / `CURRENT_JOB`.

Two layers: this **job/starbase/campaign layer** (briefings + gating, documented here) and the
**flyable in-space mission** (objectives/spawns/triggers). The in-space mission script is **not a
separate file**: it is the trigger table compiled into each `.SPX`, usually a job-specific
sub-sector SPX. See **Mission scripting** below.

## `.JOB` schema (from `BORA00.JOB.inf`)
`main` group — metadata + campaign-var directives:
| key | meaning |
|---|---|
| `TT_ID_SHORT` / `JOB_TEXT_BULLET` / `FONT_SHORT` | text ids / font for the job-board entry |
| `EMPLOYER` | faction offering the job (e.g. `EMP_BORA`) |
| `PAYMENT` / `PARTIAL_PAYMENT` / `NO_WINGMAN` | reward ints |
| `THUMBNAIL` | `pcx, w, h` for the job-board image |
| `STATUS_VAR` | `section, key` that records this job's status |
| `VAR_CHECK` | `section, key, value` — **precondition** to offer the job |
| `VAR_ACCEPT` | `section, key, value` — vars set when accepted (e.g. `CURRENT_JOB=BC011`, `DESTINATION_REGION/SECTOR`) |
| `VAR_COMPLETE` | vars set on success |
| `VAR_RESET` | vars set on abort/reset |
| `VAR_RETURN` | vars set on return-to-starbase |

`block0..N` groups — a timed briefing slideshow (news-style). Per block: `BLOCK_DELAY`,
`TT_ID_LONG` text, `USE_PAK`/`PAK_FILE`/`PAK_MOVE`/`PAK_INIT`/`PAK_RECT` (animation),
`USE_IMAGE`/`IMAGE_AREA`, `AUDIO_FILE` (mp3)/`AUDIO_DELAY`/`AUDIO_VOLUME`. There are parallel
block sets: `BLOCK%d` (briefing), `WIN_BLOCK%d`, `LOSE_BLOCK%d`, `PARTIAL_WIN_BLOCK%d`
(post-mission debriefs).

## Loader (`Job_LoadAll` 0x46aea0)
For `NN = 0..99`: build `<prefix>NN.job`; if it exists, `Cbin_LoadFile` into a job struct
(**stride 0x1B8**). Parses:
- block counts via `Cbin_CountIndexed_Ctx("BLOCK%d"/"WIN_BLOCK%d"/…)` → struct `+0x178/+0x188/
  +0x198/+0x1a8`; allocates 0x128-byte block records (tags `STARBASE_BLOCK` / `..._MSGBLOCK` /
  `..._WINBLOCK` / `..._PARTIALWINBLOCK`), each parsed by `Job_ParseBriefingBlock (0x46a400)`.
- strings `TT_ID_SHORT`(+0x94), `EMPLOYER`(+0xb4), `FONT_SHORT`(+0xd4), `JOB_TEXT_BULLET`(+0xf4);
  ints `PAYMENT`(+0x148), `PARTIAL_PAYMENT`(+0x14c), `NO_WINGMAN`(+0x144);
  `STATUS_VAR`(+0x14 section / +0x54 key), `THUMBNAIL`(+0x150 pcx / +0x170,+0x174 w,h).
- `Job_ParseVarDirectives (0x46a7d0)` → the campaign-var-set (CVS) arrays at `+0x11c`.

## Campaign-var directives (`Job_ParseVarDirectives` 0x46a7d0)
Counts and allocates five parallel arrays (internal tags `STARBASE_CVS_CHECK/SET/COMPLETE/RESET/
RETURNS`): `VAR_CHECK`, `VAR_ACCEPT`, `VAR_COMPLETE`, `VAR_RESET`, `VAR_RETURN`. Each entry =
`{ char section[0x20]; char key[0x20]; value… }` (stride 0x64 for CHECK/COMPLETE which carry an
extra param-4 value via `Job_StoreVarValue 0x469b10`; 0x60 for the others). These triples are
evaluated/applied against the **`vars` store** (see `profiles.md`): `VAR_CHECK` decides which jobs
a starbase offers; `ACCEPT/COMPLETE/RESET/RETURN` mutate campaign state (`PLAYER_MAIN_VARS`,
region vars like `BORA_REGION`, etc.).

## Mission-end vocabulary (strings, flow TBD)
`WIN_MISSION_1..5`, `FAIL_MISSION_1..4`, `ESC_FAIL_MISSION`, `END_MISSION`,
`END_MISSION_TO_MAIN`, `END_MISSION_TO_CREDITS`, `JOB_MISSION_FAILED`, `JOB_CAMPAIGN_FAILED`,
"RETURN TO STARBASE FOR MISSION WIN", `MISSION_VARS`.

## Where the flyable environment actually lives (the key insight)

The `.JOB` does **not** embed the environment — it only sets vars (`CURRENT_JOB`,
`DESTINATION_REGION/SECTOR`). The in-space environment comes from a **persistent galaxy world**,
with the job layered on top:

1. **Persistent world** — a galaxy of **regions** (BORA, EARTH, DISPUT, FRONTI, NEUTRAL…), each
   with a **starbase/hub config** `<region>.BAS` (CBIN: lighting, UI colors, ship icons/wireframes,
   shipyard modifiers, backdrop `.bdf`, and `TEXT_TOOL_*BIN` = `jobs.bin`/`news.bin`/`items.bin`/
   `wingmen.bin` compiled text tables). Each region has **sectors**; the nav map
   (`Map_UpdateSectorText 0x47c400`, ctx `g_MapUiCtx 0x571ae4`) shows sector name + `SECTOR_CONTENTS`
   (a text-table description, not the layout).
2. **Sector layout** — the fixed contents of a sector (gates, stations, asteroids, nebulae, nav
   points) live in **`<region><NN>.SPX`** files (e.g. `BORA05.SPX`), a **binary format** (magic
   `SPD\x01`, offset/count tables — NOT CBIN). Note: the exe contains **no `.spx` string and no
   `SPD` magic check**, so these are compiled assets (via `Pack.exe`) loaded by a name taken from
   galaxy data rather than a hardcoded extension — the loader itself is still TBD.
3. **Objects / craft** — placed objects reference composite models: **`.OCF`** (CBIN:
   `header`/`paks`/`part_NN` with `SCALE`/`ANGLES`/`ATTACH` = a multi-part model tree, e.g. Bora
   Destroyer = 40 parts), parsed with hardpoints via `Object_ParseHardpoints (0x462e60)` (`CONNECT`
   group: `LAND/SPAWN/DOCK/PICKUP/ENGINE_POINT`). Ship class → model via `Ship_GetCurrentModel
   (0x46e740)` reading the `SHIP_TYPE` table → `.des` mesh (`cutlass.des`, `orion.des`, `claw.des`).
4. **Job overlay** — when `CURRENT_JOB` is active, the mission adds scripted content: job-tagged
   **`.SEN`** cutscenes (CBIN: `cast`/`camera_frame`/`CUT`/`MOVETO`/`AIM`/`END_SCENE`, e.g.
   `B7BC011A.SEN` for job BC011), ship **groups** (`GROUP`/`SHIP_TYPE`/`OBJECT_CLASS`/`SPAWN_POINT`/
   `GROUP_CLASS_ID`), and objectives/triggers, using the separate **`g_GameVarStore (0x571900)`** /
   `MISSION_VARS` store (runtime mission state, vs persistent `PLAYER_MAIN_VARS`).

So "environment setup" is split: **persistent galaxy/sector/world data** (`.BAS` + `.SPX` + object
`.OCF`/`.des`) that you always fly in, plus a **job-activated overlay** (spawns/scenes/triggers
keyed on `CURRENT_JOB` via `MISSION_VARS`). The job is just the switch, not the scene.

## File-type summary (mission/world)
| ext | format | role |
|---|---|---|
| `.JOB` | CBIN | campaign mission: briefing blocks + var directives |
| `.SPX` | binary (`SPD`) | per-sector layout **and the mission trigger script** (see below) |
| `.OCF` | CBIN | composite multi-part object/craft model |
| `.DES` | (mesh) | 3D model for a ship/object (`cutlass.des`) |
| `.SCR` | CBIN | **dialog script for one actor** (`PLAYER.SCR`, `LAREF.SCR`): numbered lines `neutral_NNN` with `TEXT_ID`, `WAV`, `CONV: actor, line, delay` (reply chaining), `VARIABLE` |
| `.SEN` | CBIN | scripted cutscene (camera choreography) |
| `.WNG` | CBIN? | wingman definitions (`GLOBAL%02d.wng`) |
| `.NWS` | — | news items (`%s%02d.nws`) |
| `.BAS` | CBIN | region/starbase hub config |

## Open threads
- The **`.SPX`/`SPD` sector-layout loader** (how a sector's objects/positions load on flight entry;
  the binary structure). Next: find the flight/combat gameplay mode's enter and trace its loads,
  or xref the region table `DAT_005713e4` population / galaxy-data loader.
- ~~The objective/trigger runtime~~ → solved, see **Mission scripting**. Still open: how
  `WIN_MISSION_n` / `END_MISSION_*` get set (probably `VAR` actions on region `MISSION_n_STATUS`
  vars, read back by `.JOB` `VAR_COMPLETE`), objective type ids 0..12, `.SCR` `VARIABLE` key.
- The **job-board / starbase** UI that evaluates `VAR_CHECK` to list offered jobs.

## Mission scripting: the trigger table inside the SPX (investigated 2026-11-08)

Confidence: **[c]** confirmed in code + data, **[l]** likely, **[?]** guess.

**Short answer: yes, the triggers are in the `.SPX`.** There is no separate mission-script file.
Pack.exe compiles the editor's triggers into the SPX "param section" (header `+0x20` count,
`+0x24` offset), and the exe walks those records directly **[c]**. 256 of the 302 SPX files have
triggers, 2572 triggers in total. The biggest is `NEUT07A.SPX` with 74.

### Where a mission's script comes from
A sector is a main SPX (`NEUT04.SPX`) plus at most one **sub-sector SPX**, picked by var
conditions in the main SPX's stage table: `neut04C.spx if CURRENT_JOB==4008`. So accepting a job
(`.JOB` `VAR_ACCEPT` sets `CURRENT_JOB`) makes the next visit load that job's sub-sector, with its
own objects, groups, dialogs and triggers **[c]**. Each quadrant keeps both tables
(`*(quadrant+0x3c)+4` = main, `+8` = sub) and every event is matched against both **[c]**.
Main SPXs carry small persistent scripts, e.g. `BORA05.SPX`:
```
T0: IF PLAYER interacted with obj 2166 (Spcargo_Medical)
    DO play PLAYER.SCR line 63;  BORA_REGION.MEDICAL_B1 = 1
```

Use `TachyonFileFormats/src/spxtrig.py FILE.SPX` to print any SPX's script with object, group,
var and dialog names resolved.

### On-disk records **[c]** (all offsets are file offsets; relocated by `Spx_RelocParamSection`)
```
trigger (0x14)  u32 nConds, u32 nActions, u32 fired (runtime latch), u32 condsOff, u32 actionsOff
condition (0x28)
  +00 cat   +04 sub   +08 code   +0c value   +10 a   +14 b
  +18 join   how this result combines with the NEXT condition: 0 AND, 1 AND NOT, 2 OR
  +1c flags  1 momentary (counts only in the frame it happened), 2 also match a/b,
             4 repeatable (trigger re-arms after firing)
  +20 satisfied (runtime)   +24 frame satisfied (runtime)
action (0x10)   s32 cat (-1 = none), u32 arg, u32 code, u32 arg2
```
Load fix-up: `cat 0, code 1` (proximity) has its value multiplied by 10.

Other SPX sections the triggers refer to **[c]**:
- `+0x58/+0x5c` **dialog list**, stride 0x10: `.SCR` names (`PLAYER.SCR`, `LAREF.SCR`, ...).
- `+0x64/+0x68` **scene list**, stride 0x10: `.SEN` cutscenes (read from the main SPX).
- Placement record `+0x20` = **object id**, `+0x54` = **group id** (-1 = none).

### Runtime **[c]**
1. Game code posts an event `{cat, sub, code, value, a, b}` with `Mission_PostEvent(ev, quadrant)`
   (or `Mission_PostEventAll`).
2. `Mission_MatchTriggers` looks for conditions with the same `cat/sub/code`. The value is compared
   with `g_TrigCondCmpTable[cat][code]` (only `>=` exists, `Trig_CmpGreaterEq`) or else equality.
   Flag 2 also requires `a`/`b` to match. A match calls `Trig_SatisfyCond`.
3. `Trig_SatisfyCond` sets the condition's satisfied flag and frame, then `Trig_Evaluate` folds
   all of the trigger's conditions **left to right, without precedence**, using each condition's
   `join`. If the result is true, the trigger latches (`fired = 1`) and `Trig_RunActions` runs.
   A latched trigger is never evaluated again unless one of its conditions has flag 4.
4. Event conditions stay satisfied once hit. **Var conditions (cat 3) are level-sensitive:**
   `Trig_MatchVarConds` clears them again when the var stops matching. Every var write by an
   action goes through `Var_SetAndNotify` → `Mission_PostVarChange`, and
   `Trig_InitVarConds` evaluates them all when the sector loads.
5. **Timers are vars.** The `COUNTERS` var category (20) holds `COUNTER_1..n`. Action 4 starts or
   stops one. `Counters_Tick` adds 1 to each running counter every 50 frames, and
   `Counters_PostValues` posts the new values. So "IF COUNTERS.COUNTER_17 == 60" means
   60 ticks after start.
6. With `DAT_005a6730` (debug) set, the server prints `TRIGGER %d OCCURED`, `Play dialog ...`,
   `PLAY SCENE ...`, `OBJ %d ACTION %s`.

### Condition vocabulary (event `cat`/`code`)
| cat | subject (`sub`) | codes |
|---|---|---|
| 0 PLAYER | 0 | 0 damage% ≥ v · 1 within v of obj `b` · 2 entered sector · 3 player joined (MP) · 4 docked with `b` · 5 undocked · 6 dock-menu action v on `b` · 7 interacted / picked up `b` · 8 triggered `b` · 9 left sector / aborted · 10 credits changed **[c]** |
| 1 OBJ | object id | 0 attacked by player **[l]** · 2 destroyed · 3 damage% ≥ v · 4 second damage% ≥ v (shield?) · 5 reached waypoint v = route **tag**<<16\|point · 6 AI activated · 7 docked · 15 spawned **[c]**; 10–14 seen in data, meaning **[?]** (13 with `b` = carrier looks like "entered bay of b") |
| 2 GATE | gate id | 0 state changed **[l]** |
| 3 VAR | category<<16 \| index | 0/1 == v · 2 > v · 3 < v **[c]** |
| 4 ENEMIES | 0 | 0 all dead · 1 % killed ≥ v **[c]** |
| 5 GROUP | group id | 1 group damage% ≥ v · 2 member reached waypoint · 3 member spawned · 4 member attacked by player · 6 member AI activated **[c]**; 0, 5 **[?]** |
| 7 DIALOG | dialog-list index | 0 line v played **[c]** (`Dialog_PlayLine`, also after `CONV` replies) |
| 8 SIDE | side byte | 0 a ship of that side attacked by player **[l]** |
| 6 | – | 14 uses, poster not found **[?]** |

Most used: var conditions (1434, mostly counters and `MISSION_VARS`), then object destroyed,
dialog line reached, group member destroyed, player entered sector.

### Action vocabulary (`g_TrigActionTable[cat][code]` = `{fn, extra}`) **[c]**
| cat | `arg` | codes |
|---|---|---|
| 0 GATE | gate obj | 0/1 enable/disable (instant), 2/3 enable/disable (`SrvSend_GateState`) |
| 1 VAR | category<<16\|index | 0 set = arg2 · 1 add arg2 · 2 subtract arg2 |
| 2 DIALOG | dialog-list index | 0 play from line arg2 (`TrigAct_PlayDialog`) |
| 3 SCENE | – | 0 play cutscene `scene[arg2]` (`SrvSend_PlayScene`) |
| 4 COUNTER | var | 0 start · 1 stop |
| 5 OBJ | object id | 0 spawn · 1 spawn by class (arg2 = parent/carrier) · 2 dock with arg2 · 3 hyperspace in · 4 hyperspace out · 5/6 activate/deactivate · 7 explode · 8.. named Sped actions: CHANGE_RACE(arg2=side), DOCK_WITH_OBJ, UNDOCK, ENTER_OBJ_BAY, TAKEOFF, CHANGE_WP(arg2 = route tag<<16 | point, via `Nav_ChangeRoute 0x405990`), ADD/REMOVE_AS_OBJECTIVE, BEAM_AWAY, weapons on/off, UNSPAWN, RESTORE_POWERPLANT, TIMED_EXPLODE |
| 6 GROUP | group id | 0 spawn · 1 spawn staggered (150 apart) · 2/6 activate/deactivate · 3 set AI order arg2 · 4 CHANGE_RACE · 5 ENTER_OBJ_BAY · 7 launch next member · 8 CHANGE_WP |
| 7 NAV | region<<16\|sector | set the player's nav destination: `Nav_SetDestination 0x437610` writes `PLAYER_MAIN_VARS.DESTINATION_REGION/SECTOR` and sends it to the client (not a route) |
| 8 ORDER+ | – | add objective of type `code` about object `arg2` (HUD orders list, `quadrant+0x60`) |
| 9 ORDER- | – | remove objective (type 10 = clear all; code 11 = reset orders) → S→C 0x1017 op 2 |
| 10 ORDER✓ | – | mark objective complete → S→C 0x1017 op 1 |
| 11 | – | all-quadrant versions: 0 add, 1 remove, 2 complete; 3 reset player inventory var sections; 4 set `DAT_005b9050 = arg2*50` **[?]** |
| 12–14 | – | index past the 12-entry table and alias into cat 11 (+1/+2/+3); they appear in a few files |

Named Sped action ids come from `g_SpedActionNames` (`0x53f600`): HYPERSPACE 0, ACTIVATE 1,
ENTERGATE 2, EXPLODE 3, IDENT_REQ 4..SET_IDENTIFIED 7, CHANGE_RACE 8, GET_SPEDDATA 9,
DOCK_WITH_OBJ 10, UNDOCK 11, ENTER_OBJ_BAY 12, BEAM_AWAY 13, TAKEOFF 14, CHANGE_WP 15,
PLAYER_DOCKED 16, SET/CLEAR_EFFECT 17/18, ADD/REMOVE_AS_OBJECTIVE 19/20, TARGETED 21, UNSPAWN 24,
WEAPONS ACTIVATE 25, RESTORE POWERPLANT 29, TIMED EXPLODE 30.

### Example: `NEUT04C.SPX` (job 4008), first triggers
```
T0: IF PLAYER entered sector AND OBJ 1290(Shuttle_Medium) spawned
    DO start COUNTER_17; add order type 6 about obj 1290; obj 1270 CHANGE_RACE 2;
       obj 1290 CHANGE_RACE 1; MISSION_VARS.GENERIC_VAR5 = 0; obj 1286(Bora_Carrier) ADD_AS_OBJECTIVE
T1: IF COUNTER_17 == 5 AND obj 1290 spawned          DO PLAYER.SCR line 99; obj 1290 ADD_AS_OBJECTIVE
T2: IF COUNTER_17 == 60 AND dialog[0] line 99 AND NOT GENERIC_VAR3 == 1   DO LAREF.SCR line 2
T3: IF obj 1290 reached waypoint 0xCA:2              DO obj 1290 ENTER_OBJ_BAY 1286
```
A mission is a chain like this: counters pace the dialog, dialog lines gate the next step, and
`MISSION_VARS.GENERIC_VARn` act as state flags between triggers.
