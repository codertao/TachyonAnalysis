# Flight / combat & the SPED world (in progress)

## What we were looking for
How you get from the campaign vars (`CURRENT_JOB`, `DESTINATION_REGION/SECTOR`) into the actual
flyable sector, and where the "flight/combat gameplay mode" lives.

## Mode-machine finding (important)
The front end **and the starbase** are one `{enter,update,render,exit}` mode machine:
- Top level runs `g_NextMode (0x590e28)`; the starbase's current screen is `g_StarbaseScreen
  (0x563640)`, which is copied into `g_NextMode` to run (`g_NextMode = DAT_00563640`, 20 sites).
- **Every** such mode object inspected is a UI screen (title, login/splash, credits, multiplayer,
  and ~20 starbase screens: hub `0x54b0b8`, shipyard `0x557a30`, config, jobs, nav map, …). Some
  render 3D scenes (the hangar/shipyard is a real 3D view with lights/camera), but they are UI modes.

So the **in-flight combat is NOT one of these UI mode objects.** It's the real-time simulation of
the 3D world — the **SPED** entity system — not a front-end screen. That's why walking the mode
tables only ever lands on menus/starbase.

## Launch flow (starbase → space)
`BtnLogin → Login/splash → starbase hub (0x54b0b8)`. Starbase buttons (`cbCFGLaunch 0x473f50`,
`cbSPLaunch 0x471120`, shipyard/`cbSYLaunch`) navigate starbase screens, funnelling to the
**shipyard/hangar** (`g_Mode_StarbaseShipyard 0x557a30`, enter `Shipyard_Enter 0x485b00`). From
there you **undock**: a random `DOCK_SCENE`/`UNDOCK_SCENE` `.SEN` cutscene is chosen
(`Dock_PickRandomScene 0x40be50`), logged as "UNDOCKING FROM PLATFORM … SPED ID = %d", and control
passes to the in-space sim. (The exact undock→sim handoff + sim loop is the open piece.)

## SPED = the space-entity system (the gameplay world)
"SPED" is the engine's term for a space object/entity (ship, station, gate, asteroid, cargo…).
Evidence: "CANNOT FIND SECTOR DATA FOR SPED OBJECT %d", "Spawning alias \"%s\" [SPED_OBJ %d] from
gate", "SPED OBJECT %d ALREADY SPAWNED", `SPED ID`, `GET_SPEDDATA`, `SPEDNAMES`.
- **Sector files** `<region><NN>.SPX` (binary, magic `SPD\x01`) = the per-sector list of SPEDs +
  layout; they cross-reference sub-stage `.spx` (`fron11A..K`) and `.SEN` scenes. The exe has no
  `.spx`/`SPD` literal, so sector filenames come from data (galaxy index), loaded via the file layer.
- **SPED name registry** `Sped_LoadNameRegistry (0x434fb0)`: a CBIN with `SPEDNAMES`/`DES_NAMES`
  groups → builds an alias→`.des`-model table (`DAT_005a5e04`, 8-byte entries {alias, desName}).
- SPEDs reference composite models: `.OCF` (multi-part) / `.des` (mesh). Placement/hardpoints via
  `Object_ParseHardpoints (0x462e60)` (`CONNECT`: LAND/SPAWN/DOCK/PICKUP/ENGINE points).
- Sector/placement keys seen: `GROUP`, `SHIP_TYPE`, `OBJECT_CLASS`, `GROUP_CLASS_ID`, `SPAWN_POINT`,
  `GATE_*`/`NAV_GATE_*`, `ASTEROID`, `NEBULA`. Runtime mission state in `g_GameVarStore (0x571900)`
  / `MISSION_VARS`.

## SPED entity system (the in-flight world — confirmed)
SPEDs are **OO entities with per-class vtables**, managed on the world/sector object:
- **World object** holds a SPED manager at `+0x3c` → two lists (`+4` active, `+8` template/pending);
  `Sped_FindDef (0x436320)` / `Sped_FindInList (0x4362e0)` look up by id.
- **Spawn**: `Sped_Spawn (0x436680)` looks up the def, checks spawned-flag `+0x2c`, fetches the SPED's
  **class object** (class table indexed by `defclass*0x24`), and calls its **create method at
  `vtable+0x3c`**, then fires spawn events (`FUN_0048ddc0` event queue). Variants:
  `Sped_SpawnByClass (0x4367b0)` resolves a position/orientation first (transform vtable `+0x30`, or
  default fields `+0x34..0x54`); `Sped_ProcessSpawnQueue (0x4368f0)` does timed/deferred spawns
  (reinforcement waves); `Gate_SpawnSped (0x402170)` spawns on gate transit.
- **Actions/AI scripting**: `Sped_DispatchAction (0x436c00)` resolves a SPED by id and runs a **named
  action** on it ("OBJECT %d ACTION %s PARAM %x" / "SPED_OBJ %d not found"). Commands are matched by
  name (string-dispatched table — e.g. `GET_SPEDDATA`, `SPEDNAMES` have no direct code xref), so the
  mission/trigger system drives entities via named SPED commands.
- **Models**: SPED alias → `.des`/`.OCF` model via `Sped_LoadNameRegistry (0x434fb0)`.

This SPED entity+command engine **is** the in-flight gameplay (ships/stations/gates/asteroids as
SPED objects, spawned from sector data, driven by named actions). It is data-driven, not a UI mode.

## Per-frame loop mechanism (confirmed)
`StateMachine_Run (0x44ec80)` runs the active mode: enter `(*mode[0])`, then the loop, then exit
`(*mode[3])`. `ModeLoop_FixedStep50Hz (0x44ead0)` is a fixed **50 Hz** accumulator (`+0x14` ms):
each step calls `MessagePump_IdleTick()` then **`(*mode[1])()` = update**; after stepping it calls
**`(*mode[2])()` = render** (gated on `DAT_00603964`/`DAT_00603968`). `ModeLoop_Variable (0x44ec10)`
is the uncapped variant (mode byte `+0x10` selects which). So **the per-frame update/physics IS the
active mode's `update` (mode+4), ticked 50×/s** — flight physics runs there when the flight mode is active.

## Object factory
`Desc_CreateByType (0x41dca0)`: reads `DESC_TYPE` from a `.des` CBIN and `switch`-dispatches to a
typed constructor (cases 1..10+ → ship / projectile / station / etc.). This is the `.des`→entity
factory feeding the SPED world.

## Recovery coverage (corrected)
A second-stage pass promoting **all direct CALL targets** to functions (`RecoverCallTargets.java`)
added **0** — direct-call reachability is already complete, so the corpus is NOT systematically
missing flight code. The `joyGetPosEx` call sitting at `0x45722a` "not in a procedure" is a small
gap (a split function tail / indirect-only target), not a systemic hole. `Input_PollJoystick
(0x4a2520)` is the joystick wrapper; it's reached via the input-device abstraction (`0x4a1ef0`/
`0x4a29c0`), not a direct flight-mode call.

## .SPX / SPD sector format (the environment file)
`<region><NN>.SPX` (e.g. `BORA05.SPX`, 2044 bytes) — binary, magic `SPD\x01` at **offset +4**
(the exe never checks it; loaded by name from galaxy data via the file layer). Header is a
**section directory** of 32-bit fields (triples ~ {count/size, offset, …}) starting at +8, then a
quad name (`QUAD_05`) at +0x34, then sections. From the data, a sector contains:
- quad/sector name, **BDF backdrop** (`BORA5.BDF`), player start (`PLAYER.SCR`)
- **SPED entity instances** by alias (`Bora_Indep_Research_Facility`, `Hyper_Gate`,
  `NEW_DAWN_STATION`, `Spcargo_Medical`, `Bora_Shuttle_Medium` …) — each resolves to a `.des`
  model + a `DESC_TYPE` class (below)
- **sub-sector `.spx`** stages (`bora05A.spx`, `bora05B.spx`) and **adjacent-sector** links
  (`bora01.spx`), faction groups (`FG_BORA5`), content/text refs (`CONT_###`)

In memory, a parsed SPED def exposes an instance array: `def+0x8c` = count, `def+0x90` = records
(stride `0x14`), each with a sub-array (stride `0x20`), read via `Sector_GetSpedRecord (0x401730)`.
The low `0x40xxxx` region is the **entity motion/physics core** — e.g. `Entity_TurnToward
(0x403270)` steers an entity's orientation toward a target each frame (clamped) = the flight
turn step run under the 50 Hz mode update. (The raw SPD byte-parser function isn't pinned yet;
format is reversed from the file + the parsed-struct accessors.)

## .des DESC_TYPE entity classes (the object factory — confirmed)
`Desc_CreateByType (0x41dca0)` reads `DESC_TYPE` from a `.des` CBIN, resolves it via
`Desc_ResolveTypeName (0x41daa0)` against `g_DescTypeTable (0x535130)`, and dispatches to a
per-class constructor. Full roster:

| code | DESC_TYPE | constructor |
|---|---|---|
| 1 | SHIP | Ent_CreateShip 0x4656e0 |
| 2 | ASTEROID | Ent_CreateAsteroid 0x408170 |
| 3 | CAPITOL_SHIP | Ent_CreateCapitalShip 0x413700 |
| 4 | HYPER_GATE | Ent_CreateHyperGate 0x426dd0 |
| 5 | STARBASE | Ent_CreateStarbase 0x40c1f0 |
| 6 | MINE | Ent_CreateMine 0x4341e0 |
| 7 | CARGO | Ent_CreateCargo 0x414260 |
| 8 | BEACON | Ent_CreateBeacon 0x40ea20 |
| 9 | SPEED_RING | Ent_CreateSpeedRing 0x458a60 |
| 0xa | (unnamed) | Ent_CreateType0a 0x4939a0 |
| 0xb | COURSE | Ent_CreateCourse 0x41b570 |
| 0xc | MISC_OBJECT | Ent_CreateMiscObject 0x414e20 |
| 0xd | POWERUP | Ent_CreatePowerup 0x456fc0 |

So every object in space is a `.des` whose `DESC_TYPE` selects its entity class/behavior; the sector
`.SPX` lists which SPEDs (by alias → `.des`) populate the sector and where.

## RUNTIME CONFIRMATION (gdb attached to the game under Wine)
Attached gdb to the live GoG `space.exe` under Wine (mapped at 0x400000, slide 0). Breakpointed the
per-frame update dispatch at **`0x44eb2a`** (`call *0x4(%edi)` inside `ModeLoop_FixedStep50Hz`), where
`EDI` = the active mode object.
- At the **main menu**: `EDI = 0x544408` (g_Mode_TitleMenu) — static map validated live.
- While **flying in space**: `EDI = 0x533a70`, stable across frames. So **the in-flight gameplay
  mode is `g_Mode_InFlight (0x533a70)`** — the object I had statically mislabeled `g_Mode_ServerStub`.
  Its callbacks: enter `Flight_Enter 0x40ebd0`, **update `Flight_Update 0x40ebf0`** (the per-frame
  flight sim — what we'd been hunting), render `Flight_Render 0x40ec00`, exit `Flight_Exit 0x40ec10`.
- `g_GameVarStore (0x571900)` held a live heap pointer in flight (mission/session store is active).
- Correction to the earlier "flight is not a mode object" note: it **is** a `{enter,update,render,
  exit}` mode object (`0x533a70`), just not a front-end/UI one — its update drives the SPED world.

Technique (repeatable): `set ptrace_scope=0`; close REA Ghidra (`close_binary`) before gdb;
`attach <pid>`; `break *0x44eb2a`; `continue`; `p/x $edi` = active mode; `x/5xw $edi` = its callbacks.

## Flight_Update internals (static, after runtime pinned the mode)
`Flight_Update (0x40ebf0)` = `Flight_Update_Phase1 (0x4622a0)` + `Flight_UpdateWorld (0x418220)`.
- `Flight_Update_Phase1`: if `!g_CutsceneActive` tick UI; bump frame counter; if `g_MissionEndFlag`
  set `g_NextMode = g_ReturnMode (0x590e2c)` and return 1 (leave flight).
- `Flight_UpdateWorld`: evaluates mission-end conditions (sets `g_MissionEndFlag (0x5a6500)` +
  `g_MissionEndReason (0x5a6508)` = 9/3/… from timers/flags), ticks the world/entities, and gates
  the **player input / control / HUD** block (`FUN_0041da00`/`00468320`/`00425720`/`00415060`/
  `0045bfa0`) on **`!g_CutsceneActive (0x5a6504)`**. So a cutscene = same mode, `g_CutsceneActive`
  set, world+camera keep running but the player can't act — matching the gdb observation. Leaving
  flight writes `memstats.txt` and returns 1.
- `Flight_Enter (0x40ebd0)`: `FUN_004b8880(3)`, `FUN_00462af0()` (scene setup), `FUN_00418550()`.

## Open threads (next session)
- **Sim entry + loop**: trace the undock handoff into the in-space sim; find the per-frame
  ship-physics/world-tick (the real "flight mode"). Good anchors: the SPED spawner
  ("Spawning alias … from gate" @0x5325ec) and the sector-SPED loader ("CANNOT FIND SECTOR DATA FOR
  SPED" @0x5325ac) — their containing functions are the in-flight world population.
- **`.SPX`/`SPD` binary parser** (sector layout structure) and the galaxy index that names sectors.
- The SPED entity struct (physics, AI, weapons) and the HUD/cockpit render.

## Walking down Flight_Update: the entity (DCB) system (resolved 2026-10-29)

Starting from `Flight_Update (0x40ebf0)` = `Flight_Update_Phase1 (0x4622a0)` + `Flight_UpdateWorld
(0x418220)`. `Flight_UpdateWorld` is the **client frame orchestrator**, NOT a monolithic sim loop.
In call order it runs:

1. `Flight_InputDispatch (0x42ff90)` → if not paused → `Input_DispatchBindings (0x42fbc0)`:
   walks an input-binding tree (root `g_InputBindRoot 0x562bb0`), matches key/button state
   (`0x49ec30`), fires bound callbacks `(*(node+0x10))(node+0x14,...)`; plus camera-axis input
   (`0x42f730`). This is control mapping, not physics.
2. mission-end timers / flags.
3. `Net_CyclePump (0x4b8f30)` (always): `Net_ReceiveDispatch (0x4b8d70)` pulls packets
   (`0x4b9110`) and dispatches via a handler table (`0x4b8c90`). **This is where the server→client
   world state arrives.**
4. `Camera_Update (0x4104f0)`: camera DCB `g_CameraDcb 0x5b95e0`, calls its method `+0x1c`, builds
   the view matrix (`0x52db6a`).
5. (if !cutscene) HUD/particles/mission-condition updates; render-prep.

### Entities are "DCBs" (Data Control Blocks)

The in-flight world objects are **DCBs**, allocated from class-specific pools (confirmed by the
`DCB_DEBUG` overlay `Dcb_DebugOverlay 0x41c560` and pool names in `Server_InitDcbPools 0x462a10`):

| Pool global | Class | Notes |
|---|---|---|
| `0x58afc4` | DRONE | "Server_DRONE_DCBS" (0xb4 × 0x358) |
| `0x58af9c` | AI | "Server_AI_DCBS" |
| `0x58afec` | BASE | stations |
| `0x58b014` | ROID | asteroids |
| `0x58b03c` | COMMON | |
| `0x58af74` | player | |
| `0x5b3288` / `0x5b32b0` | CLIENT | client-side DCBs (projectiles, camera, …) |

Pools are free-list allocators (`DcbPool_Alloc 0x41b7d0`; struct: +0 buf, +4 freelist, +0xc/+0x10
deferred-free lists, +0x14 count, +0x18 elemsize, +0x1c id ctr, +0x20 free count). `Dcb_GC
(0x45ee80)` reaps deferred-free DCBs. Active client DCBs are chained on **`g_DcbActiveList
(0x5b3280)`** (next @ +8), with a second list `0x5b31c0`.

### The DCB method table (the actual per-entity update)

`Sped_ConstructEntity (0x434ac0)` and the per-type init/spawn functions install a small vtable of
raw code pointers on each DCB instance:

- **`+0x68` = per-frame think/physics** (motion/AI). Verified: e.g. `Dcb_Think_Missile (0x40a250)`
  advances the missile and does proximity detonation; think methods call range/steer helpers
  (`0x403480`, `Entity_TurnToward 0x403270`). Per-type think bodies: `0x4111b0 0x411f80 0x412400
  0x4112d0 0x40a250 0x40a460`.
- **`+0x70` = render**. The render pass `Dcb_RenderPass (0x4584d0)` builds a depth-sorted visible
  list (`Dcb_BuildVisibleList 0x458460` → scratch `0x6240e8`) for 3 buckets and calls
  `(*(dcb+0x70))(dcb)` on each.
- **`+0x80` = damage handler** (e.g. AI ships `AiShip_OnDamage 0x404440`). `+0x88` = player-collision handler (`collision.md`).
- `+0x84` = aux.

`Ship_Update (0x405a20)` is the SHIP **message handler** (selector in arg2: case 2 = think-ish,
case 1 = damage, 0x11/0x12 = set/clear flags, …), dispatched for ship-class messages.

### Who runs the physics each frame — client vs server

The pools are all named **`Server_*`**, and the client path `Dcb_ApplySnapshot (0x417ce0)` /
`Dcb_ApplyRecord (0x417c00)` applies a server world-state snapshot: for each record, if the DCB id
already exists it **updates in place (KEPT++, `g_DcbKeptCount 0x5b9060`)**, else it **spawns a new
DCB (NEW++, `g_DcbNewCount 0x5b909c`)**. This is the netcode entity-replication path, reached from
`Net_CyclePump`. The authoritative physics/AI integration for networked play lives in **`netsock.dll`
/ the server** (no `GameCycleNotify`-style string in `space.exe`; server logic is external).
> **Correction (2026-11-08):** wrong — the server runs inside `space.exe` (callbacks registered by
> `populate_func_ptr_struct 0x462180`); `Netsock.dll` is only UDP transport. See `multiplayer.md`.

So the per-DCB `+0x68` think methods ARE the flight physics/entity-update code, but the **global
per-frame dispatch of `+0x68`** is not a plain `*(x+0x68)()` offset-grep hit in `space.exe` — it is
either invoked via a code-pointer local inside a list loop, or driven server-side. > **Resolved (2026-11-08):** the caller is the server world tick `TachSrv_WorldTick (0x45eee0)`, run
> from `NetSrv_Tick` in `Flight_Update_Phase1`; it walks each active quadrant's list and calls `+0x68` then
> `+0x6c`. See `singleplayer.md`.

~~Pinning the exact per-frame caller of `+0x68` is a one-step dynamic task~~: break on `Dcb_Think_Missile
(0x40a250)` (or `0x403480`) while flying and read the return address / caller frame.

## DCB think-method internals — the integration math (resolved 2026-10-29)

Walked the `+0x68` think bodies. They are classic **6-DOF fixed-point flight integration** (values
are 16.16 fixed point; `*0x80`/`>>7` give extra sub-frame precision; `0x10000` = 1.0).

### DCB kinematic fields

> **Correction (2026-10-29):** `+0x4c/50/54` is **orientation (3 Euler angles)**, *not* linear
> velocity — confirmed because it is fed to `FUN_0052db6a` (the Euler-angle→rotation-matrix builder,
> same one `Camera_Update` uses). This matches the observation that stationary objects carry non-zero
> `+0x14/18/1c` in the `.spx` (their facing). There is **no persistent linear-velocity vector**;
> linear motion is throttle × forward, accumulated into the world position delta `+0xa0`.
>
> **Angle unit:** orientation is **512 units per full revolution** (0.703125°/unit; 128=90°, 256=180°).
> The trig builder masks the 16.16 angle `& 0x1FFFFFF`, indexes `g_SinCosTable (0x52cbe4)` by
> `angle>>16` (9 bits = 0–511; cos = sin + 128 entries), and interpolates with the low 16 bits.
>
> **Where the handling constants come from:** the per-axis max turn rates / accel / dampen at
> `class+0x84` (and MAX_SPEED/ACCELERATION, afterburner drain `class+0x118`) are loaded from the
> ship's **`.des`** file — `rotation`/`speed`/`afterburner` groups, via `ShipDes_ParseRotation
> (0x463a90)` / `Ship_LoadDes (0x463ef0)`. See `formats.md` → ".des handling block".

| Offset | Meaning |
|---|---|
| `+0x34/0x38/0x3c` | position (x,y,z) |
| `+0x4c/0x50/0x54` | **orientation** — 3 Euler angles; the rotation matrix is built from these |
| `+0xac/0xb0/0xb4` | **angular velocity** (orientation delta per frame) |
| `+0xdc/0xe0/0xe4` | **desired/commanded orientation** (set by AI/controller) |
| `+0xa0/0xa4/0xa8` | **world-space position delta** this frame ≈ linear velocity (thrust accumulator, decays ×`def+0x3c`) |
| `+0x338` | control-input flag bits (bit0 = afterburner/reduced-turn gate) |
| `+0x312` | turn magnitude; `+0x124` = afterburner energy; `+0xc1` = throttle/FX byte |
| `+0x8c` | class/def pointer; handling params at `def+0x84`, scale at `def+0x3c` |

### Canonical ship think — `Dcb_Think_Ship (0x403820)`

The base entity think (`Sped_ConstructEntity` installs its tail `LAB_004039c0` as `+0x68`):

1. **Orientation control** — `Entity_TurnToward (0x403270)` (was mis-named "SteerToward"/"Approach
   Velocity"): a per-axis **orientation** controller. For each of x/y/z it nudges the angular velocity
   (`+0xac/b0/b4`) so the orientation (`+0x4c/50/54`) converges to the desired orientation (`+0xdc`).
   The angular velocity is capped per-axis by `def+0x84 + {0xc,0x1c,0x2c}` (**max turn rate**), and its
   per-frame change (angular acceleration) is clamped to **±0x400**. `param4&1` (afterburner off) uses
   a quarter-rate cap.
2. **Turn/aim control** (staggered every 16 frames) — `Entity_ApplyTurnControl (0x4241c0)` advances
   the orientation with the turn magnitude (`+0x312`), honoring handling params `def+0x84`; afterburner
   (`+0x338&1`) halves the turn and drains energy (`+0x124 -= def+0x118`).
3. **Linear motion** — `Dcb_WorldDelta (0x403590)` → `Entity_ThrustToWorld (0x424030)` rotates the
   forward speed (throttle) through the orientation matrix (built from `+0x4c`) and accumulates the
   scaled (`×def+0x3c`) world-space movement into `+0xa0/a4/a8`. With no throttle this decays to 0, so
   static objects stay put despite having a facing.
4. **Integrate**:
   ```
   orientation(+0x4c/50/54) += angVel(+0xac/b0/b4)
   pos(+0x34/38/3c)         += worldPosDelta(+0xa0/a4/a8)
   ```

### Per-type think variants (all share the integrate step)

- `Dcb_Think_AiShip (0x4035d0)` — AI/drone ship (installed by `0x4036f0`): same shape, simpler FX.
- `Dcb_Think_MultiPart (0x4111b0)` — parented/multi-part entity (installed by `0x412220`): optional
  pre-hook `+0x134`, steers toward `+0xec`, then `Dcb_UpdateChildTransforms (0x410f60)` walks the
  attached sub-object chain (`+0xe0`) and recomputes each child's world delta as `newPos − oldPos`.
- `Dcb_Think_Missile (0x40a250)` — projectiles: range flags +
  proximity checks. (`0x4112d0`/`0x404c00` are the capital-ship turret think/AI, see `capships.md`.)

### Cross-cutting per-frame helpers called from thinks

- `Dcb_SetRangeFlags (0x403480)` — set LOD/range bits on `+0xc0` from bounding fields.
- `Dcb_UpdateEngineAudio (0x403230)` (staggered every 32 frames) — 3D positional engine sound,
  attenuated by distance to the player DCB (`0x58b064`).
- Expensive sub-steps are **staggered by entity** via `(dcb.tag ^ g_FrameTick(0x5897e4)) & mask`,
  spreading AI/collision/audio work across frames.
