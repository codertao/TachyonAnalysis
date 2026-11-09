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
    during the transition.

## Open
- (Resolved) degree → engine angle is `× 512/360 × 65536`, i.e. 2^25 per turn.
- `Ship_PreRender` also sets `+0x14` from des `+0xd4` (with random flicker when > 0x20) into
  `DAT_00668f38` (capped at 255). Probably engine-glow intensity **[?]**.
- Whether the MP Enforcer pose bug is visible in practice; it needs an MP test.
