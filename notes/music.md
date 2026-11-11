# Music [c]

## TL;DR
- The in-flight music is **`Ttfmusic.sbf`**, which sits in the game folder (it is not in
  `Tachyon.pff`). It holds 451 named segments: short IMA ADPCM clips (2–7 s, 22,050 Hz stereo).
- The segments are sequenced by **`TTFMUSIC.BIN`** (in the PFF), a compiled script (`SCR0`)
  run on a small stack VM.
- Each time a segment ends, the script picks the next one. Script states are themes (intro,
  loop bars, transitions, ending).
- Game variables choose the theme: sector, current job, job status, hostiles, shields and
  dialog.
- `load_sbf_and_bin 0x450770 ("ttfmusic", "ttf_music")` is called at client startup
  (`CliOn_StartupComplete`) and by `Scene_Finish`.

## Ttfmusic.sbf (`SBF0`)
```
+0x00 "SBF0"  +0x04 u32 0x100  +0x08 u32 0x11  +0x0c 0  +0x10 u32 0x18 (dir offset)  +0x14 u32 count
+0x18 count x 0x20: name[16], u32 offset, u32 size, u32 0x1000 (read size), u32 0
```
- The other `.sbf` files (`Gameanim`, `Menubgs`, `Solanims`) share this directory layout but
  hold other media.
- **Audio:** headerless MS-IMA ADPCM, stereo, 1024-byte blocks.
  - Each block starts with 4 bytes per channel: i16 sample, u8 step index, 0.
  - Then 8-byte groups: 4 bytes for channel 0, then 4 for channel 1, low nibble first.
  - That gives 1017 frames per block. The decoder state is reset in `FUN_004cc601` (block
    0x400).
  - Every block header continues the previous block's last sample, which confirms the format.
  - Rate 22,050 Hz, the mixer's rate everywhere (`0x5622`).
- **Streaming (`Music_StreamTick 0x4b53b0`):**
  - 4 KB reads go into a 16 × 16 KB ring.
  - Segments play back to back, so the music is gapless.
  - The volume steps from the current value towards the `GSDV` target over the segment's reads.

## TTFMUSIC.BIN (`SCR0`)
**Header** (`load_bin_scr_file 0x4b57e0` relocates it):

| Offset | Field |
|---|---|
| +0x08 | script count |
| +0x0c | → table of script offsets |
| +0x10 | import count |
| +0x14 | → imports (length-prefixed names) |
| +0x18 | → resolved import pointers |

**Per script** (`MU01`, e.g. `ttf_music`):

| Offset | Field |
|---|---|
| +0x08 | name[16] |
| +0x18 | global bytes (0x5c) |
| +0x1c | local bytes (0xc) |
| +0x20 | code |
| +0x24 | state table |
| +0x28 | state count (57) |
| +0x2c | start state |
| +0x30 | constants |
| +0x3c | argument offset in locals |
| +0x40 | event entry |

All the offsets are relative to the script.

**Memory:** globals start with the game's variable slots (`Music_SetVar 0x4b5670` writes
`slot*4`). The script's own variables follow from byte 0x40.

**Natives** (table 0x55ed28, 0x24-byte records `name[0x20], fn`):
- `GEcho`, `GGRnd` (random in [lo, hi]), `GSV` (volume now), `GSDV` (target volume);
- `FSet`, `FClear`, `FIsSet`, `FIsClear` (bit flags);
- the script also imports `TStart` and `TStop`, which are not in the table, so they push 0.

Natives read the stack in place and their arguments stay pushed.

**VM** (`MusScr_Interp 0x4b5c10`, opcode table 0x55ee5c, 65 entries):
- Registers: ESI is the instruction pointer, EBP the data stack, EDI the call stack.
- Each pass runs up to 32 ops, then continues while the data stack is non-empty.
- An op that sets CF ends the pass: `ret`, `yield`, `goto`, `play`, `restart`.

**Opcodes:**

| Op | Meaning |
|---|---|
| 1 / 2 | push u8 / u32 |
| 3 / 4 | push global / local (byte offset) |
| 5 / 6 | push address of global / local (2-byte operand) |
| 7 | push constant |
| 8 / 9 | pop to global / local |
| 10 / 11 | memcpy to global / local |
| 12 | push the VM object |
| 15 | clear stack |
| 16–25 | add sub mul div mod and or and or xor |
| 26 / 27 | neg / not |
| 28 / 29 | shl / sar |
| 30 | logical not |
| 32–37 | eq ne ge le gt lt (−1 / 0) |
| 40–43 | byte inc / dec of global / local |
| 48 | jmp (code-relative u32) |
| 49 / 50 | jz / jnz |
| 51 | system call (table 0x669400) |
| 52 | call |
| 53 | switch (`[n][?][entry size][total]`, then n one-op entries) |
| 56 | args → locals |
| 57 | ret |
| 58 | yield (wait for the segment to end) |
| 59 | goto state (u8) |
| 61 / 62 | play segment (u16 / u8) and yield |
| 63 | goto start state |
| 64 | native call (pushes the result) |

The rest are nops.

**Variables** (`Music_UpdateFlightVars 0x415060`, in flight; menus set slot 0 to a theme
number via `FUN_00468fb0`):

| Slot | Value |
|---|---|
| 0 | number of hostiles |
| 2 | job status |
| 3 | shields (0 ok, 1 low, 2 critical) |
| 4 | a context value >> 16 |
| 5 | dialog timer |
| 6 | region × 1000 + sector (regions as `vars.cfg` `region_names`: EARTH 0, NEUTRAL 1, GALSPAN 2, BORA 3, FRONTIER 4, MYSTERY 5, DISPUTED 6, GDISPUTE 7, BDISPUTE 8) |
| 7 | CURRENT_JOB (job ids such as 2008, 4004) |

Slot 1 is only set by dialog lines that carry a music slot and value (`FUN_0041e850`,
line +0x34 / +0x38).

**Dispatch:** state 1 dispatches on sector + job + job status + hostiles.
- With no job, nearly every sector falls through to state 44, the generic `wharmp1..3` filler.
- So free flight mostly hears the filler, and the themed music is tied to story jobs and
  sectors.

**Themes** (start state → segments; from the emulator in the viewer, `src/music.rs`):
- 4, 5–8, 11, 43: `f1i*` / `f1b*` (the "f1" score; 43 starts with `JakeSet`).
- 9, 10, 12, 13: `FM1*` (Cda / EL / mUS).
- 14, 15: `ipiano`. 16, 18: `HajBed`. 17: `Hajod`. 19: `tymp`.
- 24–27: `BnD`. 28, 29, 35, 36, 53: `LTSyn`. 30, 32: `LTIntro` → `LTSnD` → `spcstr`.
  31, 34, 55: `LTBrND`. 33, 52: `spcstr`.
- 46: `MQin` / `MQLoop`. 47, 48: `TB1_`. 49: `TB2`. 50, 51: `DrumNT` / `Drum`.
- Stingers that end back at the dispatcher (they set state 56, then 1): 21 `SPIntr`,
  37 `BorVic`, 38 `BoraCS`, 39 `BoraCV`, 40 `BorSet`, 41 `gsin`, 42 `LTStrngs`.

## The script's logic
**Decompiled listing:** [`ttfmusic_decompiled.py`](ttfmusic_decompiled.py) is the whole script
as Python-like pseudocode. It's generated by `TachyonFileFormats/src/musscr.py` (`musscr.py
TTFMUSIC.BIN --sbf Ttfmusic.sbf --vars vars.cfg.inf`) and names segments, jobs, statuses and
sectors. The structure comes out as if / while / match with no leftover jumps.

**Runtime model:**
- `play()` and `wait()` end a run; the next run resumes after them when the segment ends.
- `goto(state)` ends the run, and the next run starts at that state's top.

**State 0, init:** zeroes the script's variables, then goes to state 1.

**State 1, the dispatcher:** one long chain over `sector`, and inside each sector over `job`,
`job_status`, `hostiles` and `dialog_cue`.
- Each case picks a theme state, so music is authored per mission and per sector. For
  example, in EARTH 2 on MISSION_2, NOT_ATTEMPTED plays state 47 (TB1) and SUCCESS plays
  state 12 (FM1EL).
- With no job match it falls to **state 44**, which plays one bar of the generic `wharmp1..3`.
  **State 45** then checks a few job cues and returns to state 1, so free flight re-runs the
  dispatcher after every filler bar.

**Themes** (states 4–19, 24–36, 46–53):
- **Set-up:** each sets its volume (`set_volume`, often 170–255) and `theme` (a number that
  state 3 uses to resume it).
- **Each bar:** plays `segment[bar]` and advances `bar`. Intros run once; loops wrap `bar`
  back to their loop start.
- **Between bars:** they check:
  - `sector != theme_sector` → **state 20** (reset everything, back to the dispatcher);
  - hostiles appearing or leaving → the combat states;
  - story cues → stingers or other themes.

**Combat:**
- **State 2** tracks `peak_hostiles`. The first hostiles switch to **state 11** (the `f1i1e*`
  battle bars).
- When the fight ends:
  - with `after_combat` unset: a big fight (peak > 6, under 2 left) goes to **state 9**
    (`FM1Cda`); any fight ending with none left goes to **state 10** (`FM1EL`);
  - with `after_combat` set (1..5), it picks the follow-up: 13, 12, 9, 10 or 4.
- **State 3** checks story cues per job, then:
  - if `slot4 > 3500` with hostiles around, it re-enters combat (state 11);
  - otherwise it resumes the current `theme` by number.

**Story cues:**
- **`story_cue`** (slot 15) = `k * 10000 + job id`, set by dialog lines. It marks scripted
  moments: `CUE(1, BC10)` → state 41 (`gsin`), `CUE(1, B05)` → state 39 (`BoraCV`), and so on.
- **`dialog_cue`** (slot 1) holds a job id.
- **State 56:** stingers (37–42, 21) end there. It waits until the sector or cue changes, then
  clears `stinger_played` and returns to the dispatcher.

**Other variables:**
- **`shields`** matters in two places:
  - the `f1i2` intro (state 5) cuts to the combat dispatcher when shields aren't OK;
  - during BC09, shield damage switches to state 5.
- **`dialog_timer`** is never read, so ducking for dialog must happen elsewhere.
- **`slot4 > 3500`** with hostiles present (re-)enters combat music from several themes.

## Open
- Slot 4's source (`FUN_0048b1b0(ctx, 2)`). The script only tests `> 3500` with hostiles
  present, to (re-)enter combat music, so it may be a threat or proximity measure.
- Whether the menus use the same script with slot 0 as the theme.

## Software mixer (`Snd_MixBlock 0x4cc708`)
All game audio is mixed in software to 16-bit stereo at 22,050 Hz, then handed to either
DirectSound (`Snd_DSoundFill 0x4a8a20`: lock the ring buffer between the last and current play
position) or `waveOut` (`Snd_WaveOutDone 0x4a9600`: three buffers rotated on `MM_WOM_DONE`).

- **24 sample voices** (`g_SndVoices 0x4c9402`, 0x40 each), unsigned 8-bit samples, plus **one
  streamed channel** fed from a 16-entry buffer queue (`0x4cac1a`, 0x40 each; falls back to a
  silence buffer when the queue runs dry).
- **Self-modifying inner loop.** The loop is unrolled once per voice. Each voice's pitch step
  (`add eax, imm32`) and sample pointer (`mov bl, [eax+disp32]`) are immediates patched into the
  code, so the hot path does no memory lookups for voice state. The position is 22.10 fixed and
  counts up from −length; the carry out of the `add` is the end-of-sample test (placeholders
  `0x12345678` / `0xfedcba98` in the file).
- **Volume without `imul`.** Each voice's left/right volume is a tiny float: a 5-bit mantissa picks one
  of 32 eight-byte x86 snippets (`g_SndVolSnippets 0x4dfdd0`, `eax = ebx*k` using `lea`/`shl`/`sub`)
  and an exponent picks a patched `shl`/`sar eax,n` (`0x4cb230`, shift per level `0x4cb370`).
  `Snd_MixPrepare 0x4ce9f3` patches these in once per call. The streamed channel uses a plain `imul`.
- **Pitch ramping.** Each call is mixed in 4 sub-blocks; between them each voice's step moves a
  quarter of the way to its target (`+0x34`), which gives glides without clicks (engine pitch).
- **End of sample.** Copy in the voice's queued/loop record (`0x4ca002`, 0x3c each), optionally
  call an end callback, and optionally add a random start offset of 0–255 samples (rotating hash
  `0x4cb478`). The offset stops several copies of the same loop from phasing.
- **Output.** `L/R = sum + previous/4` (a light one-pole smoothing), then the post-mix effect hook,
  then a clamp to ±0x7fff.
- **Post-mix effect** (`Snd_SetEffect 0x4cec37`, modes 0–3, level 0–3 patched as shift counts, 64 KB
  delay buffers): mode 0 off; mode 1 `SndFx_CrossDelay 0x4decd5` is two delay lines, each fed by the
  opposite channel with ×¼ feedback (stereo echo/reverb); modes 2–3 at `0x4ded28` / `0x4ded7b` not yet read.
