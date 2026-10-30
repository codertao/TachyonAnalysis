# Tachyon data formats (as implemented in space.exe)

## CBIN — general config container (INI-like)

Used by "~half the files" (per `TachyonFileFormats`). Model: **groups → entries → params**,
plus a shared string table. The game supports **two encodings** behind one API:

- **Binary** (magic `CBIN`): `Cbin_LoadFile (0x49acb0)` sees `*buf == 0x4e494243` → `Cbin_ParseBinary (0x49a980)`.
- **Plain text** (no magic): falls back to `Cbin_ParseText (0x49a750)`. Same group/entry/param model.
  `ctx[0x1a]` records which path was taken.

### Binary layout (confirms `TachyonFileFormats/src/cbin.py`)
20-byte header (unencrypted):
```
+0x00  char  magic[4] = "CBIN"
+0x04  u32   text_offset   (offset of string table)
+0x08  u32   text_length
+0x0c  u32   text_count    (number of strings)
+0x10  u32   key           (decrypt key)
```
Everything after the header is encrypted. `Cbin_Decrypt (0x49a8c0)` over `[0x14 .. filesize)`:
```
key = rol32(key, 7);  byte ^= (key & 0xff);   // key carried forward across bytes
```
(Exactly `rotate_left(key,7)` from cbin.py.) Decrypted body:
```
u32 group_count
group_count × { u32 group_id;  u32 entry_count }     // group_id = 1-based index into string table
entries  (per group: entry_count+1 records, last is a {0,0} terminator)
         { u32 entry_id;   u32 param_count }          // entry_id = 1-based string index
params   { union{i32; f32} value;  u32 type }         // type: 1=int, 2=float, 4=string(1-based strIdx)
string table @ text_offset: text_count × NUL-terminated ASCII
```
`Cbin_ParseBinary` resolves `type & 4` params through the string table.

### In-memory parse context (`g_CbinCtx` @ 0x604080, int[])
`[0]`=buffer `[1]`=size `[2]/[3]`=cursors `[6]`=group_count `[10]`=group records (0x1c each)
`[0x10]`=entry records `[0x12]`=param records `[0x1a]`=isBinary.

### Generic reader API
```
Cbin_Open(file)            0x49ae70   // closes prior ctx, loads into g_CbinCtx
Cbin_Close()               0x49ae60
Cbin_GetParam(key, strOut, strLen, &numOut, type, index1based)   0x49be30
Cbin_GetScalar(key, 0,0, &out)                                   0x49b4f0
Cbin_SelectGroup(name)     0x49b0c0
Cbin_CountEntries(group, entryName)  0x49c040   // -> count
```
`type` passed to GetParam is the on-disk param type (1/2/4). Strings copied into caller buffer;
ints/floats written to `&numOut`.

## .bdf — backdrop scene (a CBIN consumer)

`mnu.bdf` = the title-screen backdrop; the same loader serves mission backdrops (many more keys).
Chain: `Bdf_LoadBackdrop(name) 0x444e60 → Bdf_LoadAndApply 0x468180 → Bdf_GetOrLoadScene 0x4680f0
(cache) → Bdf_ParseScene 0x4679f0`. Scenes are cached by filename.

### `Bdf_ParseScene` key → scene-struct field map (struct base = parsed scene)
| Key (group) | type | struct off | notes |
|---|---|---|---|
| `SPACE_PAK` (main) | 3×string | +0x10 | pak, pak, pal → background texture (`Tex_Load 0x431850`) |
| `SPACE_ROT` (main) | 2×float | +0x1c,+0x20 | rotation, scaled by DAT_0052e540·DAT_0052e538 |
| `LIGHTNING_PAK` | 3×string | +0x28 | optional lightning texture |
| `LIGHTNING_AMBIENT_LIGHT` | int | +0x34 | `>>1` |
| (lightning dir) | — | +0x38..+0x40 | init (0,0,0x10000) |
| `AMBIENT_LIGHT` (main) | int | +0xc0 | `>>1` |
| `GAMMA` | int | +0xac | |
| `SATURATION` | int | +0xb0 | |
| `RGB` (DAT_0053fdec) | 3×int | +0xb4..+0xbc | main tint |
| `LIGHT_RGB` | 3×int | +0x138..+0x140 | default 0xff |
| `LENS_FLARE` (images) | int | +0xa8 | |
| `IMAGE`/`SUN` count | — | +0xc8 | `Cbin_CountEntries("IMAGES","IMAGE")` |
| image records | — | +0xcc | array of count × 0x64, tag "BDF_IMAGES"; parsed by `Bdf_ParseImageEntry 0x467840` |
| `LIGHTNING` enabled | int | +0xd8/+0xdc | gates the lightning/cloud block |
| `CLOUD_RGB` | 3×int | +0xf4..+0xfc | |
| `BACK_RGB` | 3×int | +0x100 | default 0x40 |
| `FRONT_RGB` | 3×int | +0x10c | default 0x80 |
| (DAT_0054a5c8) | 2×+1 | +0x118 | defaults 0x40000000,0x10,0xa0 |
| fog pcx | string | +0x124 | default `fog1_01.pcx` |

`IMAGE` entry params (from `mnu.bdf.inf`): `pak, pal, posX(f), posY(f), distance(i), scale/spin(f)`
→ 0x64-byte record (exact layout TBD in `Bdf_ParseImageEntry`).

## .des — object/ship definition (CBIN; DESC_TYPE picks the class)
A `.des` is a CBIN whose `main.DESC_TYPE` selects the entity class (see `flight.md`:
SHIP/ASTEROID/CAPITOL_SHIP/HYPER_GATE/STARBASE/MINE/CARGO/BEACON/SPEED_RING/COURSE/MISC_OBJECT/
POWERUP). `Desc_CreateByType (0x41dca0)` dispatches to the per-class loader.

### SHIP `.des` schema (from CUTLASS.DES.inf) — a complete ship spec
Live ship entity = **0x6c8 bytes**, built by `Ship_LoadDes (0x463ef0)` (staged in `DAT_00562d00`,
copied as 0x1b2 dwords); per-frame tick = the class update method `Ship_Update (0x405a20)`.
CBIN groups:
| group | keys |
|---|---|
| `main` | DESC_TYPE, OBJECT_NAME, RACE, NAME_ID, GROUP_CLASS_ID, EXTERIOR/INTERIOR/SHADOW_PAK, GLASS_GLARE |
| `sound` | EXTERNAL/INTERNAL engine+burner sounds, FALLOFF, VOLUME, PITCH |
| `misc` | MAX_HOLD_CREDITS, ENGINE_SMOKE |
| `connect` | hardpoints: LAND_POINT, PICKUP_POINT, ENGINE_POINT×n, SPAWN_POINT (part-slot indices) |
| `ai` | OBJECT_CLASS, MAIN_TARGET_CLASS, TARGET_CLASS, TARGET_RANGE, TARGET_360_RANGE, TARGET_SCAN_ANGLE, SKILL |
| `rotation` | YAW/PITCH/ROLL _ACCEL, MAX_*_RATE, *_DAMPEN, YAW_ROLL_RATIO |
| `speed` | ACCELERATION, MAX_SPEED, DRIFT |
| `afterburner` | SUPPORTED, ACCELERATION, TOP_SPEED_BOOST, MAX_ENERGY, POWER_USE |
| `side_thrusters` | SUPPORTED, ACCELERATION, TOP_SPEED |
| `shields` | MAX_ENERGY |
| `hull` | DAMAGE (hit points) |
| `energy` | LASER_ENERGY |
| `camera` | CAMERA_POINT_SLOT, SWAY_MULT |
| `weapons` | NUM_AI_WEAPONS, TOTAL_MOUNTS |
| `weap_N` | AI_WEAPON (type), NUM_MOUNTS, MOUNT_n_POINT_SLOT (AI default loadout) |
| `hud` | HUDFILE |
| `starbase` | HALO_PCX, LOWRES_PAK, BUY/BUYBACK, SHIP_YARD_DESC, VAR_CHECK (availability), CALLOUT (shipyard UI) |
| `load_mount_N` | MOUNT_ICON, WEAPON_CLASS(es) allowed, SEGMENT_POINT (player loadout mount slots) |

`.des` is plain CBIN, so `TachyonFileFormats/src/cbin.py` already prints it (the `.inf` files are
its output). The 0x6c8 in-memory field offsets would come from `Ship_LoadDes`'s sub-readers.

## SPD / .SPX — sector ("space") definition
Binary (NOT CBIN). Magic **`SPD\x01` at offset +4**. Defines one sector: backdrop, the SPED
objects populating it, sub-sector stages, and adjacent-sector links. The exe never checks the
magic and doesn't load it via the generic `File_ReadAll`.

### Load path (resolved 2026-10-29)
The `.spx` filename is **data, never built in code** (why `.spx`/`SPD` bytes are absent from the
exe): it comes from galaxy/region config (`MAIN_SPX`/`DEST_SPX`/`Sub SPX` keys), MP map configs
(`bw%02d.mpc`/`dm%02d.mpc` → `MAIN_SPX`, via `MP_BuildMapList 0x443090`), or a hyper-gate's inline
link. Chain:

```
Sector_LaunchMission 0x45e090 (desc+0x10 = spx name)   // mission/sector start
Gate_JumpToSector    0x45f550 (gate ent +0xf0->+0x38)  // in-flight gate jump
      -> Sector_Transition 0x4377d0 (ctx, spxName)      // reset world, then load, then spawn PLAYER.SCR
Sector_StartMP       0x44fb00 (g_MapSpxName 0x590208)   // MP/mission variant
      -> Spx_LoadSectorTop 0x435d80 (name)              // LoadSector(name) + finalize
          -> Spx_LoadSector 0x4356e0 (name, ctx)        // register + parse + relocate + construct
              - Spx_FindLoaded 0x435340                 // dedupe by name
              - name -> galaxy table rec+0x0c (Main SPX)
              - Spx_ReadFile 0x4355f0 (name) -------------------★ reads the file
              - relocate section offsets by (buf + *(buf+0x1a0))
              - buf+0x78 (BDF backdrop) -> galaxy rec+0x1c
              - construct contents; recurse sub-sectors via 0x435410
```

**`Spx_ReadFile 0x4355f0`** = the actual read: alloc 0x1a4; read `first_offset` (4 B @ file off 0);
read the whole header block (`first_offset` bytes); `Fs_GetSize`; grow buffer to full size; read the
body in after `buf+0x1a4`; store the reloc base at `buf+0x1a0`. It uses the **mount-aware
random-access** API — `Fs_ReadRegion 0x4a18e0` (name, dst, fileOffset, len) + `Fs_GetSize 0x4a1550`
— which walks disk (`_llseek`/`_lread` via `0x4a10e0`) then the PFF mounts (`0x4a4230`). This is a
*different* path from the whole-file Cbin reader (`Cbin_ReadWhole 0x4a1780`), which is why chasing
`File_ReadAll`/the Cbin reader dead-ended. (It is NOT loaded in `Flight_Enter`'s scene setup — the
sector is loaded by the transition routine around flight entry.)

In-memory **galaxy table**: `g_SectorCount 0x5a5544`, `g_SectorTable 0x5a5548`, stride `0x44`;
per record: Main SPX name @+0x0c, Sub SPX name @+0x1c. Rendered by the `REGION_DEBUG` overlay
`Sector_DebugOverlay 0x41c8f0`.

Confirmed: the byte
sequence `53 50 44` ("SPD") appears **nowhere** in space.exe (searched .text/_TEXT/_text/.rdata/.data,
both `SPD` and `SPD\x01`) — so there is no magic check in any form (not a 3-byte strncmp, string
literal, or masked compare). The parser trusts the header offset/length fields; `SPD\x01` is just an
authoring-tool (Pack.exe) marker. Right way to find the parser next time: the data path (who
allocates the sector object and reads `buf+0`/the section descriptors), not the magic. Layout reversed from
`BORA05.SPX` (parser/printer: `TachyonFileFormats/src/spd.py`):
```
+0x00 u32  first_offset (= SPED section offset, 0x1a4 here)
+0x04 char magic[4] = "SPD\x01"
+0x08 u32  SPED recSize (0x24)      \
+0x0c u32  SPED count   (4)          }  SPED-object section descriptor
+0x10 u32  SPED offset  (0x1a4)     /
+0x14 u32  placement count   (5)    \   object placement / SPED-def section
+0x18 u32  placement offset  (0x338) }  (the x/y/z spawn data; variable-stride records)
+0x1c u32  ?                  (0x14)  /
+0x20 u32  param count  (1)          \   nested param section (Spx_RelocParamSection 0x48dac0;
+0x24 u32  param offset (0x2dc)      /    records stride 0x14, sub-arrays stride 0x28)
+0x2c u32  sub-sector count  (2)     \   sub-sector "stage" section (conditional; stride 0x2c)
+0x30 u32  sub-sector offset (0x234) /
+0x34 char QUAD name[] (e.g. "QUAD_05") = this sector's QUADRANT id (galaxy: Region -> Quadrant);
                                           resolved via Sector_GetQuadrantName 0x457ba0
+0x5c/+0x68/+0x74   further relocated section pointers (partially identified)
+0x78 char BDF backdrop[] (e.g. "BORA5.BDF")
+0x8c u32  SPED-instance count       \   SPED instance-data (Spx_InitSectionC 0x435550; stride 0x14,
+0x90 u32  SPED-instance offset      /    each with a sub-array stride 0x20; see Sector_GetSpedRecord)
+0xe8 u32  link count                \   link / cross-reference section (Spx_LinkSection 0x435690;
+0xec u32  link offset               /    variable stride)
+0x1a0 u32 runtime reloc base (= buf + 0x1a4 - first_offset; added to every section offset at load)
```
Load-time parse (`Spx_LoadSector 0x4356e0`): relocate the section offsets by `*(buf+0x1a0)`, then
**`Spx_SpawnDecls (0x4351a0)`** + **`Spx_ApplyPlacements (0x4351e0)`**.

**SPED decl record** (0x24 bytes, section @ +0x08/0c/10): `char alias[0x20]` + `u32` runtime entity
pointer (0 on disk). `Spx_ResolveDesName (0x435120)` maps the alias → `.des` model via the SPED name
registry (`desnames.cfg`); the `.des`'s `DESC_TYPE` selects the entity class (see `flight.md`).
`Desc_CreateByType` registers the class and stores it back in `decl+0x20`.

**SPED placement / def record** — *this is where per-object x/y/z lives* (section @ +0x14 count /
+0x18 offset; **variable stride** = `u16` at `+0x02`). `Spx_ApplyPlacements` walks it and calls
`class+0x2c` (= `Sped_ConstructEntity 0x434ac0`) with the record as the *def*. (`+0x14/18/1c` is the
object's **orientation**, not velocity — it is fed to the Euler→matrix builder at runtime; see
`flight.md`.)
```
+0x00 u16  kind tag               (editor metadata, NOT read at load: 0=null 1=gate 2=roid/debris
                                    3=ship/station 4=MP-pickup; correlates with the record-size family)
+0x02 u16  record size (stride)
+0x04 u32  SPED-decl index         (which alias from the decl section to instantiate)
+0x08 s32  pos.x    +0x0c s32 pos.y    +0x10 s32 pos.z     (world units)
+0x14 s32  orient.x +0x18 s32 orient.y +0x1c s32 orient.z  (Euler angles, <<16 at runtime; NOT velocity -
                                                            stationary objects carry non-zero facing here)
+0x24 u32  flags    (0x2, 0x4, 0x82, 0xc2, …; bit tested 0x1000 etc. in ctor)
+0x28 u32  runtime entity ptr      (0 on disk)
+0x2c u32  runtime "constructed"   (0 on disk)
+0x38 ...  PER-KIND: ships -> u8 team/side (0=default); gates -> dest sector .spx name string
+0x5c s32  object id               (-1 = none)
 ...tail  per-kind params (e.g. gate link ids at +0x48/+0x50 = {u16 kind, u16 id})
```
**Orientation unit.** The three Euler angles are in **512 units per full revolution** (0.703125°/unit,
so 128 = 90°, 256 = 180°). On disk they are plain integers; `Sped_ConstructEntity`'s `<<16` promotes
them to 16.16 so the trig routine (`g_SinCosTable 0x52cbe4`, indexed by `angle>>16` & 0x1FF) can
interpolate with the low 16 bits.

**Sub-sector stages are conditional** (`Spx_SelectSubSector 0x435410`). Each 0x2c-byte record is
`char name[0x10]` + a VarStore test: `varSection@+0x10, varKey@+0x14, value@+0x18, op@+0x1c`
(0=AND-eq, 1=AND-neq, 2=OR), optional 2nd var at `+0x20/+0x24` with value `+0x28`. The engine loads
the **first** stage whose condition holds — so a sector morphs by mission variables (e.g. BORA05 →
`bora05A.spx` if `var[0,4]==2008`, else `bora05B.spx` if `==4004`).

`var[section,key]` indexes `g_PlayerVarStore (0x5a6148)` by position (`Var_GetByIndex 0x48fce0`).
Per `vars.cfg`'s `var_categories`, **section 0 = `player_main_vars`**, and its **key 4 = `CURRENT_JOB`**
(enum `jobs`; e.g. `BC06=2008`). So in practice every sub-sector switch observed is on the player's
**current campaign job** (2008/4004 are job ids). `CURRENT_JOB` is seeded to `"LOAD_INTRO"` by
`Profile_StartGame (0x444520)`, set to the accepted job via data-driven `VAR_ACCEPT` directives in the
`.job`/`.nws` scripts (`Job_ParseVarDirectives 0x46a7d0` + job appliers), and cleared to `"NO_JOB"` by
`Job_Complete (0x4696a0)` (which also copies it into `JOB_COMPLETED`).
Verified against BORA05/fron01C/earth07/bw01_02 (`spd.py` now prints these). A sector also embeds
`PLAYER.SCR` (start), faction groups (`FG_*`), content refs (`CONT_###`), sub-sector `.spx` and
adjacent-sector `.spx`.

## .des — entity class definition (CBIN) : the ship handling block

A `.des` is a CBIN (binary, rol-7-XOR encrypted; `cbin.py` decodes it). `main.DESC_TYPE` selects the
entity class (SHIP=1, ASTEROID=2, CAPITOL_SHIP=3, HYPER_GATE=4, STARBASE=5, MINE=6, CARGO=7,
BEACON=8, SPEED_RING=9, …). For a SHIP, `Ship_LoadDes (0x463ef0)` parses the groups into a 0x6c8-byte
class struct. The **flight-handling** groups and their runtime homes:

- **`rotation`** → parsed by `ShipDes_ParseRotation (0x463a90)` into `class+0x84` (0x9c bytes), three
  per-axis blocks (yaw/pitch/roll), each `{*_ACCEL, MAX_*_RATE, *_DAMPEN}` + `YAW_ROLL_RATIO`. After
  unit scaling, `MAX_YAW_RATE→class+0x90`, `MAX_PITCH_RATE→class+0xa0`, `MAX_ROLL_RATE→class+0xb0` —
  exactly what `Entity_TurnToward` reads as `def+0x84+{0xc,0x1c,0x2c}` (per-axis max turn rate).
  Max-rate values are in the 512-per-rev angle unit; accel/dampen are scaled by `0x52e6d0`.
- **`speed`** → `ACCELERATION`, `MAX_SPEED`, `DRIFT` (throttle / forward-motion limits; feed the
  `Entity_ThrustToWorld` step and the throttle solver `FlightModel_SolveThrottle 0x424170`).
- **`afterburner`** → boost multipliers + energy drain (`class+0x118`, drained in `Dcb_Think_Ship`).
- **`shields` / `hull` / `energy`** → `SUPPORTED`, `MAX_ENERGY`, `DAMAGE`, regen (combat survivability).
- **`sped`** (physics/render block at `class+0x554`), **`connect`** (`LAND_POINT`, hardpoints via
  `Object_ParseHardpoints`), **`sound`**, **`camera`**, **`ai`**, **`misc`**.

(Key names dumped from `BARSHUT.DES` via the decrypt in `cbin.py`.)

## PFF / SBF / PAK / PCX
See `TachyonFileFormats` (PFF = tar-like archive, 32/36/40-byte entries; extracted to `pff/`).
TODO: correlate with in-game loaders (`CreateFileA`/`ReadFile` callers) when we reach them.
