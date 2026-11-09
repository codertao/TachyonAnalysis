# Multiplayer / netcode (investigated 2026-11-08)

Confidence tags: **[c]** confirmed from code, **[l]** likely (strong inference), **[?]** unclear.

## Architecture in one paragraph

Tachyon uses an **authoritative-ish client/server model over UDP**. Even single-player runs through
it: `GLBL_some_game_mode` (`0x6af658`) is a bit set (1 = client, 2 = server, 3 = both in one process),
and in mode 3 the packets go through an in-memory loopback "bridge" (`0x4b9040..0x4b9110`, two
one-slot buffers) instead of the network **[c]**. The **server lives in `space.exe`** (the
`Server_*` DCB pools, `populate_func_ptr_struct 0x462180` + its callbacks), not in `Netsock.dll`; the
DLL is only a transport. (This corrects the earlier guess in `flight.md`.)

Layers, bottom to top:

1. **Netsock.dll**: UDP socket, CRC, session/join/enum/ping, per-player slots. Optional compression
   via `CMPRSS??.DLL` plugin, but **no such DLL ships**, so compression is effectively off **[c]**.
2. **Transport driver vtable** in space.exe: `0x55e8c8` (Netsock TCP/IP) or `0x55e800` (the other
   transport; DirectPlay/IPX path **[l]**), picked by `FUN_004a6d00`, active pointer `0x55e458`.
   Facade wrappers `0x4a6d40..0x4a7180` call through it.
3. **Generic message engine** (`0x4b7840..0x4b9110`): packet framing, sequence/ack, reliable-event
   resend, per-client round-robin, debug dump. Game-agnostic; it calls game callbacks.
4. **Tachyon game layer**: callback tables registered by `FUN_00418150` (client) and
   `populate_func_ptr_struct 0x462180` (server), plus ~29 client→server and ~50 server→client
   "app" event types.

## Wire format (Netsock.dll)

Per UDP datagram **[c]** (`Netsock FUN_10005020` → `sendto`):

```
u32  check      ; CRC-32 (table @0x10007234, MSB-first, init 0xFFFFFFFF) of the message
u8   msg[len]   ; netsock message below
```
If `len >= 32`, the first 32 message bytes are lightly obfuscated: bit 0 of byte *i* is XORed with
bit *i* of the CRC, and `check` instead holds the original bit 0 of those 32 bytes. The receiver
gets the CRC back from the LSB differences. It's a checksum, not encryption.

Netsock message carrying game data **[c]** (`netsock_SendToServer/SendToClient`):
```
u16  type = 0x1080   ; "game data" (other values = session control: join/enum/ping [l])
u16  length          ; payload_len + 12
u32  ?               ; not written by SendTo*; filled elsewhere or stale [?]
u8   payload[...]    ; the engine packet below
```
Sends go through a lock-protected ring queue (0x4000 entries, "QUE FULL" at 0xff5), drained by a
worker that calls `sendto`. The engine-side wrappers (`0x4ab920`/`0x4ab990`) retry up to 0x800
times on result `0x10` (busy), pumping the message loop between tries.

## Engine packet (space.exe)

Every packet in either direction **[c]**:
```
u32  seq         ; sender's packet counter     (client 0x6af648 / server player+0xbc)
u32  ack         ; highest seq received from the other side (client 0x6af64c / player+0xc0)
then repeated sub-messages until end of packet:
  u16 type
  u16 size       ; includes this 4-byte header; next = this + size
  ...body
```
Packets with `seq <= last seen` are dropped whole (no reordering) **[c]**.

### Core sub-message types (debug name table `0x55f07c`, dumped by `FUN_004b8890` → `server.txt`)

| type | name | direction | body |
|---|---|---|---|
| 1 | MSG_CHAT | (unused by engine; ack wrapper below uses it) | |
| 2 | MSG_GAMEDATA | S→C | game snapshot (see GAMEDATA) |
| 3 | MSG_PLAYERDATA | C→S | `u32 startupStage, u32 clientFrame, u32 sessionId` + PLAYERDATA |
| 4 | MSG_STARTUPDATA | S→C | `u32 stage, u32 sessionId, u32 slot` + stage blob |
| 5 | MSG_STATICDATA | none seen | |
| 6 | MSG_PLAYERINFO | S→C | `u32 serverFrame, u32 sessionId` + `u32 rosterVersion` |
| 7 | MSG_PACKETHEADER | S→C | used as **kick/disconnect**: `u8 reason` (player+0x89) |
| 0x103 | (startup ack) | C→S | `u16 1, u32 stage`, reliable |
| ≥ 8 | "APP_SPECIFIC_MSG" | both | reliable game events (tables below) |

### Reliability **[c]**
App events aren't sent once and tracked. Each one sits in a per-peer list and is **copied into
every outgoing packet** until either its resend budget runs out (`0x800` ≈ until acked, or `4` for
"fire-and-forget" events) or the peer's `ack` reaches the seq it was first sent in. On the wire an event
is a sub-message with an 8-byte header, `u16 type, u16 size, u32 event tag`, then the body (the
offsets in the catalogues below are relative to the body). Receivers keep a 128-entry ring of recently seen tags
(`mpClient_event_tag_buffer`, `player+0x7c`) to drop duplicates. Events that arrive while the client
is out of sync (session id mismatch) are still delivered, flagged "stale" (`param_4 = 0`), and
handlers run only a safe subset.

Server events also carry a **delivery filter** (`FUN_004620b0`, flags in event+0x20) **[c]**:
`0x01` within radius of a point · `0x02` all except player P · `0x04` only player P · `0x08` team ==
X · `0x10` player field +0x140 == X · `0x20` same sector/quadrant · `0x40` only clients past
startup · `0x80` skip clients still loading.

Each server sender fills a 6-field **delivery spec** on the stack that `NetSrv_QueueEvent` copies
into the event: `{s16 resend, u16 flags, u32 radius (16.16), u32 player P, s16 team X, u32
quadrant}`. The radius test measures from the **first 12 bytes of the body**, so every
radius-filtered event starts with a world position. Typical specs: `0x61` = synced + same quadrant +
within radius; `0x20` = everyone in the quadrant; `4` = one player only; `0` = everyone.

### Rates **[c]**
Client sends 1 packet every 16 client frames (`FUN_004b8f80(16)`; 2 in local mode). The server
round-robins: on tick *t* it sends only to player slots with `(slot & 15) == (t & 15)`
(`FUN_004b87b0(16)`), so each client gets ~1 packet per 16 server ticks. Frame/tick rate itself is
not yet pinned.

**Client send path:**
- `Flight_UpdateWorld` calls `Net_CyclePump 0x4b8f30` once per 50 Hz update. It sends when
  `(counter & 15) == 0`, so **one packet every 16 ticks = 320 ms** (about 3 Hz). The counter
  starts offset by half an interval.
- There is no other send path: events (fire 0x2001, hit 0x2003, collision 0x2009, …) are queued
  (`NetCli_QueueEvent`) and wait for the next scheduled packet, up to 320 ms.
- There's also no per-event rate limit or cooldown in the net layer. Fire rate is limited only
  by the client's weapon code; the server checks ammo but not cooldown.

**Packet contents** (`NetCli_BuildAndSend 0x4b8ef0`), in order:
1. `seq, ack` (8 bytes);
2. MSG_PLAYERDATA (4 + 12 + 0x4C = 92 bytes), always;
3. **every pending event**, copied whole (`NetCli_WriteQueuedEvents`), each `{u16 type, u16 size,
   u32 tag}` + body.

**Event retirement:**
- An event stays in the list and rides in **every** packet until its resend budget runs out, or
  a server packet acks a seq at or after the one it was first sent in (`+0x1c`).
- Server packets arrive only every 320 ms, so with a 200 ms round trip a reliable event is
  usually sent 2–3 times. The receiver drops duplicates by tag (128-entry ring).

**Limits:**
- No coalescing, delta or compression (the `CMPRSS??.DLL` plugin doesn't ship).
- The 16 KB client send buffer (`NetCli_Init`: 0x4000, event pool 0x200 nodes × 0x114) isn't
  bounds-checked while packing **[c: no check in the writer]**.

**Size:** a quiet client packet is about 100 bytes of payload, about 140 bytes on the wire with
the netsock and UDP/IP headers. That's roughly 0.45 KB/s up per player. Snapshots are a few
hundred bytes per 320 ms down. Both fit a 28.8k modem.

## Motion smoothing and latency **[c]**
**Your own ship** is simulated only by your client. Movement is client-authoritative, and the
snapshot builder skips the player's own entity, so the server never corrects it. Local flight
has no added latency.

**Replicas** (`TachCli_ReplicaThink 0x415430`; projectile replicas use the same
code in `FUN_00497d00`) keep two positions:
- **Network target:** `+0x108`. Each snapshot sets it to the record's position, and stores the
  record's velocity in `+0xa0` and its angles in `+0xac..+0xb4`.
- **Shown position:** `+0x34`.

Every 50 Hz tick:
```
target += velocity                    // dead reckoning (velocity is per tick)
pos    += (target - pos) >> 4         // ease 1/16 per tick
angle  += (targetAngle - angle) / 32  // ×0x80 >> 12; the ×128 overflow wraps the difference,
                                      // so it turns the short way. No angular velocity is sent.
```

**Behaviour of that filter:**
- At constant velocity the shown position trails the dead-reckoned one by 15 ticks of motion
  (300 ms).
- A correction is 64% done after 16 ticks and 95% after about 46 ticks (0.9 s).
- Angles ease with a time constant of about 32 ticks (0.64 s).
- The wire carries angles at 8 bits (1.4°), and position and velocity as f16 (12-bit mantissa,
  relative to the client's camera).

**Single player:** the replica is linked to its server DCB (`+0xf4`) and copies it exactly
each tick, with no smoothing.

**The server's copy of a player** (`FUN_00460d90`, installed by `0x4552a0`) runs the same
filter:
- `Tach_SrvReadPlayerData` sets the target (`+0x158`), velocity and angles (`+0x164`).
- Each tick: target += velocity, pos += (target − pos) >> 4, and angles ease at 1/8 (×0x80 >> 10).

**What the server sends:** the snapshot (`Tach_SrvWriteEntityRecord 0x4614e0`) carries the
server's *shown* `+0x34`, so another player passes through two filters.

**Rates:** each client sends PLAYERDATA every 16 frames, and the server sends each client a
snapshot every 16 ticks (round robin). That's 320 ms each way at 50 Hz, assuming one
`NetSrv_Tick` per fixed step (see `to_verify.md`).

**Example with a 200 ms round trip (100 ms each way), constant velocity:**
- An **AI ship** is server-simulated, so its server position is exact. On your screen it trails
  by about 100 ms (transit) + 300 ms (your smoothing) ≈ **0.4 s** of motion.
- **Another player:** 100 ms (their packet to the server) + 300 ms (server smoothing) + 100 ms
  (snapshot to you) + 300 ms (your smoothing) ≈ **0.8 s** of motion behind where they really
  are. Dead reckoning stops this growing between packets, but nothing compensates for transit
  time; the `clientFrame` field isn't used for positions.

**A maneuver** (another player turns):
- The news reaches you after 0–320 ms (their send slot) + 100 ms + 0–320 ms (your snapshot slot)
  + 100 ms. That's about 0.5 s on average and up to about 0.85 s.
- Until then both filters dead-reckon along the old velocity, so the replica overshoots.
- When the new target arrives it jumps to the new path and the shown ship curves back over
  about 1 s, so the replica swings wide and rubber-bands.
- Orientation follows separately and lazily (0.64 s time constant, no rotation rate), so the
  nose can visibly lag the direction of travel.

**Combat consequences** (see Weapons below):
- Bolt hits are decided by the shooter's client against the shown replica. You aim at what you
  see with no lag lead, and the server trusts the report.
- So the target is hit where it was about 0.4–0.8 s ago, from its own point of view.
- Server-side shots (AI, missiles) are tested against the server's copies. Those trail a moving
  player by about 0.4 s (transit + server smoothing), which makes players slightly harder for AI
  to hit than they appear.

### Interest management and refresh rates **[c]**
**No timestamp:** snapshots have no timestamp that the client uses. `NetCli_HandleGameData`
passes an estimated frame count to the callback, but `Dcb_ApplySnapshot` ignores it. A record
is just position, velocity and angles, taken as "now".

**Radii** are set per connection in `Ent_SetQuadrant 0x4577d0`:

| Radius | Value |
|---|---|
| near (`+0x15c`) | 3750 units |
| far (`+0x160`) | 10000 units (5000 with `g_FlightStateFlags & 4`) |
| both, in quadrants with descriptor flag 2 | 3000 units |

**What each snapshot carries** (`Tach_SrvWriteSnapshot 0x461870`):
1. **Near:** entities within the near radius of your camera, **at most 8** (2 during startup).
   - They're taken in the quadrant's entity-list order, **not** by distance.
   - With more than 8 nearby, the same list-order entities win every time.
2. **Your target**, if it hasn't been sent already.
3. **Far:** a cursor walks a list of everything within the far radius (rebuilt each time the
   cursor reaches the end). Each snapshot sends the next **2** not already sent, with flag 0x10.
   - This is also the only way near entities past the cap of 8 get updated.
4. **Persistent objects:** a page of them (descriptor records, acked with 0x2008).

**Client expiry** (`Dcb_ApplyRecord` / `TachCli_ExpireReplicas`):
- A normal record sets the replica's life to 1. It's deleted after two consecutive snapshots
  without it (about 0.64 s).
- A far record sets the life to 1000 / send interval = 62 snapshots (about 20 s).
- So far-only entities dead-reckon in straight lines for (far-list size / 2) snapshots between
  refreshes. With 30 ships within 10000 units that's about 5 s.

## Join / startup handshake **[c]**

1. Netsock join (`netsock_JoinSession`), engine allocates a player slot (`FUN_004b7bf0`; name from
   Netsock, default `"JAKE_LOGAN"` if unavailable).
2. While `player+0x88` (in-startup) is set, the server sends **MSG_STARTUPDATA** with the current
   stage instead of game data. The client acks each stage with **0x103**, and the server advances
   (`FUN_004b8030` → callback `0x462080`). Stage blobs (`Tach_SrvWriteStartupStage 0x461f80`,
   read by `TachCli_ReadStartupBlob 0x417780`) are `u16 nRecs` + sub-records `u16 kind, u16 size`:
   - stage 0: kind 3, **model table** (see "Startup name tables" below)
   - stage 1: kind 2, **object-descriptor table** (see below)
   - stage 2: kind 1 (your entity id + sector name), kind 4 (0x50-byte player/ship state),
     kind 8 (game-mode callback)
   - stage 3: kind 6 (descriptor data, `FUN_0044f720`)
   - stage 4: kind 5, player roster (names)
   - stage 5: kind 7, session settings (`u32,u16,u8` @ `0x6af7ec`)
3. After the stage 5 ack the server sends app event **0x1111** (startup complete) and normal
   GAMEDATA begins.

### Startup name tables (stages 0 and 1) **[c]**

Both tables exist so that snapshot records can name *what an entity looks like / is* with a small
integer instead of a filename. The server fills each 256-slot table in **load order** (first free
slot), so slot numbers differ between sessions and maps. The client therefore receives the server's
slot assignment and loads the same files into the same slots before any snapshot arrives.

Wire format (identical shape for both; only the strings differ):
```
u16 kind            3 = model table, 2 = descriptor table
u16 size            whole sub-record incl. this header, padded to even
u16 count           number of used slots sent (empty slots are skipped)
count x {
  u16  slot         0..255
  char name[]       NUL-terminated
  char name2[]      NUL-terminated   -- kind 3 only
}
[pad byte to even size]
```

**Kind 3 = model table** (`TachSrv_WriteModelTable 0x461b30` ← `g_ObjModelPool 0x5a7538`).
- Each entry is a **3D model pak + palette** pair, exactly as named in a `.des` file:
  `EXTERIOR_PAK: cutless.pak, bora.pal` → `{slot, "cutless.pak", "bora.pal"}`.
- Server side, `ModelPool_Load 0x431850` (called from `Ship_LoadDes` and the other `Ent_Create*`
  class loaders) finds the pak by name or loads it (`Pak_Load 0x4b14b0`, magic `3DPK`) with that
  palette remapped into the game palette, and stores it in the first free slot.
- Client side, `TachCli_OnModelTable 0x417470` → `ModelPool_SetSlot 0x4317d0(pak, slot, pal)`.
  It does nothing for a slot that is already filled, so a listen host, which shares the server's
  pool in-process, reuses its own entries.
- Pool record (stride 0x28, slots start at `0x5a7540`): `u32 pakHandle; char pak[0x10];
  char pal[0x10]; u32 remappable` (1 = palette is re-tinted per sector by `ModelPool_Relight`; see `formats.md`
  "Per-sector palette re-tint").
- **Used by:** snapshot entity record byte `+4`. A plain replica's model is
  `g_ObjModelPool[rec+4].pakHandle` (`TachCli_SpawnReplica 0x417900` → `replica+0x58`). That byte
  is u8, so at most 256 models can be visible in an MP session.
- Only this pool is sent. Two more pools of the same layout are client-local: `g_FxModelPool 0x5ac548`
  (backdrops, explosions, debris, warp tube, sun flare) and `g_BasePakPool 0x5a9d40` (`base_paks` list) **[c]**.

**Kind 2 = object-descriptor table** (`TachSrv_WriteDescTable 0x461c40` ← `g_DescRegistry
0x5b2300`).
- Each entry is a **`.des` filename** (`{slot, "cutlass.des"}`).
- A descriptor is the per-class object definition created by `Desc_CreateByType` when a `.des`
  is first used: `+0 DESC_TYPE` (1 ship, 2 asteroid, 3 capital ship, 4 hyper gate, 5 starbase, ...),
  `+4 name`, `+0x14 slot`, `+0x20..` class callbacks (init, `+0x28` spawn-from-snapshot,
  `+0x48` shutdown), plus the parsed `.des` stats. Registered with `DescReg_Alloc 0x41db50`
  (slot -1 = first free).
- Client side, `TachCli_OnDescTable 0x4174e0` calls `Desc_CreateByType(name, ..., slot)`, which
  parses the same `.des` (loading its paks into the model pool on the way) and registers the
  descriptor at the server's slot.
- **Used by:** extended snapshot records (flag 0x08): `s16` at `+0x1a` is a descriptor slot, and
  `TachCli_SpawnFromDesc 0x4178a0` builds the replica through that class's `+0x28` callback
  instead of as a bare model. Also used for ship-descriptor references such as
  `TachCli_SetEntityDesc 0x416120` (entity `+0x8c`) and the team-ship-descriptor event.
- On disconnect a remote client frees its descriptors (`DescReg_ShutdownAll`); a host keeps them.

Ordering matters: stage 0 is sent first so that by the time descriptors (stage 1) and the player's
own ship (stage 2) are created, every model slot they reference already exists on the client.

## Ship-to-ship collisions and death **[c]**
**Collisions:** each client tests only **its own ship** against its replicas (see `collision.md`,
"Player ship collision").
- On a hit it bounces or deflects locally and reports 0x2009 `{its speed, other id}`.
- The server (`TachSrv_OnCollision 0x45fd70`) damages the reporter by
  `maxShield × clamp(speed / maxSpeed × 0.95, 0.2, 1.25)`, and the **other** ship takes the same
  amount (`TachSrv_DamageEntityById`, type 0x26).
- Nothing moves the other ship; positions are client-owned.

**Consequences in MP:**
- Whether a collision happened is decided on the reporter's screen, against a lagged replica.
- If A rams B's replica, A bounces. B loses the same shields or hull with no bounce, possibly at
  a point where on B's screen A was nowhere near.
- If both clients see the contact, both report it, and each ship takes damage twice: its own
  report plus the other's. Each report uses the reporter's own speed.
- The cooldown (50 / 100 frames) is per client, so each side reports at most once per cooldown.

**Death is server-side.** The client's hull, shield and energy meters are whatever GAMEDATA says
(`Tach_ReadGameData`). `TachSrv_OnShipKilled 0x45fc30` runs when the server's copy reaches
hull ≤ 0 after any damage:
- a trusted bolt hit report (0x2003 → victim `+0x80` = `TachSrv_DamagePlayer 0x460f60`);
- a collision report, from either party;
- server weapons (AI bolts, missiles, sappers, beams);
- sector hazard damage (`FUN_00460c20`: when the quadrant flag `+0x88 & 1` is set, 150 every 16
  ticks).

**What the kill handler does:**
- Sends 0x1006 to the victim, 0x1003 (explosion, effect 3) and 0x1014 op 8 (remove) to the
  quadrant.
- Marks the ship dead (`+0xc3 = 1`, des `+0x1d0 = 1`, so no collision damage while dead), and
  counts deaths.
- Credits the kill to the last damager (`0x5653f4`, set by whichever handler dealt the blow), or
  calls a collision / suicide hook.
- Calls the rules hook `+0x24` and broadcasts the scoreboard (0x1112).

**Respawn:** the client asks with 0x2011 (`FUN_0045ff10`). The rules hook `+0x3c` places the
ship and 0x1012 teleports it.

**Timing:** the victim keeps flying (and firing) until 0x1006 arrives: 0–320 ms waiting for its
packet slot, plus one-way latency. Whether the server drops hit reports from a dead shooter
isn't checked here **[?]**.

## Sector loading and quadrant entry **[c]**
**Only the server reads `.SPX` files.**
- Every `Spx_LoadSector` caller is on the server side:
  - `Gate_SpawnAndPreload` (a gate preloads its linked sector, so the server holds neighbouring
    sectors as live quadrants);
  - `Sector_Transition`, from `Gate_JumpToSector` and `Sector_LaunchMission` (via
    `Tach_SrvDispatchEvent`);
  - `Sector_StartMP` (via the round-start paths that also send `SrvSend_RoundResume`).
- A remote client never parses the sector layout, its triggers or its placements. In single
  player and on a listen host the "client" is in-process with the server, so it still sees the
  loaded world.

**MP gate jump** (`FUN_0045f880` → `FUN_0045f690`, when the gate has no hard sector transition):
- The server moves just that player between already-loaded quadrants (`Ent_LeaveQuadrant` /
  `Ent_SetQuadrant`), places them at the exit, and builds that connection's **static object list**
  (`FUN_0045f460`, "PLAYER_STATIC_OBJ_LIST").
  - The list holds the quadrant's entities with `+0xc3 & 3 == 3`, sorted by distance from the
    player. `FUN_0045f3c0` can override an entity's distance.
- It then sends `SrvSend_EnterQuadrant`: position, angles, quadrant, BDF name, and optional scene
  name.

**Client** (`Quadrant_OnEnter 0x416420`, via `Tach_CliDispatchEvent`):
- Places the player ship and clears local world state (`FUN_00416300`: threat list, replica
  pools, hostile count).
- Loads the BDF backdrop, and if a scene name was sent, plays that `.SEN` (the gate / hyperspace
  sequence; `NEWQUADRANT: SCENE PLAY(%s)`).
- Then **immediately** acks with 0x2008 kind 2 ("ready for snapshots").

**Filling the world:** statics then arrive inside the normal snapshots.
- Each snapshot carries **4** extended records (12 during startup state 2) from the static list,
  nearest first (`FUN_004616c0`).
- The client acks each page with 0x2008 kind 1 before the next is sent.
- So a sector with N statics takes about N/4 snapshots to fill: 60 statics is 15 × 320 ms ≈ 5 s
  at the steady rate. Much of that is hidden by the scene playing.
- Each record names a descriptor slot, and `TachCli_SpawnFromDesc` builds the full class object
  (model, collision mesh, class behaviour) from the client's own copy of the `.des`.
- Ships and other dynamic entities come through the normal near / far interest selection above.

## PLAYERDATA (C→S, 0x4C bytes) **[c]** (writer `0x417eb0`, reader `0x460b30`)

**Movement is client-authoritative.** The client reports its own ship state and the server copies
it in.

| off | field |
|---|---|
| 0x00 | ship position x,y,z (16.16 fixed) |
| 0x0C | camera / viewpoint position (server uses it for interest management) |
| 0x18 | client frame counter (`0x5b3304`) |
| 0x1C | current target: `u32 id, u16, u16` subtarget (0 = none) |
| 0x24 | speed scalar (`0x5b1ecc`) |
| 0x28 | throttle (`g_Throttle`), or `-1` when afterburner is on |
| 0x2C | `0x5b20ec` (energy/power-distribution setting [l]) |
| 0x34 | one-shot interaction request: `u32 objId, u32 action` (cleared after send) |
| 0x3C | velocity (world position delta) x,y,z |
| 0x48 | orientation pitch/yaw/roll as u8 (angle >> 17, 256 per rev) |
| 0x4B | flags: bit0 = has ship / fields valid |

## GAMEDATA (S→C) **[c]** (writer `0x461a30`, reader `0x417dc0`)

24-byte player status header:
`u16 @+8, u16 @+0xA, u16 @+0xC` (three ship meters from player DCB +0x124/+0x12C/+0x140 [l]
hull/shield/energy), `u16 @+0x12`, `u32 flags @+0x14` (one-shot), `u32 targetId @+0`,
`u8 targetMeterA/B/C @+4..6` (target's hull/shield %, 0xFF = none).

Then the **entity snapshot** (`FUN_00461870` → client `Dcb_ApplySnapshot 0x417ce0`):
```
u16 count; u16 pageListId; u16 pageCount
vec3 origin (i32 x3)          ; = the client's reported camera pos; records are relative to it
record[count]
```
Server-side interest management: entities within radius `player+0x15c` of the client's camera,
**capped at 8** (2 during startup state 2), plus your current target, plus up to 2 "far" entities
(radius `+0x160`, flag 0x10, rotated through over time), plus a page of persistent objects
(4 or 12 per packet) that the client acks with **0x2008 (kind 1)**.

Entity record, 24 bytes (28 with flag 0x08):
| off | field |
|---|---|
| 0 | u32 entity id |
| 4 | u8 model slot (into the stage-0 model table, `g_ObjModelPool`) |
| 5 | u8 flags: 0x01 ?, 0x02 ship-like (has team/class), 0x04 ?, 0x08 extended/paged record, 0x10 far record (slow refresh), 0x20 ? |
| 6 | u8 team / class |
| 7 | u8 game-defined (callback `0x5b1dc4+0x1c`) |
| 8 | pos dx,dy,dz relative to origin, **f16** |
| 0xE | velocity x,y,z, **f16** |
| 0x14 | orientation u8 x3 |
| 0x18 | (flag 0x08) u16 scale/lifetime (`dcb+0x1c >> 8`), s16 descriptor slot (stage-1 table) or -1 |

**f16** = custom 16-bit float (`0x48e870` encode / `0x48e8c0` decode): bit0 sign, bits1-3
exponent (even shifts), bits4-15 = top 12 mantissa bits.

## App event catalogue

Client→server (`0x2xxx`). Sender functions `0x414ee0..0x415c70`, server dispatch `0x460850`.
`R` = resend budget (0x800 = until acked).

| type | size | R | meaning | evidence |
|---|---|---|---|---|
| 0x1116 | 0x24 | 800 | request chained scene/mission (strings) | `Sector_LaunchMission` [c] |
| 0x2001 | 0x1c | 800 | **fire bolt**: `vec3 pos, u16 angles[3], u16 clientFrame @0x12, u8 slot @0x14, u8 weapon @0x16, u8 @0x17` | ammo check only, relays 0x1002; no server projectile [c] |
| 0x2002 | 4 | 800 | request info on unknown entity id (sent when spawning a flag-0x04 record) | [l] |
| 0x2003 | 0x14 | 4 | **hit report**: `vec3 hitPos, u32 targetId @0xc, u8 weapon @0x10, u8 kind @0x11, u16 dmgScale>>2 @0x12`. Server trusts it (see Weapons) | [c] |
| 0x2004 | 0x24 | 800 | **fire missile**: pos, angles, f16 offset @0x12, `u32 clientFrame @0x18, u32 targetId @0x1c, u8 weapon @0x20, u8 @0x21, u8 lockFlag @0x22, u8 slot @0x23` | server spawns the real missile [c] |
| 0x2005 | 4 | 800 | power/energy distribution change (sub-op 1..6) | [l] |
| 0x2006 | 4 | 800 | use jump gate (gate id) | `Gate_JumpToSector` [c] |
| 0x2007 | 2 | 800 | arrived in quadrant | `Ent_EnterQuadrant` [c] |
| 0x2008 | 8 | 800 | kind1: ack page of persistent objects; kind2: ready for snapshots | [c] |
| 0x2009 | 8 | 800 | **collision report**: `u32 impactSpeed, u32 otherId` (`collision.md`) | [c] |
| 0x2010 | 2 | 800 | set player state = 2 | [?] |
| 0x2011 | 2 | 800 | respawn / re-enter (`0x45ff10`) | [l] |
| 0x2012 | 2 | 800 | music/scene loaded, re-enter quadrant | [l] |
| 0x2013 | 4 | 800 | docked at object | "DETECTED PLAYER DOCKED" [c] |
| 0x2014 | 4 | 800 | interact with dock/object (trigger 7) | [l] |
| 0x2015 | 4 | 800 | undocking | "DETECTED PLAYER UNDOCKING" [c] |
| 0x2016 | 6 | 800 | dock-related trigger 6 with param | [?] |
| 0x2017 | 0x18 | 800 | **sapper attached**: `u8 weapon, u8 onPart, f16 offset[3] @2, f16 relOrient[3] @8, u32 localId @0xe, u32 targetId @0x12, u16 partIdx @0x16`. Server replies 0x1101 and creates the real sapper | [c] |
| 0x2018/19/20 | 2/8/0xc | 800 | object pickup/drop/cargo ops (`0x4985b0/f0/710`) | [?] |
| 0x2022 | 0x104 | 800 | **chat**: `u16 mode (0 all, 1 player, 4 team?, 8 ?), u16 target, char[0xff]` | [c] |
| 0x2023 | 4 | 800 | trigger 8 on object | [?] |
| 0x2024 | 2 | 800 | trigger 9 (leave/abort [?]) | [?] |
| 0x2025 | 2 | 800 | `0x499440(u16)` | [?] |
| 0x2026 | 4 | 800 | game-mode callback `+0x5c` | [?] |
| 0x2027 | 0x16 | 4 | **capital ship part hit report**: like 0x2003 + `u16 partId @0x10`; server `CapShip_DamagePartById 0x40a420` | [c] |
| 0x2028 | var | 800 | **loadout**: `u32 ship, u16 n, {u16 weapon, u16 ammo}[n]` | [c] |

Server→client (`0x10xx/0x11xx`). Senders `0x45d700..0x45ed20` (plus `0x40d9e0`, `0x4515e0`,
`0x4611f0`, `0x461610`, `0x462030`), client dispatch `0x416fc0`. All 49 types are below. Columns: body
size (`var` = string-sized), resend budget R (800 = until acked), delivery (`Q` same quadrant, `r`
radius, `1` one player, `all`, `-P` except player P), then layout. Vectors are i32 16.16 unless
marked f16. "angles" are the high 16 bits of 16.16 angles (`<<16` on receipt).

### Combat and effects
| type | size | R | to | layout / meaning | conf |
|---|---|---|---|---|---|
| 0x1002 | 0x1c | 1 | Q r4000 +sync | **projectile fired**: `vec3 pos, u16 angles[3] @0xc, u16 age @0x12` (server frame − fire frame, so the client fast-forwards it), `u8 weaponType @0x16, u8 @0x17, u32 targetId @0x18` | c |
| 0x1003 | 0x16 | 4 | Q r(type) [-P] | **entity destroyed + explosion**: `vec3 pos, u32 deadId @0xc, u32 relatedId @0x10, u8 effect @0x14` (0..11, handler table `0x535a68`), `u8 @0x15`. Client plays the effect and removes `deadId` | c |
| 0x1004 | 0x1c | 4 | Q r375 [-P] | **projectile impact**: `vec3 pos, u32 hitId @0xc, u32 projectileId @0x10, u16 @0x14, u16 hitDir[3] @0x16`. Client removes the projectile and plays the shield/hull hit effect (throttled to 1 per 12 frames per entity) | c |
| 0x1020 | 0x18 | 800 | Q | **entity/turret fired**: `u8 weaponType, u8 fromSubpart, f16 pos[3] @2, f16 dir[3] @8, u32 shooterId @0xe, u32 targetId @0x12, u16 subpartIdx @0x16`. Mirrors client→server 0x2017 | c |
| 0x1103 | 0xc | 4 | Q [-P] | **entity fired** (from its current pos/orientation): `u32 shooterId, u32 targetId, u16 weaponType @8` | c |
| 0x1118 | 0x14 | 1 | Q +sync | **beam/instant-hit impact** (weapon-class method `0x496dc0`): `u32 targetId, u32 shooterId, u16 onSubpart, u16 subpartIdx @0xa, f16 hitOffset[3] @0xc, u16 @0x12` | l |
| 0x1008 | 0xe | 4 | Q r | **mine/deployed weapon placed**: `vec3 pos, u16 weaponType` (client type-3 DCB, sound 6) | l |
| 0x1102 | 4 | 800 | Q | **deployed weapon removed**: `u32 objectId` | l |
| 0x1104 | 0xc | 800 | Q r312.5 [-P] | **decoy/countermeasure dropped** (type-0x17 object, 250-frame life, count-limited): `vec3 pos` | l |
| 0x1101 | 4 | 800 | 1 | **drop your predicted object**: `u32 objectId` (reply to 0x2017) | l |
| 0x1105 | 6 | 800 | Q | **lock-on threat list**: `u32 entityId, u16 code` (0x13 = add to the 16-slot threat list `0x5b334c` + flag 0x20, else remove). Sent from `Ship_Update` | l |
| 0x1005 | 0x14 | 800 | 1 | **you took damage**: body unused. Client flashes the screen red (+0x40, cap 0xF0), plays the hit sound and calls `0x4a0aa0(5000,250000)` (rumble [?]) | c |
| 0x1006 | 2 | 800 | 1 | **you were destroyed**: no body, game-mode death callback `+0x40`. Sent by the kill handler `0x45fc30` together with 0x1003 (effect 3), 0x1014 op 8 and kill/death credit | c |

### Entities and world
| type | size | R | to | layout / meaning | conf |
|---|---|---|---|---|---|
| 0x1106 | 0x28 | 800 | Q | **spawn entity**: 28-byte extended snapshot record + `vec3 origin @0x1c` | c |
| 0x1011 | 4 | 800 | Q | **despawn entity**: `u32 entityId` | c |
| 0x1014 | 8 | 800 | Q [r] [-P] | **entity state op**: `u16 op, u16 value, u32 entityId`. op 1 = mark (+0xf1, sound), op 4 = link into sector list + flag 1, op 8 = remove, op 0x10 = set +0xe4 = value | c |
| 0x1100 | var | 800 | 1 | **entity class info** (reply to 0x2002): `u32 id, u16 classId`, then class-specific data (class vtable +0x24). Client builds the descriptor (`Desc_CreateByType`) | c |
| 0x1114 | 6 | 800 | all | **allegiance change**: `u32 entityId, u16 team` | c |
| 0x1125 | 10 | 800 | Q | **attach subpart**: `u32 entityId, u32 data, u16 subpartIdx @8` (+effect 6) | l |
| 0x1126 | 6 | 800 | Q | **destroy subpart**: `u32 entityId, u16 subpartIdx` | l |
| 0x1113 | var | 800 | 1 | **set entity label**: `u32 entityId, char label[]` (no callers → unused) | c |
| 0x1009 | 8 | 800 | Q | **jump gate state**: `u32 gateId, u16 state, u16 param` (plays GATE_OPEN / GATEWAY_OPEN anims) | c |

### Your ship and navigation
| type | size | R | to | layout / meaning | conf |
|---|---|---|---|---|---|
| 0x1007 | 0x34 | 800 | 1 | **enter quadrant**: `vec3 spawnPos, u16 angles[3] @0xc, u16 quadrantId @0x12, u8 @0x14, u8 @0x15, char quadrantName[30] @0x16` (`Quadrant_OnEnter`; spawnPos also becomes the PLAYERDATA camera override) | c |
| 0x1012 | 0x18 | 800 | 1 | **respawn/teleport**: `vec3 pos, vec3 orient`. Resets camera, HUD, input | c |
| 0x1015 | 0x28 | 800 | Q / 1 | **primary nav target**: `u32 targetId, u32 route, char name[32] @8` (route via `0x427310`; sender caller `Nav_SetDestination`) | c |
| 0x1028 | 0x28 | 800 | Q / 1 | **secondary nav target**: same layout; cleared if it equals the primary | c |
| 0x1124 | 4 | 800 | 1 | **ammo**: `u16 weaponSlot, u16 count` | c |
| 0x1117 | 6 | 800 | 1 | **resupply/repair notice**: `u16 code, u32 amount`. 3 = +pool A (`0x5b20e0`), 4 = +pool B (`0x5b20f8`), 8 = fill both, 9 = +both, 1/2/5-7/10 = sound cue only (pools are shield/energy [l]) | c |
| 0x1107 | 0x10 | 800 | all | **ship descriptor for team**: `char desName[14], u16 classId` (picks the BORA or GALSPAN variant, `0x40e3e0`) | c |

### Players, score, round
| type | size | R | to | layout / meaning | conf |
|---|---|---|---|---|---|
| 0x1110 | var | 800 | all | **roster entry**: `u16 slot, …, char name[] @8` (built by `0x45d9f0`; stored at `0x5b3a38 + slot*0x44`) | c |
| 0x1029 | 2 | 800 | all | **roster entry cleared**: `u16 slot` | c |
| 0x1108 | 0x10 | 800 | all | **player portrait**: `char name[14], u16 faceIdx` (MP_FACE, wingpal.pal) | c |
| 0x1127 | 4 | 800 | all | **rank change**: `u16 slot, u8 rank (1..10), u8 faction` | c |
| 0x1112 | var | 800 | all | **scoreboard**: `u16 n (≤8), {u16 slot, u16 kills, u16 deaths}[n]`, sorted. Sent on join, leave and death | c |
| 0x1122 | 0x10 | 800 | 1 | **personal rank progress**: `u32 points, u32 nextRankAt`, two u32 unset | l |
| 0x1123 | 0xc | 800 | 1 / faction | **faction progress**: `u32, u32, u32` (same rank table code, `0x40ce50`) | l |
| 0x1032 | 0x24 | 800 | all | **round result**: `char factionA[16] = "BORA", char factionB[16] = "GALSPAN", u16 value @0x20` (winner/score [l]) | c |
| 0x1119 | 2 | 800 | all | **round over / freeze**: client stops input and pauses (callback +0x48). Sent with 0x1032 | c |
| 0x1120 | 2 | 800 | all | **resume / new round** (callback +0x4c) | c |
| 0x1033 | 4 | 800 | all | **session id bump**: `u32 sessionId` | c |
| 0x1111 | 2 | 800 | 1 | **startup complete** | c |
| 0x1121 | 4 | 800 | all | **campaign check**: no body. Client acts only if PLAYER_MAIN_VARS.CAMPAIGN_MISSION is set | c |
| 0x1031 | 0xc | - | - | **mission end**: `i32 a,b,c` (all −1 ⇒ end, reason 4). Handler only, **no sender in this build** | c |

### Messages, orders, audio
| type | size | R | to | layout / meaning | conf |
|---|---|---|---|---|---|
| 0x1001 | var | 800 | caller (+0x80, +0x20) | **text message**: `u16 kind, u16 color, char text[≤255]`. kind 0 = HUD line in color, else message log | c |
| 0x1016 | var | 800 | Q | **add order/objective** (Server_orders/Client_orders lists): `u16 orderId, u16 kind, u32 param, char text[] @8` | c |
| 0x1017 | 4 | 800 | Q | **order update**: `u16 orderId, u16 op` (1 = complete, 2 = remove) | c |
| 0x1010 | 0x10 | 800 | all | **play scene**: `char sceneName[16]` ("PLAY_SCENE %s"). Client plays it only in local mode | c |
| 0x1013 | 0x34 | 800 | Q | **play named sound**: `u16 mode, char name[14] @2, char alt[32] @0x10, u32 param @0x30` | c |
| 0x1115 | 0x20 | 800 | all | **voice WAV**: `char wav[32]` (e.g. `2jake275.wav`) | c |
| 0x1034 | 4 | 800 | caller | **UI sound cue**: `u8 bank, u8 id, u8 param` | c |

## Netcode function names (to back-port)

See the `# --- netcode ---` section in `sidecar/names.tsv`.

## Weapons and projectiles (investigated 2026-11-08) [c unless tagged]

Weapon defs: `g_WeaponDefs 0x55a560` (0x27 records, stride 0x110). Per-weapon callbacks:
`+0x64` think, `+0x68` impact effect, `+0x6c` fire, `+0x70` create, `+0x98` on-hit. Damage is
`+0x14`, speed `+0x54`, life `+0x3c` (frames).

Fire functions take a flag word. Bit 2 means "fired by the local client"; bit 1 means "allocate in
the server pool".

### Bolts (guns, rockets, hitscan): the shooter decides hits
1. **Local client** (`Weapon_FireBolt 0x496550`):
   - Creates the bolt in the **client** pool, with `+0xd8 = 1` ("mine") and post-think
     `Proj_PostThinkOwned 0x4949e0`.
   - Sends **0x2001** (reliable).
2. **Server** (`TachSrv_OnFire 0x45ef70`):
   - Checks ammo for ammo weapons. There is **no cooldown or energy check**.
   - Relays **0x1002** to the quadrant within 4000 units, except the shooter. The resend budget is
     1, so the relay is fire-and-forget.
   - **No server projectile exists.**
3. **Other clients** (`Proj_SpawnRemoteVisual 0x497280`):
   - Spawn a cosmetic copy, fast-forwarded by `age` frames.
   - Within 10,000 units of the camera, its post-think (`0x494c20`/`0x494bb0`) deletes it when it
     touches something, and it does no damage. Further away, it isn't collision-tested at all.
4. **Shooter's client** detects the hit:
   - Every 8 frames (staggered by `id & 7`) it sweeps a mesh segment cast from the position
     8 frames ago to now.
   - On a hit, `Proj_OnHitDirect 0x4943c0` stages the damage and calls the **target replica's
     `+0x80`**.
   - On the client that handler is a `*_ReportHit` stub. It sends **0x2003** `{hitPos, targetId,
     weapon, shield/hull, dmgScale}` (or **0x2027** with a part id for capital ship parts) and
     plays the spark locally.
   - The cast uses the target replica's **displayed** pose: `Coll_SegmentVsSphere` reads entity
     `+0x34`, and `Coll_SegmentVsModel` uses model-instance `+0x1c` / `+0x34`, which are entity
     `+0x34` / `+0x4c`. That's the eased position and angles, not the network target `+0x108`.
     You hit what you see, including a replica's dead-reckoning overshoot.
   - **Victims have no say.** On the target's own client the bolt is a `Proj_PostThinkVisual`
     copy: if it touches the local ship (or anything), it's just freed (`FUN_0041b8c0` →
     `FUN_004b79a0`) with no damage, report or spark **[l: no effect]**. If the shooter's replica
     of the victim didn't cross the bolt, it's a miss, even though the victim saw the bolt reach
     them and vanish.
5. **Server** (`TachSrv_OnHitReport 0x45f180`):
   - **Trusts the report.** It doesn't check that the shot was fired, the range, or line of sight.
   - Recomputes the damage as `def+0x14 × scale` and calls the real `+0x80` damage handler.
   - Broadcasts **0x1004** impact (r375, except the shooter). Kills produce **0x1003**.
6. **No timeout message.** Every copy expires on its own after `def+0x3c` frames. Bolts have
   `+0xc3 & 1`, so the snapshot builder (`0x461870`) skips them.

### AI and turret bolts: the server decides hits
- Created in the server pool (`Proj_PostThinkServer 0x494b20`) and announced with 0x1002 to
  everyone within 4000 units.
- The server does the casts and the damage. Players learn they were hit through 0x1005, effects
  through 0x1004/0x1003.
- Clients only see the cosmetic copies.

### Guided missiles: the server owns them
1. **Client** (`Weapon_FireMissile 0x495b40`): plays the sound and sends **0x2004** with its
   current lock target. **It does not spawn a local missile.**
2. **Server** (`TachSrv_OnFireGuided 0x45f030` → `Proj_CreateMissile 0x495960`):
   - Checks ammo.
   - Creates a real entity in the server pool. The target is the sent id, or the player's current
     target if the lock flag is set.
   - Fast-forwards it by `server frame − client frame`.
   - Marks the target's threat list (0x1105).
3. **Replication:** missiles have `+0xc3 = 0`, so they ride in the **regular entity snapshot**. No
   per-missile event is sent.
4. **Flight:**
   - A launch phase flies straight for 6 / 2 / 0 frames by guidance class `def+0x84` (table
     `0x55a51c`).
   - Then `Proj_ThinkMissile 0x4950a0` homes on the target. The turn rate starts at 0 and ramps by
     `def+0x8c` per frame, up to `def+0x88`.
   - **Lost lock:** if the aim error passes 45° on yaw or pitch, or (every 32 frames) a decoy is
     within 162.5 units and ±19.5° of the nose. The missile then flies straight until its life
     runs out.
5. **Hits:** the server's mesh cast (`0x4949e0`) applies damage server-side. Some missiles turn
   into a stationary blast instead (`Proj_OnHitSplash` → 0x1008).
6. **End:** the server sends **0x1014 op 8** on expiry (`Proj_Remove`), or 0x1003 when it explodes.
7. **Shooting missiles down:** a missile has 1 hp (`Missile_OnDamage 0x495910`), so any server-side
   damage destroys it. Whether a *player's* bolt can hit a missile replica depends on the client
   replica's `+0x80` **[?]**.

### Beams (capital ship turrets)
`Weapon_FireBeam 0x496dc0` resolves instantly on the server and sends **0x1118** `{targetId,
shooterId, part, hitOffset}`. Turret-only.

### Ammo and weapon classes
Weapon class is `def+0x104`, from the `WEAPON_CLASS_*` table at `0x55a4d0`. The weapon name → id
table is at `0x55a3e0`. Weapons with `def+0x50 ≠ 0` use ammo (that value is the default load);
the rest cost energy (`def+0x58`).

| ids | class | ammo? | network model |
|---|---|---|---|
| 0–6 | laser | energy | bolt (shooter decides hits) |
| 7 FORTIS | torpedo | energy | bolt |
| 8–0xb SECO / BLAST / ADV_BLAST / SHIELD | torpedo | **energy** | server-owned missile path (0x2004). BLAST types end in a blast sphere |
| 0xc–0xf TIGER / HEAVY / DISABLER / SWARM | missile | 12/8/6/8 | server-owned missile |
| 0x10–0x13 REMOTE / INERTIAL / POWER / SHIELD (mines) | **sapper** | 2/12/16/16 | bolt that sticks; see below |
| 0x14 SPIRE, 0x15 PLASMA | rocket | 40/20 | **plain bolt** with a smoke trail (`def+0x7c & 1`) |
| 0x16 HELIOS | rocket | 2 | **server-owned missile path**, turn cap 0, launch class 2 |
| 0x17 RAILGUN | rail | energy | stepped hitscan, shooter decides hits |
| 0x18 | gun | 750 | bolt |
| 0x19 EMP_CANNON | gun | energy | bolt |
| 0x1a CORONA, 0x1b | special | energy | own handlers |

**Server ammo check** (`TachSrv_OnFire` / `TachSrv_OnFireGuided`):
- It looks up the slot index sent by the client in the connection's slot table (`conn+0x164`,
  stride 0xc: `{def*, ?, count}`).
- **Empty slot, or ammo weapon at 0:** the handler returns silently. No relay, no projectile, and
  no reply to the client. The client has already played the fire sound, and for bolts it has
  already spawned its local bolt.
- **That local bolt can still report hits** through 0x2003, and the hit handler doesn't check ammo.
- **Energy is never checked server-side**, so energy torpedoes always spawn.
- **The weapon type in the packet isn't cross-checked against the slot's weapon** **[l]**: the slot
  is only used for the ammo count.
- Normally the client's own `Weapon_Fire 0x497620` refuses at 0 ammo or low energy, and 0x2001/0x2004
  are reliable, so the two counts stay in step.

### Sappers (mines): predicted locally, then server-owned
1. **Flight:** fired and flown exactly like bolts (0x2001 / 0x1002, created by `Proj_CreateBolt`).
2. **On impact** (`Sapper_OnHit 0x494790`), the sapper sticks to the target (offset and relative
   orientation).
   - The shooter's copy stays as a cosmetic *prediction* and sends **0x2017**.
3. **Server** (`TachSrv_OnAttach 0x4603c0`):
   - Replies **0x1101** to the shooter, which deletes the predicted copy.
   - Creates the real attached sapper (`def+0xec`) and broadcasts it as **0x1020**.
   - It doesn't check that the hit really happened.
4. **Drain:** the server sapper (`Sapper_ThinkServer 0x4944f0`) follows the target. Every 8 frames
   it sends order msg 0x11 with its kind (`def+0xf4`: 1 inertial, 2 power, 4 shield, 8 remote).
5. So the drain is server-side. Only "did it stick" is decided by the client.
