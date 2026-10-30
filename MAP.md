# Tachyon: The Fringe — architecture map

Target: `GoG/space.exe` (sha256 `ee7f119e…`, ImageBase `0x400000`, PE32 x86).
Authoritative project: `decomp/ghidra_proj` (Ghidra 12.1.4). Corpus: `decomp/corpus/`.
Naming source of truth: `decomp/sidecar/names.tsv`.

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
