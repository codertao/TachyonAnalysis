# Part animation: `.anm` files (investigated 2026-11-08)

Confidence tags: **[c]** confirmed, **[l]** likely, **[?]** unclear.

## TL;DR
This is not real skinning. A `.pak` model is made of rigid **sub-objects (parts)**, and an `.anm`
file names those parts and gives target rotations for them. The engine sets each part's rotation
right before the model is drawn **[c]**. Only five `.des` files use it:
- `solpatrl.des` / `solptrlf.des`: the (Exile) Star Patrol Enforcer, `ANIMFILE: solpatrl.anm`;
- `gate.des` / `megagate.des`: `ANIMFILE` plus `CENTER_ANIMFILE` and `FLARE_ANIMFILE`.

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
- `Anim_ApplyPose 0x407b50` (static final pose, no blending) is called from the gate's open/closed
  state handlers `0x425ba0/0x425c10/0x425c70`.

## Open
- Exact degree → engine-angle constant (`DAT_0052e540 × DAT_0052e538`); it is probably 2^25 per
  turn, given the `&0x1ffffff` angle wrap.
- `Ship_PreRender` also sets `+0x14` from des `+0xd4` (with random flicker when > 0x20) into
  `DAT_00668f38` (capped at 255). Probably engine-glow intensity **[?]**.
- Whether the MP Enforcer pose bug is visible in practice; it needs an MP test.
