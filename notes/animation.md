# Part animation: `.anm` files (investigated 2026-11-08)

Confidence tags: **[c]** confirmed, **[l]** likely, **[?]** unclear.

## TL;DR
This is not real skinning. A `.pak` model is made of rigid **sub-objects (parts)**, and an `.anm`
file names those parts and gives target rotations for them. The engine sets each part's rotation
right before the model is drawn **[c]**. Only five `.des` files use it:
- `solpatrl.des` / `solptrlf.des`: the (Exile) Star Patrol Enforcer, `ANIMFILE: solpatrl.anm`;
- `gate.des` / `megagate.des`: `ANIMFILE` plus `CENTER_ANIMFILE` and `FLARE_ANIMFILE` (see
  "Gates": a static first-keyframe pose every frame, and timed playback when the gate changes
  state).

## File format (CBIN; see the `.anm.inf` dumps)
```
defines        PART_DEFINE: NAME, partIndex       index = sub-object number in the pak
particle_paks  PARTICLE: NAME, pak, pal           (gates)
sound_labels   SOUND: LABEL, sample
anim_names     ANIM_NAME: NAME                    one per animation
<name>_frame_NN                                   keyframes, NN = 00, 01, ...
  TIME: secs          blend time to reach this frame (0 = snap)
  PAUSE: secs         hold after arriving
  PART_DEST: PART, rx, ry, rz   target rotation in degrees (absolute, from rest)
  SCALE / INTENSITY   used by the gate flare/centre effects
  SOUND: LABEL, delay
<name>_camera_frame_NN   CAMERA_DEST, TIME, PAUSE, flag     (cinematic camera)
<name>_particle_path_NN  particle emitter paths: SRC/DEST_PART, ..._START/_END, VOLUME, LIFETIME
```
`solpatrl.anm`: parts `CENTER 0, UR_ARM 1, LR_ARM 2, UL_ARM 3, LL_ARM 4`.
- `YAW_RIGHT`: UL_ARM yaw −45°, LL_ARM yaw +45°.
- `YAW_LEFT`: UR_ARM yaw −45°, LR_ARM yaw +45°.

Each animation is a single keyframe; parts it doesn't mention stay at rest.

## Loader [c]
`Ship_LoadDes` → `Anim_LoadFile 0x406e80` → des `+0x568`. The gate loaders (`0x425850`,
`0x426570`) also call it.

Structures:
- **anim file** (0x5c):
  - `+4` nAnims, `+8` anims[0x54];
  - `+0xc` nParts (count of PART_DEFINEs), `+0x10` current rotation per part (3×int), `+0x14`
    scratch rotation buffer;
  - playback state at `+0x18..+0x50` (current anim, frame, timers, saved callbacks).
- **anim** (0x54): `+0` name[0x18], `+0x18` nFrames, `+0x1c` keyframes, `+0x20/+0x24` camera
  frames, `+0x4c/+0x50` particle paths.
- **keyframe** (0x2c): `+0` TIME in frames, `+4` nParts, `+8` part entries, `+0xc` PAUSE,
  `+0x1c` SCALE, `+0x20` INTENSITY, `+0x24/+0x28` sound and delay.
- **part entry** (0x1c): `{partIdx, rx, ry, rz, drx, dry, drz}`. The `d*` values are the per-frame
  step, precomputed by `Anim_ComputeDeltas`.

## Two ways an animation is driven

### 1. Pose blending at draw time: the Enforcer [c]
- `ShipReplica_Init 0x463560` copies des `+0x568` into replica `+0xd0` and installs
  **`Ship_PreRender 0x462fd0`** at entity `+0x5c`. The renderer calls that hook with the model's
  part array just before drawing.
- `Ship_PreRender` does nothing if the des has no anim file. Otherwise it reads the replica's
  **smoothed yaw `+0xf8`**:

  | `+0xf8` | action |
  |---|---|
  | > 0 | `Anim_ApplyPoseWeighted(..., "YAW_RIGHT", weight = min(v >> 9, 256))` |
  | < 0 | the same with `"YAW_LEFT"` and `−v` |
  | 0 | zero every part rotation (rest pose) |

  `Anim_SetPoseWeighted` scales each `PART_DEST` by weight/256, and `Anim_CopyPartRotations`
  writes the result into the model's parts (stride 0x2c, rotation at `+4`). Because this runs per
  ship per draw, many Enforcers can share one anim-file object.
- `+0xf8` is updated in `TachCli_ReplicaThink`: `f8 += clamp(+0xac − f8, ±0x800)` per frame. It
  chases `+0xac` at a limited rate, so the arms swing in and out smoothly.
  - **SP:** the replica copies `+0xac` from the server entity, where `+0xac` is the **angular
    velocity** (`flight.md`). So the arms open in proportion to how hard the ship is turning, and
    reach the full ±45° at a yaw rate of `0x20000` per frame **[c]**.
  - **MP:** `Dcb_UpdateFromRecord 0x417b40` writes the snapshot **orientation** byte `<<17` into
    `+0xac`, not a rate. That value is always ≥ 0 and usually ≥ `0x20000`. So in MP remote
    Enforcers probably sit in a full YAW_RIGHT pose and never use YAW_LEFT **[l]**. This looks like
    a bug.

### 2. Timed playback: gates [c]
- `Anim_Play 0x407af0 (ent, animFile, name, ...)` finds the animation, saves the entity's think
  (`+0x68`) and `+0x5c`, and replaces the think with `Anim_Think 0x407890`.
- Every frame `Anim_StepFrame 0x4071d0`:
  - adds the per-frame deltas to the current rotations;
  - when TIME runs out, snaps to `PART_DEST`, holds for PAUSE, then moves to the next keyframe;
  - fires the keyframe's SOUND after its delay ("Playing %s" debug text);
  - also drives SCALE/INTENSITY (`ent+0x1c/+0x2c`).

  Camera keyframes (`Anim_StepCamera`) and particle paths (`Anim_StepParticlePath` →
  `Anim_EmitParticle`) run alongside.
- At the end, `Anim_Finish 0x407060` restores the saved callbacks.
- Exact stepping **[c]**:
  - `Anim_ComputeDeltas` runs at load from a zeroed pose. Each keyframe's per-tick step is
    `(dest − pose after the previous keyframe) / TIME`, and parts it doesn't name keep their value.
  - SCALE and INTENSITY get steps the same way.
  - Per tick, `Anim_StepFrame` either holds (PAUSE counter) or adds the steps. When the frame's
    tick count reaches TIME, it snaps to `PART_DEST` (`Anim_SetPose`), moves to the next keyframe
    and loads its PAUSE.
  - A keyframe therefore takes `max(TIME, 1)` ticks to move, then PAUSE ticks to hold.
  - `Anim_ParseKeyframe 0x4061b0`: TIME, PAUSE and the SOUND delay are `ROUND(secs × 50)` ticks.
    SCALE and INTENSITY are ×65536, with a missing INTENSITY stored as −1 ("don't set").
    `PART_DEST` angles are `deg × 512/360 × 65536` (`0x52e540` = 1.4222f, `0x52e538` = 65536.0),
    the same 16.16 units as `Model_UpdateState`'s part rotations.
  - `Anim_SetPose` also writes the keyframe's SCALE to entity `+0x1c` (instance scale) and
    INTENSITY>>16 to `+0x2c` (instance `+0x14`). A missing SCALE reads as 0, but the gate body's
    instance has no scale flag (0x10), so only the centre and flare (flags 0x90) use it.

## Gates [c]

`gate.des` and `megagate.des` (DESC_TYPE `HYPER_GATE`) each name three models and three anm files.
The client builds them as three linked entities (`FUN_00426700` → `FUN_004260c0` →
`FUN_00425fe0`): gate `+0xd8` → centre, centre `+0xd8` → flare, and `+0xd4` back up the chain.
All three copy the gate's position and orientation.

| model | anm | entity | per-frame hook (`+0x5c`) |
|---|---|---|---|
| `EXTERIOR_PAK` (stargate / megagate) | `ANIMFILE` (`GATE_OPEN`, `GATE_CLOSE`) | instance flags 0 | `FUN_00425ba0` |
| `CENTER_PAK` (gate_way / mgateway) | `CENTER_ANIMFILE` (`GATEWAY_*`) | flags 0x90, scale 1, intensity 255 | `FUN_00425c10` |
| `FLARE_PAK` (gate_flr / mgateflr) | `FLARE_ANIMFILE` (`GATEWAY_*`) | flags 0x90, scale 1, intensity 255 | `FUN_00425c70` |

- **Static pose.** Each hook calls `Anim_ApplyPose 0x407b50`, which clears the rotation buffer and
  applies the named animation's **first keyframe** only (`Anim_SetPose` with anim `+0x1c`).
  - A closed gate (centre `+0xe8` == 0) gets `GATE_OPEN` / `GATEWAY_OPEN`; an open one gets
    `GATE_CLOSE` / `GATEWAY_CLOSE`. Each animation starts from the pose it leaves.
  - The body's three pylon bases (`PYLONBAS_A/B/C` = parts 1–3, `BASE_A/B/C` on the megagate)
    are the same mesh stacked at rest. Every first keyframe turns B and C by +120° and −120° in
    the third angle (about the gate axis), so the pose is what spreads the gate into three
    pylons.
  - **Open:** the arms fold back against the bases. This matches `sgatopen.pak` (no collision
    within 27.8 units of the axis) against `sgatclsd.pak` (3.5).
  - **Closed:** the arms swing in to form a ring around the centre.
  - Centre, open: SCALE 1 (stargate) or 2 (megagate), INTENSITY 255. Closed: SCALE 0.1,
    INTENSITY 0.
  - Flare, open: SCALE 1 or 1.5, INTENSITY 255. Closed: SCALE 0, INTENSITY 0.
- **Flare flicker** (`FUN_00425d10`, from the gate think `FUN_00425e60` and again in hook
  `0x425c70`). While intensity ≠ 0, each tick sets intensity = `128 + (rand & 0x7f)` and adds
  `(rand & 0x3fff) − 0x2000` to the scale (±0.125).
- **Centre think** `FUN_00425d60`:
  - advances the instance's texture counter (`+0x30` = ticks/2, so 25 fps; gate_way's 16 MISTY
    frames use slot 0);
  - draws the gate's destination label on the HUD (`FUN_0042c8d0`): grey if closed, blue / green
    if open, white if it's the targeted gate.
- **Open / closed state:**
  - `Gate_UpdateCollideState 0x426200` reads the game variable at placement `+0x48/+0x4a`
    (`FUN_00436160`; −1 if there's no variable). If the value is < 1 the gate is open: `+0xe8` = 1
    and the collision model is `GATE_OPEN_COLLIDE` (desc `+0x160`). Otherwise it's closed, using
    `GATE_CLOSE_COLLIDE` (`+0x164`).
  - `TrigAct_GateSetInstant` sets `+0xe8` and writes the variable as `state == 0`, so the variable
    reads as "locked".
  - Across all SPX files, 132 of 175 gate placements name a variable.
- **Transition** `FUN_00425850`, from `FUN_00425a80` when the state changes, plays all three
  together. Body `GATE_OPEN` and centre / flare `GATEWAY_OPEN` (or the CLOSE trio) run through
  `Anim_Play` with a 100-tick start delay. Then it swaps the collision model.
  - The stargate's `GATE_OPEN` runs about 16.3 s, including a 6 s PAUSE on its first keyframe that matches the
    centre's and flare's 6 s waits. Its `GATE_CLOSE` runs 12.5 s.
  - The anm's `particle_path`s stream smoke / violet particles from the pylon tips to the centre
    during the transition (see "Particle paths").

## Particle paths [c]

Both gate body anms (`stargate.anm`, `Megagate.anm`) have them. Particle types come from
`particle_paks` (`BLUE_PARTICLE` = `smoke.pak`, `VIOLET_PARTICLE` = `vlt_part.pak`; each is one
quad, additive), loaded into the FX pool by `Anim_LoadParticlePaks 0x405e20`.

**Record** (`Anim_ParseParticlePath 0x4068c0`, 0x9c bytes):

| offset | field | units |
|---|---|---|
| +0x00 | WAIT | ticks |
| +0x04 | LIFETIME | ticks |
| +0x08 | particle model | |
| +0x0c, +0x10 | SRC_PART part, attach index | |
| +0x14..+0x1c | SRC_START (intensity, scale, spread) | 16.16 |
| +0x20 | VOLUME_START | int << 16 |
| +0x24 | PARTICLE_LIFE_START | × 50 × 65536, i.e. 16.16 ticks |
| +0x28..+0x38 | SRC_END / VOLUME_END / LIFE_END | replaced by per-tick steps |
| +0x3c..+0x4c | current src values, volume, life | |
| +0x50, +0x54 | DEST_PART part, attach index | |
| +0x58..+0x60 | DEST_START | 16.16 |
| +0x6c..+0x74 | DEST_END | replaced by steps |
| +0x80..+0x88 | current dest values | |
| +0x94, +0x98 | wait and life countdowns | |

`FUN_00406840` turns each `_END` into a per-tick step, `(end − start) / LIFETIME`.

**Per tick** (`Anim_StepParticlePath 0x407760`, from `FUN_00407820` in `Anim_Think`, after
`Anim_StepFrame` has posed the model):
1. Count down WAIT.
2. Then, for LIFETIME ticks, add the steps.
3. Emit if `rand % 50 <= volume`.

**Emit** (`Anim_EmitParticle 0x407610`):
- The particle is a new entity (DCB pool `0x5b32d8`) with instance flags 0x94: self-lit, scaled,
  and flag 4, which is a whole-instance billboard (`Part_ComputeTransform` skips rotation).
- Life is `n = life >> 16` ticks. Scale `+0x1c` = src scale, and intensity `+0x2c` = src
  intensity, raw 16.16.
- Scale and intensity step towards the dest values over n ticks.
- Positions come from `FUN_00407560`: the part's attach point (the transformed position that the
  loader-patched pointer in the attach record points to; the entity origin if the index is out of
  range) plus the entity position. Each axis adds `rand % spread − spread / 2`.
- The particle moves `(dest − src) / n` per tick.
- Its think, `0x4074f0`, adds the steps and frees the particle after n ticks. Particles outlive
  the animation.

**Intensity** is clamped to 0..255 when shaded (`FUN_004b19f0` → `FUN_004b4c10`). The stored
value is 16.16, so any intensity above 1/256 draws at full brightness. In practice the particles
are always full-bright except at the very start of a path whose source intensity is 0.

**stargate `GATE_OPEN`:**
- 18 paths from `TIP_A..F` (attach 0–2) to `CENTER` during the 6 s wait.
- Two centre bursts at 6 s, with spread 0.1 → 30, scale 6 → 1, and particle life 0.3–0.8 s.

**`GATE_CLOSE`:** similar streams start at 3.4 s, and the bursts come at 8 s.

## Gate sounds [c]
**Keyframe sounds** (`Anim_StepFrame`):
- Reaching a keyframe loads its SOUND label and delay (ticks).
- The delay counts down each tick, pauses included. At zero, the label → sample name goes
  through `sound_labels` and plays via `FUN_00466710` → `FUN_00466440`.
- Reaching the next keyframe overwrites a pending sound, so a delay longer than the keyframe's
  TIME + PAUSE is lost.
- Labels with no `sound_labels` entry are silent (stargate `SPHERE_CONTRACT`, `SPHERE_FLASH`).
- stargate `GATE_OPEN` fires `GATE_OPEN_2` at tick 455 and `GATE_OPEN_3` at 570 and 683.
  `GATE_CLOSE` fires `GATE_CLOSE` at tick 1, and gate_flr `GATEWAY_OPEN` fires `GATE_OPEN_1` at
  tick 1. The Megagate anms have no sounds.
- These one-shots are 2D: volume = 255 − distance/2 (world units), with pan from the bearing.

**Ring loop.** Gate creation calls `FUN_00426700` → `FUN_00466160` → `FUN_00466000`, which
starts a looping 3D sound from the des `[sound]` group. The keys are read through the table at
`0x535ec8`:
- `INNER_RING_SOUND` gives the sample.
- `INNER_FALLOFF a, b` gives max distance = `a << 13` (16.16) and min = `b << 13`, or max/25 if
  b is 0. For the stargate that is 2500 and 43.75 units.
- `INNER_PITCH` is 16.16.
- Volume is 0xff. The loop is culled beyond max.
- The table has no `OUTER_*` keys, so the megagate's `OUTER_RING_SOUND` is never read.

**SPACE.PWF** (PWF2):
- Header (0x1c bytes): +0 header size, "PWF2", sample count (334), trigger count (76), total
  size.
- Then 0x34-byte records: name[0x18], offset, size, volume (0xff00 = full).
- Then 0xc-byte trigger records, then RIFF WAVs: mostly 22,050 Hz 8-bit mono PCM, one MS-ADPCM.

## Open
- (Resolved) degree → engine angle is `× 512/360 × 65536`, i.e. 2^25 per turn.
- `Ship_PreRender` also sets `+0x14` from des `+0xd4` (with random flicker when > 0x20) into
  `DAT_00668f38` (capped at 255). Probably engine-glow intensity **[?]**.
- Whether the MP Enforcer pose bug is visible in practice; it needs an MP test.
