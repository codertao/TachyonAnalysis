# Player profiles & login / profile-select

Reached from the title screen: `cb_MainLogin` → `g_Mode_Login` (mode object `0x5482b0`).

## Login mode (`0x5482b0`)
- `Login_Enter (0x44e970)`: shows a splash (`splash.pcx` / `WndSplash`) with a ~3000-frame
  timeout; input or timeout → `Login_DismissSplash (0x44e8e0)` which brings up `WndLogin`
  (the 10-slot profile list). update/render/exit = `0x44ea10/0x44ea60/0x445720`.
- `WndLogin` has buttons `BtnLoginSel0..9` (callbacks `cbLoginSlot0..9`) plus Play/Copy/
  Paste/Delete/Back (`cbLoginPlay/Copy/Paste/Delete/Exit`).

## Profile slot table — `g_ProfileSlots` (0x5a3980)
**10 slots × 0x8c bytes** (loop bound `0x5a3ef8`). Known field: **`slot+0x10` = display name**
(a `\0` first byte marks a free slot). Each slot also persists as `player%02d.sav`.

"Current profile" globals:
| global | meaning |
|---|---|
| `g_CurrentProfile` 0x5a6660 | 0xB8-byte working copy (= the .sav blob) |
| `g_CurrentSavPath` 0x5a6680 | `player%02d.sav` for the selected slot |
| `g_CurrentCfgPath` 0x5a6690 | `player%02d.cfg` for the selected slot |
| `g_CurrentProfileSlot` 0x5a66a0 | selected index, -1 = none |

## Operations
- `Login_SelectSlot(n) 0x444760` (cbLoginSlotN): `Profile_Select(n)`, create-new if the slot
  is empty, then refresh `WndLogin`.
- `Profile_Select(n) 0x444690`: `File_ReadAll` the slot into `g_CurrentProfile`, copy name,
  `sprintf` the `.sav`/`.cfg` paths, set `g_CurrentProfileSlot`.
- `Profile_Delete(n) 0x4447c0`: clear the slot name, `File_Delete` its `.sav` and `.cfg`.
- `Profile_SaveAll 0x443e40`: for each slot, `File_WriteAll` the 0xB8 blob to `.sav`, or delete
  if the name is empty.

## File formats

### `player%02d.sav` = a CBIN **variable store** (NOT a flat struct)
Earlier guess ("0xB8 blob") was wrong: the save is a **section → key → typed-value database**
in CBIN form. `Profile_StartGame (0x444520)` loads it via `VarStore_Load (0x490040)` — defaults
come from `vars.cfg`, then the player's `.sav` is overlaid (`VarStore_OverlayFile`), giving a
handle `g_PlayerVarStore (0x5635c8)`. Access API: `Var_GetInt (0x48fd20)`, `Var_SetInt (0x48fba0)`,
`Var_SetStr (0x48fc40)` → `Var_FindSection (0x48f6e0)` + `Var_FindKey (0x48fab0)`; persist with
`VarStore_Save (0x48f9f0)`. (The 0xB8 `g_CurrentProfile` buffer is just the slot summary/header.)

Sections and keys observed at call sites:
| section | keys |
|---|---|
| `PLAYER_MAIN_VARS` (84 sites) | CREDITS, CURRENT_SHIP, CURRENT_WINGMAN, CURRENT_JOB, CAMPAIGN_MISSION, CURRENT_REGION, CURRENT_SECTOR, CURRENT_COURSE, DESTINATION_REGION, DESTINATION_SECTOR, JOB_COMPLETED, JOB_REGION, OVERRIDE_REGION, OVERRIDE_SECTOR, PLAYER_SIDE, STARBASE, WINGMAN_IS_BENCHED, PLAYER_GOT_LUCKY, INTRO_HAS_PLAYED |
| `PLAYER_SHIP_DATA` | WEAP_A, WEAP_A_LINKED, WEAP_B, WEAP_B_LINKED, WEAP_DOUBLEFIRE, LASER_RECHARGE_RATE, SHIELD_RECHARGE_RATE, BURNER_RECHARGE_RATE |
| `PLAYER_SHIPS` | per-ship availability (e.g. `MAKO_AVAIL`) |
| `PLAYER_MOUNTED_HARDWARE` | equipped hardware (computed keys) |
| `PLAYER_CARGO_HOLDS` | cargo (computed keys) |
| `WINGMEN_STATUS_VARS`, `SHIP_COURSE_NUMS`, `PLAYER_SUPER_KEYS`, `EARTH_REGION`(LOAD_INTRO) | misc campaign state |

### `player%02d.cfg` = a **plain-text INI** of control bindings. `PlayerCfg_Save (0x482120)`
  chooses the path (per-player vs default by `g_MpModeFlag`) and calls
  `PlayerCfg_WriteActions (0x42e920)`: `fopen(path,"wt+")`, write an `[ACTIONS]` section with
  `ACTION_<name> = <key> - <mod> - <joy> - <mouse> - …` lines, mapping numeric input codes back
  to names via the `key_press` / `mod_keys` / `joy_butt` / `mouse_butt` lookup tables, then close.
  (A reader counterpart parses these back into bindings — TODO.)

## Generic file I/O layer (VFS — loose file or `Tachyon.pff`)
`File_Exists 0x4a0dd0` · `File_Delete 0x4a0dc0` · `File_ReadAll 0x4a1030` (returns size) ·
`File_WriteAll 0x4a1170`. `str_sprintf = 0x4bc160`. The same family (`FUN_004a1240`/`FUN_004a1780`)
backs `Cbin_LoadFile`, so profiles and CBIN configs go through one file abstraction.

## Open threads
- The `player.cfg` **reader** (parse `[ACTIONS]` → live bindings).
- The 0xB8 `.sav` struct field layout (callsign, stats, current ship/loadout, campaign progress).
- `cbLoginPlay` → how a selected profile launches into the game (campaign vs `playrtmp.sav`).
