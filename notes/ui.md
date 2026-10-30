# Front-end menu / UI system

The front end is **data-driven from `space.mnu`** (a CBIN; see `formats.md`). `space.mnu`
defines all windows, buttons, and text widgets; code references them by name.

## `space.mnu` schema (CBIN groups)
```
windows:
  WND: <name>, <type>, <x>, <y>, <bgImage>, <font>
buttons:
  BUTTON: <window>, <image>, <name>, <?>, <x>, <y>, <textLabel>, <font>, <flags>, <clickCb>, <inHoverCb>, <outHoverCb>, <soundEvent>
```
e.g. `BUTTON: WndMainTitle, ImageMainBtn1, BtnLogin, 0, 278, 180, MAIN_LOGIN, SHADOW12w, 4194816, cbLogin, cbInHover, cbOutHover, SNDEVNT_PLAY_GAME`

## Runtime model — `g_UiManager` (0x5a3700)
Holds the parsed defs as three arrays (addresses are 1:1 with the project):
| field | array | stride | count field |
|---|---|---|---|
| +0x0c | window defs | 0x114 | +0x40 |
| +0x14 | text defs | 0x130 | +0x48 |
| +0x18 | button defs | 0x23c | +0x4c |

Key ops:
- `Ui_FindWindowDef (0x43ab80)` — generic name-search over window defs (`FUN_004bd3c6(name, base, count, stride, cmp)`).
- `Ui_ShowWindow (0x43ae60)` — activate a window: walk button-defs + text-defs and add each whose
  owning-window name matches (`Ui_AddButtonToWindow 0x43cc00` / `Ui_AddTextToWindow 0x43f870`).
- `Ui_SetButtonFlag (0x43ce00)` — find button by name, OR a state flag into `button+0x204`
  (TitleMenu uses `0x40000`; `0xfffff000`-style values reposition).
- Button runtime struct: `+0x80` window-name, `+0xc8` image/frame count, `+0xcc` frame size,
  `+0x1e8` bound-window ptr, `+0x204` state flags.

## Callback registry (0x5414c0) — how names become function pointers
Array of fixed **0x48-byte** entries: `{ void* func; int32 flag; char name[0x40] }`, names stored
**inline** (so nothing in the image points at the name strings; lookup is by `strcmp`).
Button defs name their callbacks as strings (`cbLogin`, `cbInHover`, …); the UI resolves them
against this table. Confirmed entries:
| name | handler | action |
|---|---|---|
| `cbLogin` | `cb_MainLogin` 0x445670 | load `playrtmp.sav`; `g_NextMode=g_Mode_Login(0x5482b0)`; exit title |
| `cbMulti` | `cb_MainMultiplayer` 0x445610 | `g_NextMode=g_Mode_Multiplayer(0x541170)`; `g_MpModeFlag=1`; exit |
| `cbCredits` | `cb_MainCredits` 0x445630 | `g_NextMode=g_Mode_Credits(0x547940)`; `g_MpModeFlag=0`; exit |
| `cbExit`(?) | `cb_HoverCursor` 0x4456a0 | adjust `g_TitleHoverState`, swap Cursor1/Cursor2 — behaves like a hover handler; name/func pairing needs a second look |

## How a click drives a screen change
1. Title mode is active; `TitleMenu_Update (0x4450b0)` pumps input and ticks the UI each frame.
2. A button click looks up its `clickCb` name in `g_UiCallbackRegistry` and calls the handler.
3. The handler sets `g_NextMode` (→ a mode object) and `g_TitleMenu_ExitFlag = 1`.
4. `TitleMenu_Update` sees the exit flag, returns "leave"; `StateMachine_Run (0x44ec80)` advances
   to `g_NextMode`. (Same `{enter,update,render,exit}` mode-object pattern as the title screen.)

## Open threads
- The `space.mnu` → `g_UiManager` parser (which `Cbin_*` consumer fills the three arrays).
- `cbExit`/0x4456a0 pairing (likely an off-by-one in the registry read vs hover entries).
- Hover/click wiring inside `Ui_Update`/button hit-testing (USER32 mouse messages → callbacks).
- Chained screens: `g_Mode_Login` (0x5482b0), `g_Mode_Multiplayer` (0x541170), credits (0x547940).
