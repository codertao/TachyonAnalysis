# .PAK: the "3DPK" model format (investigated 2026-11-08)

Confidence tags: **[c]** confirmed (code and data agree), **[l]** likely, **[?]** unclear.

## Sources
- **Code:** `Pak_Load 0x4b14b0` → `Pak_Relocate 0x4affb0` (per-mesh `Mesh_Relocate 0x4afbd0`,
  `Pak_RelocCollision 0x4afe60`, `Pak_RelocStates 0x4afe10`), `Pak_LoadTextures 0x4b0680`, and
  `Model_CloneFromPak 0x4b1400` for runtime instances.
- **Parser and validator:** `TachyonFileFormats/src/pak.py` (`info` / `check` / `export`). All 1,160
  paks in `pff/` parse cleanly:
  - every mesh's section offsets tile exactly;
  - every face index is in range;
  - every texture section ends exactly at EOF.
- **Spot checks:** a texture decoded to PNG, and the Cutlass rendered flat-shaded and fully textured
  from the parsed data. Both came out correct.

All integers are little-endian. "fx" means signed 16.16 fixed point. Offsets are **file offsets**
unless noted ("mesh-relative" etc.).

## File layout
```
0x000  header (0x60)
0x060  LOD table            n_lods x {fx switch_distance, u32 group_ofs}
....   LOD groups           one per LOD
....   meshes ("3DO1")      referenced by parts, possibly shared between LODs
....   state block          optional, flags & 4
....   collision block      optional, flags & 1
main_end:
       texture section      u32 count + records; runs to EOF
```

### Header (0x60 bytes) [c]
| off | type | meaning |
|---|---|---|
| 0x00 | char[4] | `3DPK` |
| 0x04 | u32 | version: 0x2003 (1,150 files) or 0x2002 (10). The loader accepts 0x2001..0x10000 and shows "This PAK file is an incompatible…" otherwise |
| 0x08 | char[32] | model name, space padded (e.g. ` CUT_H`) |
| 0x28 | u32 | flags: `1` has collision block, `2` palette remappable (else the "not REMAPPED" warning), `4` has state block |
| 0x2c | u32 | `n_lods` (1–6) |
| 0x30 | fx | radius from the exporter. **Overwritten at load** with a computed bounding radius (`0x4b2370`) **[l]** |
| 0x34 | u32 | 0 |
| 0x38 | u32 | header size = 0x60 |
| 0x3c | u32 | `main_end`: end of the main block and start of the texture section |
| 0x40 | u32 | file size |
| 0x44 | u32 | 0 |
| 0x48 | u32 | collision block offset (if flags & 1) |
| 0x4c | u32 | state block offset (if flags & 4) |
| 0x50–0x5f | | 0 |

**At load:**
- The header is copied into a 0x9c-byte struct, and the rest of the main block follows it.
- `+0x38` becomes 0x9c, and `+0x60` holds the shift (0x9c − 0x60). All stored offsets are then
  rebased by `base + off + shift`, so on disk they are plain file offsets.
- Runtime-only fields: `+0x64` palette (the `.pal` named next to the pak in the `.des`), `+0x68/+0x6c`
  texture count and pointers, `+0x70` name copy, `+0x90` LOD table.
- The texture section is read only when the texture system is up (`0x62c124`).

### LOD table and groups [c]
- **LOD table** (at 0x60): `n_lods × {fx distance, u32 group_ofs}`. Distances rise, and the last is
  effectively "infinite" (e.g. Cutlass 80 / 120 / 200 / 3000; Enforcer 40 / 120 / 200 / 300 /
  10000).
- **LOD group:** `{fx scale (always 1.0), u32 n_parts, u32 parts_ofs (always 0xc, relative to the
  group)}`, followed by `n_parts` part records.

**Part record (0x2c):**
| off | type | meaning |
|---|---|---|
| 0x00 | u32 | mesh offset (`3DO1`) |
| 0x04 | i32[3] | rotation, engine angles (0 on disk; `.anm` and state animation write it at runtime) |
| 0x10 | u32 | part flags (below) |
| 0x14 | u32 | 0x2c, the record size **[l]** |
| 0x1b | u8 | number of children |
| 0x1c | u8[3] | tint RGB, used when part flag `2` is set (never set in the data) |
| 0x20 | u32 | **parent**: byte offset into this group's part array; 0 = the root (stored as null) |
| 0x24 | u32 | **first child**: byte offset; children are contiguous |
| 0x28 | u32 | runtime transform-buffer pointer (0 on disk) |

- **Hierarchy:** part 0 is the root.
- **No per-part translation:** every part's geometry is authored in model space. Rotations are about
  the **model origin**, combined up the parent chain.
- **Example:** Enforcer root → 7 children (four arms 1–4 and three glow cards 5–7). Each arm → a
  segment (8–11), and each segment → a glow card (12–15). `solpatrl.anm` names parts 1–4.

**Part flags (`+0x10`), from the per-part transform in `0x4b3f90`:**
| bit | meaning |
|---|---|
| `0x02` | apply tint `+0x1c` at load |
| `0x08` | ? (6 parts) |
| `0x40` | **billboard**: drawn with no rotation matrix, only scale (glows, cockpit glare; e.g. the Cutlass `COCKPIT_GLARE: 1` part) **[l]** |
| `0x80` | runtime: hidden (toggled by state "blink" animators) |
| `0x100` | don't pass this part's rotation on to its children |
| `0x200` | ignore the object's rotation (alternative transform path) **[?]** |

### Mesh (`3DO1`) [c]
All offsets inside a mesh are **mesh-relative**.

| off | type | meaning |
|---|---|---|
| 0x00 | char[4] | `3DO1` |
| 0x04 | u32 | 0x101 |
| 0x08 | char[8] | mesh name (e.g. `CUT_H1`, `SOLPTH02`; the letter is the LOD: H / M / L / T) |
| 0x10 | fx | bounding radius |
| 0x14 | fx[6] | bounding box as min/max pairs in file-axis order **Z, Y, X** |
| 0x2c | u32[6] | counts: materials, vertices, faces, normals, points54, attach points |
| 0x44 | u32[6] | offsets of the same six sections (the first is always 0x5c) |

Sections are contiguous, in that order:

| section | stride | layout |
|---|---|---|
| materials | 0x1c | see below |
| vertices | 0x2c | `fx x, y, z`; 5 × u32 runtime scratch (0); `fx u, v`; u32 runtime "used" flag (0) |
| faces | 0x20 | `u32 0`; `u32 material` (byte offset into materials); `u32 v0, v1, v2` (byte offsets into vertices); `u32 n0, n1, n2` (byte offsets into normals) |
| normals | 0x10 | `fx x, y, z` with length about 0.5 (so 1.0 = 0x8000), u32 0. Per face corner; flat faces repeat one normal |
| points54 | 0xc | `fx x, y, z`: unknown point set (2 on the Cutlass near the engines; doesn't track engine count) **[?]** |
| attach points | 0x10 | `fx x, y, z` + 1 word that is **overwritten at load** with a pointer to the point's transformed position. These are the indices used by `.des` `connect` (`LAND_POINT`, `ENGINE_POINT`, `SPAWN_POINT`, …) and OCF `ATTACH` (`Pak_GetAttachPoint 0x4b1db0`) |

- **Triangles only.**
- **UVs:** 16.16 with 1.0 = the full texture width/height. They tile outside [0, 1] (confirmed by
  the textured render).
- **Axes:** **file axes are converted at load**: `(x, y, z)_file → (x, z, −y)_engine`, for
  vertices, normals, points54 and attach points (`Mesh_Relocate`). The collision block is not
  converted; it is already in engine axes.

### Material (0x1c) [c except where tagged]
| off | type | meaning |
|---|---|---|
| 0x00 | char[12] | texture name (`IMSID01H.PCX`), matched by name to the texture section or global cache. May have junk after the NUL |
| 0x0c | u8 | 0 |
| 0x0d, 0x0e | u8 | 8, 8 (two exceptions are 0) **[?]** |
| 0x0f | u8 | alpha / translucency level (0, 128, 255, 64, 200 …). Load maps 0xff → 0xfe; `}` materials force 0x7f **[l]** |
| 0x10 | u8[3] | flat colour RGB for untextured materials (flag 8 clear). At runtime this slot becomes the texture pointer |
| 0x14 | u8 | 0 or 5–9 **[?]** |
| 0x15 | u8 | 0 or 2–3; non-zero adds render flag 0x10000 **[?]** |
| 0x16 | u16 | material flags (shared with texture flags, below) |
| 0x18 | u8 | 0 |
| 0x19 | u8 | **animation frames** (2 / 4 / 8 / 16 / 32): this and the following `n − 1` materials are the frames |
| 0x1a | u8 | animation counter slot. Frame = `counter[slot] % frames` (`0x4b4e90`); counters come from the state block. `0x7d '}'` / 0x7e / 0x7f are special (125 is common: 980 materials) **[?]** |
| 0x1b | u8 | 0 |

**Material and texture flags (u16)**, from `Tex_FlagsToRenderState 0x4af590` and
`Pak_BindMaterial 0x4af910`:
| bit | meaning |
|---|---|
| `0x0008` | textured (else flat RGB at `+0x10`) |
| `0x0010` | alternative blend mode (state 0x65431) **[?]** |
| `0x0040` | **double-sided**: emits a reversed copy of each triangle (`0x4b0cb0`) |
| `0x0080` | flat colour is a palette shade (`+0x10 >> 3`) **[l]** |
| `0x0100` | smooth / Gouraud for untextured; part of transparency combos **[l]** |
| `0x0800`, `0x1000` | affect the mip/LOD count kept for the texture **[?]** |
| `0x2000` | animated texture (with `0x7000 == 0x2000`, frames are packed in consecutive materials; `0x4afb10`) |
| `0x4000`, `0x6000`, `0x4100`, `0x2100`, `0x0110`, `0x0088` | transparency / additive modes, mapped to hardware state bits by `Pak_LoadTexture 0x4b02d0` **[l]** |
| `0x8000` | ? (set on glow textures `0xa948`/`0xa108`) |

Common values: 0x8 (plain), 0x4048, 0x2148, 0x2108, 0xa108/0xa148/0xa948 (glows), 0x58 (shadow
cards), 0xc008, 0x0 (flat colour).

### Texture section (at `main_end`) [c]
`u32 count`, then `count` records:

| off | type | meaning |
|---|---|---|
| 0x00 | char[12] | name (`.PCX`) |
| 0x0c | u16 | palette entries: 256, or 0 (12 textures, no palette) |
| 0x0e | u16 | texture flags (same bits as the material's) |
| 0x10 | u32 | width (power of two, 8–256; smaller than 2 triggers a warning) |
| 0x14 | u32 | height |
| 0x18 | u32 | `size`: compressed byte count |
| 0x1c | u8[size] | 8-bit indices, **PCX RLE**: byte ≥ 0xC0 → repeat the next byte `(b − 0xC0)` times (0 counts as 1), else a literal (`0x4a34c0`). 84 files keep the PCX palette marker `0x0C` as the last byte |
| … | u8[3 × entries] | RGB palette, 8-bit per channel |

- **Effectively a PCX file** with its 128-byte header replaced by this record.
- **Several LODs per texture:** the same texture usually appears at several sizes, named with the
  LOD letter (`…H`, `…M`, `…T`).
- **Software renderer:** shades with the pak's external `.pal`. The embedded palette is what the
  textures were authored with, and is the right one for export.

### Collision block (flags & 1)
See `collision.md` "Collision meshes":
- a 0x38-byte header with counts and offsets;
- 0x48-byte triangles (vertex/normal byte offsets + 13 floats of precomputed data);
- float vertices and normals, **in engine axes**.

The mesh is separate and simplified (the Cutlass hull without its cannons). 740 paks have one.

### State block (flags & 4): named procedural animation [c]
Header (0x18): `{0x18, 0x2c, 0x74, 8, u32 count, u32 entries_ofs}`. The first four values are the
header size and the strides of the record types. 164 paks have one: every one has `ON`, and three
also have `OFF`.

**State entry (0x74):**
| off | type | meaning |
|---|---|---|
| 0x00 | u32 | number of part animators |
| 0x04 | u32 | part animator array offset (0x2c each) |
| 0x08 | u32 | number of texture counters |
| 0x0c | u32 | counter array offset (8 each: `{u32 slot, fx rate}`; `counter[slot] = rate × time`, which drives the material frame animation) |
| 0x10 | char[16] | state name (`ON`, `OFF`) |
| 0x20 | u32 | effect flags: 1 glow-intensity curve, 2 uniform scale, 4 / 8 / 0x10 scale x / y / z, 0x20 / 0x40 / 0x80 paired axes |
| 0x24 | curve | glow intensity |
| 0x38, 0x4c, 0x60 | curve | scale x, y, z |

**Curve (0x14):**
- `{u32 mode, fx a, fx b, fx c, fx d}`.
- Mode 1: `a + c × random`. Mode 2: alternate `a`/`b` by frame parity. Mode 4: `a + c × sin(d × t)`.
- Otherwise the value is the constant `b` (`0x4b25a0`).

**Part animator (0x2c):**
- `{u32 part, u32 mode, fx rot_rate[3], u32 threshold, u32 other, u32 period, fx base_rot[3]}`.
- **Rotation:** `rot = base + rate × time`, e.g. spinning radar dishes.
- **Mode bits:** 1 random blink, 2 periodic blink (`threshold` vs phase), 4 copy part `other`'s
  visibility. These toggle the part's hidden bit.
- **Selection:** `Model_SelectState 0x4b2950` picks the state (e.g. asteroids use state 0), and
  `Model_UpdateState 0x4b27d0` animates it.

## Exporting
`pak.py export X.PAK outdir [lod]` writes:
- OBJ with engine-axis vertices, UVs (v flipped for OBJ) and one object per part;
- MTL with diffuse maps or flat colours;
- one PNG per embedded texture.

Billboard parts (flag 0x40) come out as flat cards. Animated materials export frame 0 only.

## Open
- `points54` purpose; material bytes `+0x0d/+0x0e/+0x14/+0x15`; full meaning of flag bits
  0x10/0x80/0x100/0x800/0x1000/0x8000 (needs the hardware DLLs `Hw_d3d.dll`/`Hw_3dfx.dll`, which
  receive the translated state).
- Part flags 0x08 and 0x200.
- The `0x7d–0x7f` animation-slot values.
