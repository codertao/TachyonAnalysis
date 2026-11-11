# Tachyon: The Fringe — architecture map

Target: `GoG/space.exe` (sha256 `ee7f119e…`, ImageBase `0x400000`, PE32 x86).
Authoritative project: `decomp/ghidra_proj` (Ghidra 12.1.4). Corpus: `decomp/corpus/`.
Naming source of truth: `decomp/sidecar/names.tsv`.
Types source of truth: `decomp/sidecar/types/` (`structs.tsv`, `sigs.tsv`, `globals.tsv`, applied by `ApplyTypes.java`).
Key structs: `SpED` (entity header, 0xd4) + `SpED_SrvPlayer` / `SpED_Drone` / `SpED_Turret` / `SpED_Client`; `TachConn` (server
per-client record, 0x208, `g_SrvConns`); `PowerBlock`; `WeaponDef`; `Desc` (class header, 0x84 incl. 25 method slots) / `ShipDesc`
(0x6c8, .des fields, `ShipFlight` handling block at +0x84); `Quadrant` (0xbc, `g_Quadrants`) / `SectorRec` (0x44, `g_SectorTable`);
`Pool` + intrusive `List_*`; S->C events `EventSpec` / `SrvEvent` (broadcast node, payload at +0x3c) / `ConnEvent` (per-conn copy).

## Segments
| Seg | Range | Notes |
|---|---|---|
| `.text` | 0x401000–0x4c9000 | main code |
| `_TEXT` | 0x4c9000–0x4e3000 | code |
| `_text` | 0x4e3000–0x52e000 | code |
| `.rdata` | 0x52e000–0x532000 | const/vtables |
| `.data` | 0x532000–0x6caee0 | globals, mode tables, strings |

## Entry / lifecycle (walk target for Phase 1)
| Addr | Role |
|---|---|
| `WinMainCRTStartup` | CRT entry |
| `0x49fc40` | **WinMain** — init, 3 memory pools (0xf00000/0x100000/0x100000), instance+window init, cmdline parse, run |
| `0x49f390` | instance init |
| `0x49f400` | window / display init |
| `0x4334c0` | command-line dispatch (`GetCommandLineA`); NLSTATS |
| `0x433420` | switch parse (/D /VRULES /VECHO /VLOG /NOHELP) |
| `0x49f6a0` | **message pump + idle tick** (`PeekMessageA` loop; idle → timed tasks / audio pump / periodic poll; breaks on WM_QUIT) |
| `0x49fd35` | timer teardown / cleanup (NOT the main loop) |

## Game-loop / state machine
| Addr | Role |
|---|---|
| `0x44ec80` | **state-machine driver** (only caller of 0x44ead0); runs current mode, chains via `DAT_00590e28` |
| `0x44ead0` | fixed-timestep loop (50 Hz / 0x14 ms); drives mode `+4` update / `+8` render |
| `0x44ec10` | variable-rate loop |
| `DAT_00590e28` | "next mode" pointer (~55 write sites = mode transitions) |

### Mode object layout (vtable-like struct)
`+0x00` enter · `+0x04` update · `+0x08` render · `+0x0c` exit · `+0x10` loop-flag (byte)

| Table | Mode | enter/update/render/exit |
|---|---|---|
| `0x544408` | client shell (DAT_00562bc8==0) | 0x444eb0 / 0x4450b0 / 0x4455c0 / 0x445600 |
| `0x533a70` | dedicated-server stub | 0x40ebd0 / 0x40ebf0 / 0x40ec00 / 0x40ec10 |

## Subsystems (anchor imports to xref)
| Subsystem | Anchors |
|---|---|
| Netcode (transport) | `netsock.dll` (HostSession/JoinSession/EnumSessions/SendPacket/InitTCPIP…), `DPLAYX.dll` |
| Netcode (protocol) | engine `0x4b7840..0x4b9110`, game callbacks `0x418150` (client) / `0x462180` (server); see `notes/multiplayer.md`; single-player = same code in-process, see `notes/singleplayer.md` |
| Part animation (`.anm`) | loader `0x406e80`, player `0x407890..0x407bc0`, ship hook `Ship_PreRender 0x462fd0`; see `notes/animation.md` |
| Capital ships / turrets | OCF parts `Ocf_ParsePart 0x4094a0`, `CapShip_SpawnParts 0x4125e0`, turret AI `Turret_Think 0x404c00`, weapons `g_WeaponDefs 0x55a560`; see `notes/capships.md` |
| Ship AI / skill | `Dcb_Think_AiFighter 0x4039c0`, states `g_AiStatesDefault 0x5322b8` / wingman `0x5321c8`, dogfight `AiThink_Attack 0x402cc0`, evade `Ai_BreakOff 0x402910`, targeting `Ent_FindTarget 0x48b450`, skill tables `0x5323a8..0x5323c8`; see `notes/ai.md` |
| Shields / power | struct `g_PlayerPower 0x5b20e0` (front `+8`, rear `+0x10`), player dmg `TachSrv_DamagePlayer 0x460f60` → `Shield_SplitFrontRear 0x4192c0` (world-bearing split), regen `Power_Regen 0x4561b0`, power ops 0x2005 `TachSrv_OnPowerOp 0x45f2a0`; impact FX `ShieldFx_Spawn 0x423270` / 0x1004 `CliOn_ProjectileImpact`; see `notes/shields.md` |
| Weapons | stats table `g_WeaponDefs 0x55a560` (0x110/weapon, compiled in), names `g_WeaponNameTable 0x55a3c0` + ingame.bin WEAPON_NAMES via `def+0x4c`, derived DPS `WeaponDefs_DeriveStats 0x4936c0`; full table and field map in `notes/weapons.md` / `weapons.json` |
| Damage | `Weapon_StageDamage 0x493320` → target `+0x80`: players `TachSrv_DamagePlayer 0x460f60` (×0.648 global, world-bearing F/R split), AI `AiShip_OnDamage 0x404440` (alliance filter, half-rate shield, system meter → disable), blasts `0x493ec0`, collisions `0x45fd70`; see `notes/damage.md` |
| Units / HUD | range readout = raw × 2⁻²³ (= units/128), speed readout = raw/frame × 400/65536 (= u/s × 8); radar is direction-only; see `notes/units.md` |
| Collision / avoidance | player `PlayerShip_CollisionPostThink 0x4535b0` → event 0x2009 → `TachSrv_OnCollision 0x45fd70`; AI `Ai_CollisionLookahead 0x404aa0`; cast `Coll_SegmentCast 0x418d10`; see `notes/collision.md` |
| Weapons netcode | fire 0x2001/0x2004, hit 0x2003/0x2027; `TachSrv_OnHitReport 0x45f180`, `Proj_CreateMissile 0x495960`, `Proj_PostThinkOwned 0x4949e0`; see `notes/multiplayer.md` "Weapons and projectiles" |
| NovaWorld | host heartbeat `NW_Heartbeat 0x442800` → 12.166.151.201:3875 (`AppId=` game id); client ping `NW_StartPing 0x44c550`, iBrowse page `NW_BrowserInit 0x44d390`, page-title commands `NW_OnPageLoaded 0x44d860` (`NK=`/`CK=` join token); see `notes/multiplayer.md` "NovaWorld" |
| PAK model format | `Pak_Load 0x4b14b0`, `Mesh_Relocate 0x4afbd0`, `Pak_LoadTexture 0x4b02d0`, states `Model_UpdateState 0x4b27d0`; spec `notes/pak.md`, tool `TachyonFileFormats/src/pak.py` |
| Runtime checks backlog | `notes/to_verify.md`: things to confirm in a gdb/wine session |
| Voice chat | `Netcomm.dll` (`netcomm_*`) |
| Server browser / UI web | `iBrowse.dll` (`ibrowse_OpenURL/GetMetaValue…`) |
| Graphics (software raster) | `DDRAW` (`DirectDrawCreate`) + `GDI32` (`CreateDIBSection`/`StretchDIBits`/palette); no Direct3D |
| Audio | `mss32.dll` (Miles `_AIL_*`), `DSOUND`, `WINMM`, `MSACM32` |
| Input | `DINPUT` (`DirectInputCreateA`), USER32, WINMM joystick |
| Assets / file I/O | KERNEL32 `CreateFileA`/`ReadFile`/`FindFirstFileA`/`_lopen`/`_lread`/`SetFilePointer` |

## Known data points
| Addr | Role |
|---|---|
| `0x4a90a0` | streaming-audio refill (16×16KB ring buffer, 16→8-bit, WAV loop at 0x2c) |
| `0x4b53b0` | in-flight music: `Ttfmusic.sbf` ADPCM segments sequenced by the `TTFMUSIC.BIN` script VM (`notes/music.md`) |
| `0x44bd40` | profile/loadout init; default ships `BORA_CUTLASS` (0x547ef0), `GALSPAN_ORION` (0x547f00) |

## Recovery status (verified via FnStats.java)
- Final inventory: **5,040 normal (decompilable) functions** + 80 thunks + ~308 imports.
  Corpus = 5,040 C files in `decomp/corpus/` (1 decompile failure).
- `RecoverPtrFuncs.java` created **647** functions at pointer-table targets.
- **484 functions are reachable ONLY via data/pointer-table refs** (no code caller) — these
  would be missing without recovery. (782 normal funcs have no call-ref at all.)
- Recovery is a verified **fixpoint**: re-running (create-from-tables → re-analyze → repeat)
  adds 0 new normal functions; table-callbacks' callees were already found via normal flow.
- NOTE: Ghidra `getFunctionCount()` (~5,428) counts import symbols too; the true
  decompilable-body count is 5,040 (use `FnStats.java`, not getFunctionCount).
