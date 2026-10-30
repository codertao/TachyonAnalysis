# Missions / campaign ("jobs")

Missions are **`.JOB` files** (93 in `Tachyon.pff`), each a **CBIN** (same format/key as other
configs; `.inf` decodes available in `pff/`). Filenames are `<PREFIX><NN>.job` built via
`"%s%02d.job"` — PREFIX = campaign/region/faction (`BORA`, `DISPUT`, `EARTH`, `FRONTI`, …),
plus `GLOBAL%02d.job`. `NN` tracks to `CAMPAIGN_MISSION` / `CURRENT_JOB`.

Two layers: this **job/starbase/campaign layer** (briefings + gating, documented here) and the
**flyable in-space mission** (objectives/spawns/triggers) — a separate format, likely `.DES`/`.SCR`/
`.SEN` with its own `MISSION_VARS` store (TODO).

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
| `.SPX` | binary (`SPD`) | per-sector layout (compiled; loader TBD) |
| `.OCF` | CBIN | composite multi-part object/craft model |
| `.DES` | (mesh) | 3D model for a ship/object (`cutlass.des`) |
| `.SCR` | — | craft/ship definition (`PLAYER.SCR`) |
| `.SEN` | CBIN | scripted cutscene (camera choreography) |
| `.WNG` | CBIN? | wingman definitions (`GLOBAL%02d.wng`) |
| `.NWS` | — | news items (`%s%02d.nws`) |
| `.BAS` | CBIN | region/starbase hub config |

## Open threads
- The **`.SPX`/`SPD` sector-layout loader** (how a sector's objects/positions load on flight entry;
  the binary structure). Next: find the flight/combat gameplay mode's enter and trace its loads,
  or xref the region table `DAT_005713e4` population / galaxy-data loader.
- The **objective/trigger** runtime (win/fail conditions: `WIN_MISSION_n`, `END_MISSION_*`).
- The **job-board / starbase** UI that evaluates `VAR_CHECK` to list offered jobs.
