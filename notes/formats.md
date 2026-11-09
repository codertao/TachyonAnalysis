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
| `LIGHTNING` enabled | int | +0xd8 | gates the lightning/cloud block |
| `[fog] ENABLED` | int | +0xdc | gates the fog block; also turns off space debris |
| `CLOUD_RGB` | 3×int | +0xf4..+0xfc | |
| `BACK_RGB` | 3×int | +0x100 | default 0x40 |
| `FRONT_RGB` | 3×int | +0x10c | default 0x80 |
| (DAT_0054a5c8) | 2×+1 | +0x118 | defaults 0x40000000,0x10,0xa0 |
| fog pcx | string | +0x124 | default `fog1_01.pcx` |

`IMAGE` / `SUN` entry params: `pak, pal, yaw, pitch, distance, scale` → 0x64-byte record **[c]**
(`Bdf_ParseImageEntry 0x467840`):
- `+0x00`: model, from the FX pool, not remapped.
- `+0x0c` vec3: the offset `R(yaw, pitch, 0) · (0, 0, distance)`. Angles are degrees → engine
  units; distance and scale are ×65536.
- `+0x18`: an object instance (flags `0x50`, scale `+0x1c` = `scale`, `+0x28` = 8), put in
  state 0.
- `SUN` is parsed first, with its distance forced to 1300 (`0x5140000`). Then come `count(IMAGE)`
  records.

**Drawing [c]** (`FUN_00468440`):
- The `SPACE_PAK` model goes around the camera at scale 2 (`0x20000`), rotated by `SPACE_ROT`
  (yaw, pitch), with near/far set to 100 / 12000.
- Then each image at `offset + camera position` (`0x5b9600`).
- Then the world. Both backdrop layers follow the camera, so they never get closer.
- Sizes: sky models have radius ~1,100–1,600 (×2). Images are ~10-unit models scaled by
  2–200 at distances of 400–10,000, so many sit beyond the sky shell. The sky can't be occluding
  them; the asset viewer draws the sky without depth writes, then the images, then clears depth
  for the world.

Lightning, clouds, fog and the lens flare are separate effects, not drawn by the asset viewer.

### Per-sector palette re-tint (investigated 2026-11-08) [c]
No palette *swapping*: every model keeps the one `.pal` its `.des`/`.bdf` names. What changes per
sector is a **recomputed copy** of that palette.

- **Palette object** (`Pal_Load 0x4ad650`, cached and refcounted by name in `Pal_GetCached 0x4af4a0`,
  so every model that names `bora.pal` shares one copy):
  - `+0x000` the original 256×RGB from the file;
  - `+0x300` the remapped RGB that is actually drawn;
  - `+0x600` a 256-byte protect mask. It is filled from an index list stored in the `.pal` file.
    Protected indices are never remapped (presumably glows and lights stay fixed **[l]**).
  - `+0x700/+0x704` optional `<name>.CR1`/`.CR2` companion files, used for 16-bit colour tables.
- **`Pal_Remap (pal, gamma, sat, r, g, b) 0x4ad900`**:
  1. `Pal_BuildCurve`: builds a per-channel lookup. `gamma − 128` bends the midtones up or down
     using the signed table `0x55ea48`, then each channel is multiplied by `r/g/b ÷ 128`.
  2. For each unprotected index: `luma = (r + 2g + b)/4`, `c = luma + (c − luma)·sat/128`, then the
     curve lookup.
  3. Rebuild the 8-bit or 16-bit lookup tables (`DAT_0055e964 == 0x10` means 16-bit).
- **When it runs**, via `ModelPool_Relight`, on every pool slot flagged remappable (`+0x24 == 1`):
  - **Sector load:** `Bdf_LoadAndApply` calls
    `Scene_SetPalParams(GAMMA·g_PalBrightness/128, SATURATION, RGB)`, then relights all three model
    pools. Model palettes get the gamma and saturation only; Relight passes RGB as neutral 0x80.
    The sector `RGB` goes to `0x669200`, which feeds the lighting shade ramp
    (`Light_BuildShadeRamp 0x4b37a0` **[l]**). So `RGB` tints the lighting, not the palette.
  - **No backdrop** (`Bdf_SetNeutralLighting 0x468690`): neutral saturation and RGB.
  - **Artist debug mode** (`ART_DEBUG_*` in `DEF_KEYS.CFG`, Ctrl+F11 select): live ±5 adjusters
    for gamma, saturation, R/G/B, ambient, light RGB, plus yaw/pitch (`ArtDebug_Adj* 0x466fc0..
    0x4672e0`). They sit in the action table `0x53cbb8` (stride 0x20: handler, arg, …, action id)
    and relight all pools on every keypress.
  - **Hyperspace:** `Hyper_TintPlayerShip 0x42e460` remaps the ship's palette to gamma = global,
    sat 128, RGB (100, 100, 128), which gives a blue cast inside the warp tube.
- **`g_PalBrightness 0x5a6818`**: a global gamma multiplier. `Video_Init` sets it to 0xb4 (the
  software renderer draws everything about 40% brighter); hardware init resets it to 0x80.
- **Non-remappable loads** (`ModelPool_Load(..., remap=0)`): backdrop paks, the hyperspace pak and
  some effects. They are tinted once at load time with `g_PalBrightness` only. `Pak_Load` warns
  "Pak %s in not REMAPPED" if the pak header flag `+0x28 & 2` is clear.
- **Data:** all 88 `.bdf` files set their own `RGB`; GAMMA is almost always 128 (exceptions:
  MYSTER7 = 58, MYSTER8 = 133, NEUTRA4 = 143, NEUTRA7 = 138), and SATURATION ranges 78–208.

### Sector lighting (2026-11-08) [c unless tagged]
Per-vertex colours are rebuilt each frame by `FUN_004b4ed0` per material (`FUN_004b4cf0`):
- **Diffuse** (`FUN_004b4b20`): `d = clamp(128·N·L, 0, 127)` (dot >> 14, `FUN_004b4af0`); colour
  `= ramp[256 + bias + 2d]` from `Light_BuildShadeRamp 0x4b37a0` (table `0x610480`, 767 entries):
  - `i ≥ 0`: `(amb·RGB + i·LIGHT_RGB) / 256`; `i < 0`: `(amb + i)·RGB / 256`;
  - then the brightness/contrast globals `0x6691f8/0x6691fc` (neutral 0x80) and
    `FUN_004aef50`, clamped to 4..252.
  - `amb = AMBIENT_LIGHT >> 1`; `RGB` = the BDF sector tint; `LIGHT_RGB` = the light colour.
- **L** = the direction of the BDF `SUN` image (`FUN_0048a960`); `LIGHTNING_LIGHT_SRC` replaces
  it when `LIGHTNING` is on, and between flashes the diffuse is scaled by
  `LIGHTNING_AMBIENT_LIGHT / 512` (`FUN_00468320`, `FUN_004b4df0`); see "Lightning" below.
- **Self-lit materials** (alpha `+0x0f` ≠ 0, `FUN_004b4c10`): grey `table_0x60f880[fog + v]`
  with `v = min(2·alpha, 255)`; that table is `clamp(i − 256)` at neutral brightness, so the
  brightness is ≈ v.
- **Specular** (`+0x15` ≠ 0, `FUN_004b4b80`): H = normalize(V + 2L); grey highlight
  `(128·cosᵖ(N·H) << +0x14) >> 7` written to the vertex specular colour (added after the texture).
  Not clamped in code; the data keeps it in range.
- The palette side (`GAMMA`, `SATURATION`) is in "Per-sector palette re-tint" above.
- **Depth fog** (fog sectors): `FUN_004b47b0` / `FUN_004b4230` put
  `255·(z − MIN)/(MAX − MIN)` (0 below MIN, 255 beyond MAX) in the vertex specular alpha, which
  the driver uses as the fog amount towards fog colour slot 3 (`FUN_004ad0c0`). `z` = view depth.
  Self-lit materials are also darkened through the grey table (`FUN_004b4c10`).

### Lightning (`FUN_00468320`, once per 50 Hz world tick, `LIGHTNING` sectors) [c]
- State: `level` (16.16, `0x5b9088`), flash `counter` (`0x5b908c`), bolt number (`0x5b9090`).
- Each tick:
  1. With probability 5/1000: `counter = 12 + rand % 12`, bolt = `rand & 15`, plus a thunder
     sound (`FUN_00466590(7, 5, 0, 16 + (rand & 99))`) and `FUN_0042e140(2·counter, 0xff)` (a
     screen effect, **[?]**).
  2. If `counter > 0`: decrement it and set `level = 100 + rand % 156`.
  3. Move `level` at most 6 towards `LIGHTNING_AMBIENT_LIGHT >> 1`. `DAT_00668f8c = level >> 8`.
- Diffuse is `(128·N·L)·level/256` (`FUN_004b4df0`), so between flashes the scale is
  `LIGHTNING_AMBIENT_LIGHT / 512`.
- While `level` > ambient, `FUN_00468440` draws `LIGHTNING_PAK` right after the sky, with the
  sky's rotation and scale 2. It uses instance flags `0x90`:
  - `+0x14 = min(level, 255)`: with flag 0x80, self-lit materials use this brightness instead
    of `2·alpha` (`FUN_004b4cf0`).
  - `+0x18 =` bolt number: the slot-0 animation counter, so the 8-frame bolt material
    (`GLD4ZAP0..7`, `S5ZAP_00..07`) shows frame `bolt % 8`.
- Only BORA5, BORA7 and EARTH05 have a `LIGHTNING_PAK` (`gold4zap.pak` ×2, `s5zap.pak` ×1); the
  other lightning sectors just flicker the light.

### Fog (`[fog]` group, 2026-11-08) [c unless tagged]
The BDF, not the SPX, configures fog: 20 BDFs (BORA6, DISPUT7, MYSTER1–5/7, NOVAWO*, BW*b3_*).
```
[fog]
  ENABLED: 1
  MIN: 1000          ; +0xe0, fog start (view depth)
  MAX: 5000          ; +0xe4, full fog
  RGB: 180, 60, 20   ; +0xe8, fog colour = clear colour
  CLOUD_RGB: ...     ; +0xf4 (unused: FUN_00445720, the cloud draw, is an empty stub)
  BACK_RGB: ...      ; +0x100, default 0x40 (stored by FUN_004b91c0; no reader found)
  FRONT_RGB: ...     ; +0x10c, default 0x80: fog-sheet tint
  DOA: f, i, i       ; +0x118, default 2.0, 16, 160 (FUN_004b91e0; no reader found)
  PCX: foglorng.pcx  ; +0x124, default fog1_01.pcx: fog-sheet texture
```
- **Load** (`Bdf_LoadAndApply`): `FUN_004b23a0(1, MAX, MIN)` enables the depth fog,
  `FUN_004ad0c0(RGB)` sets driver colour slot 3 (fog colour), `FUN_004abd30(RGB)` the clear
  colour, and `FUN_00424ee0` loads the PCX as texture slot "FOGPCX" and enables the sheets (D3D
  only, and only if option `0x5b8f48` is on).
- **Backdrop:** `FUN_00468440` skips the sky, images and lightning overlay, and sets far =
  MAX + 250.
- **Fog sheets** (`FUN_004b9250`, called from the render sequence at `0x458574`, after the world
  and lens flare, before the HUD):
  - Up to five screen-filling quads (a 5-vertex fan) at depths `d = near + 50k`, with `near` kept
    in (1, 51]. Sheets with `d ≥ 200` are skipped.
  - Brightness `f(d)`: 0 at d = 1, rising to 60 at 41, flat to 80, 30 at 160, 0 at 200. Vertex
    colour = `FRONT_RGB·f/256`, alpha 0xff, z = `clamp(10/d, 0.0001, 0.9999)`.
  - Texture stage 0 at `uv = R(roll)·p·d·0.01/384 + offset`, where `p` is the pixel offset from
    the screen centre (scaled to 640 wide). Stage 1 samples the same texture at `(v, u)/3`.
    Render state `0x100602`: additive (`SRCALPHA, ONE`, alpha 0xff).
  - `offset = slot[k] + scroll + k·(0.28, 0.14) + strafe`.
- **Camera feed** (`FUN_0040edd0` → `FUN_004b9a50`, `FUN_0040f070` → `FUN_004b9b70`):
  - Translation (world units × 0.4, on the camera axes): `strafe += (16x, −16y)`, `near −= z`.
    When `near` leaves (1, 51] it steps by 50, the slots shift by one and `scroll` moves
    ∓(0.28, 0.14), so the sheets stay continuous.
  - Rotation (quarter-turn units): yaw and pitch add `(8·yaw, −8·pitch)·d·0.01/384` (after
    roll) to every slot, so turning slides all sheets together. Roll rotates `R`. Slots and
    `scroll` wrap at ±3.
- Effect: a parallax stack of drifting mist that the camera flies through, recycled endlessly.
  **[l]** How z = 10/d compares with the world's depth values is unconfirmed; the viewer puts
  each sheet 2.5·d world units ahead (the forward feed rate).

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
+0x20 u32  trigger count  (1)        \   MISSION TRIGGER TABLE (Spx_RelocParamSection 0x48dac0;
+0x24 u32  trigger offset (0x2dc)    /    trigger 0x14, condition 0x28, action 0x10; see missions.md)
+0x2c u32  sub-sector count  (2)     \   sub-sector "stage" section (conditional; stride 0x2c)
+0x30 u32  sub-sector offset (0x234) /
+0x34 char QUAD name[] (e.g. "QUAD_05") = this sector's QUADRANT id (galaxy: Region -> Quadrant);
                                           resolved via Sector_GetQuadrantName 0x457ba0
+0x58 u32  dialog count / +0x5c offset: .SCR dialog names, stride 0x10 (trigger action 2, event 7)
+0x64 u32  scene count  / +0x68 offset: .SEN cutscene names, stride 0x10 (trigger action 3)
+0x70/+0x74  further relocated section (count 2 in BORA05; unidentified)
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
+0x20 s32  OBJECT ID (sector-unique; what triggers, Sped_FindDef and spawn actions refer to)
+0x24 u32  flags    (0x2, 0x4, 0x82, 0xc2, …; bit tested 0x1000 etc. in ctor)
+0x28 u32  runtime entity ptr      (0 on disk)
+0x2c u32  runtime "constructed"   (0 on disk)
+0x38 ...  PER-KIND: ships -> u8 team/side (0=default); gates -> dest sector .spx name string
+0x54 s32  GROUP ID (-1 = none; trigger group conditions/actions; Trig_SpawnGroup)
+0x5c s32  ? (-1/0/10/11/13 seen; earlier guessed "object id" but triggers use +0x20)
 ...tail  per-kind params (e.g. gate link ids at +0x48/+0x50 = {u16 kind, u16 id})
```
**Position unit [l]:** 16.16 fixed point, the same scale as PAK vertices.
- `Sped_ConstructEntity` copies `+0x08..+0x10` straight into the entity position. Part pivots
  (16.16) are added to that position (`FUN_004b3eb0`).
- The asset viewer places BORA05's shuttle and cargo crate right at the station's surfaces at this
  scale.

**Model lookup [l]** (asset viewer):
- alias → `desnames.cfg` `DES: alias, file` → `.des` `[main]` `OCF_FILE` (stations, capital
  ships), else `EXTERIOR_PAK`. Hyper gates also have `CENTER_PAK` / `FLARE_PAK` / `SPED_PAK`.
- Player-ship aliases (DART, CLAW, MANTA, RIPPER) are not in `desnames.cfg`.
- Placements with decl index −1 are the kind-0 null records.

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

### .PAK (3DPK model)
Full spec in `notes/pak.md`; parser/exporter `TachyonFileFormats/src/pak.py`.

## Space debris (flight-time dust) [c]

The streaking specks seen when moving. Not sector data: it is a client effect, toggled by the
"Space Debris" option (`GLBL_spacesav[0x2e]`, default on; `cbOptDebris`).

- **Setup** (`FUN_0041c3f0`, from `init_flight_start`): loads `moveroid.pak`/`.pal` and fills a
  60-slot "Debris DCBS" pool (`FUN_0041c330` → `FUN_0041c2f0`). Each speck is that model at scale
  0.25 (`0x4000`), placed at a random point in a 16-unit cube (`FUN_0041c210`, `rand & 0xfffff`).
- **Cube** (`FUN_0041bff0`, once per tick): centred 8 units (`0x52e698` = 524288.0) ahead of the
  camera along its view direction, ±8 on each axis.
- **Per tick** (`LAB_0041c280`): each speck's position wraps into the cube
  (`(p − min) & 0xfffff + min`), so specks the camera passes reappear ahead.
- **Draw** (`FUN_0041c0e0`): only when the player exists, the option is on, debris is enabled
  (`DAT_005b27ec`), speed > `0x400` (1/64 unit per tick) and the sector has no fog
  (BDF `+0xdc` == 0). All specks are aligned to the player's velocity and stretched along it
  by `clamp(speed·64, 1, 64) · 0.25` (0.25–16), so they become streaks at speed.
- **Enable flag** (`FUN_0041c3e0`): cleared on hyperspace entry (`Hyper_Enter`) and by
  `FUN_00454400`; set again by `Anim_Finish` and `FUN_0045b340`.

