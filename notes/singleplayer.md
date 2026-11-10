# Single-player: the in-process server (investigated 2026-11-08)

Confidence tags as in `multiplayer.md`: **[c]** confirmed, **[l]** likely, **[?]** unclear.
Read `multiplayer.md` first; single-player is the same client/server netcode, just wired together
in one process.

## TL;DR

Single-player is not a separate code path. It runs **the real server and the real client in the
same process, every frame**, connected by an in-memory loopback instead of UDP **[c]**. The client
still sends PLAYERDATA and receives GAMEDATA snapshots and reliable events exactly as in MP. What
SP changes is a set of switches:

- a different **game-rules object** (campaign rules vs MP rules),
- **faster tick rates** (every 2 frames instead of 16),
- client replicas **copy the server entity directly** instead of interpolating snapshots,
- the mission **spawn queue**, difficulty, god mode and save-game writes are enabled,
- voice chat and Netsock are skipped.

## Mode flags **[c]**

`g_FlightStateFlags` (`0x5a64fc`) is a bit set:

| bit | meaning |
|---|---|
| 0x1 | this process hosts the server (`Flight_SceneSetup` registers server callbacks, local player auto-joins) |
| 0x2 | a local player/client is attached (the client frame `Flight_UpdateWorld` handles input) |
| 0x4 | **offline single-player** |

| value | set by | meaning |
|---|---|---|
| 7 | `TitleMenu_Enter`, `CmdLine_Dispatch` | **single-player** |
| 3 | host flow `0x442ba0` | MP listen host (session type 'P') |
| 1 | host flow, `spacesav[0x12]` set | MP dedicated host (session type 'S'; one extra slot) |
| 2 | LAN/MP join screen `0x44bfe0` | MP remote client (flight mode table `0x534260`, no server) |

The engine's network mode `GLBL_some_game_mode` (`0x6af658`) follows from these: `Flight_Enter`
sets 3 (client+server), then server registration drops it to 2 if bit 0x2 is clear and client
registration drops it to 1 if bit 0x1 is clear. **Mode 3 means "use the loopback bridge"** for any
peer without a remote connection id **[c]**.

## Lifecycle **[c]**

`Flight_Enter (0x40ebd0)` = `set mode 3` → `Flight_SceneSetup` → `init_flight_start`.

1. **`Flight_SceneSetup (0x462af0)`**, server side:
   - zero the server state (`0x5897e0..`), then `NetSrv_RegisterGameCallbacks`;
   - allocate `SCORE_BUFFER` and run `Server_InitDcbPools` (the `Server_*` entity pools);
   - load `vars.cfg` into the save var store (default `player00.sav`);
   - apply difficulty (`Sp_ApplyDifficulty 0x4629d0`).
2. **`init_flight_start (0x418550)`**, client side:
   - clear client state (`0x5b31c0`, 0x5ea0 bytes), then `NetCli_RegisterGameCallbacks`;
   - load client resources;
   - if this process hosts (bit 0x1), auto-join the local player: `FUN_004b8780(name @0x5b2c18)` →
     `NetSrv_OnPlayerJoin` with connection id 0, which marks the player as local (`player+4 = 0`),
     so all of its traffic goes through the bridge.
3. The normal **startup handshake** runs over the bridge: STARTUPDATA stages 0–5, each acked with
   0x103, then 0x1111.
4. **Shutdown `Flight_ServerShutdown (0x4628c0)`**: rules shutdown (SP writes `PLAYER_STATS`),
   then `VarStore_Save` of the `.sav` **only in SP**, free pools, `netcomm_Shutdown`.

## The frame **[c]**

`Flight_Update (0x40ebf0)` runs once per game frame:

```
Flight_Update_Phase1 (0x4622a0)
  NetSrv_Tick (0x4b8760)              -- the server
    NetSrv_ReceiveAll                 -- read the client's packet from the bridge
    per-player tick (frame counters, callback +0x7a0)
    world tick  TachSrv_WorldTick (0x45eee0)
      for each active quadrant (0x5897f0, stride 0xbc, count 0x58af70):
        rules +0x44 (SP: Sped_ProcessSpawnQueue -- timed/reinforcement spawns)
        every entity: +0x68 think (AI/physics), then +0x6c post-think
      Dcb_GC before and after
    NetSrv_SendRound                  -- build snapshot + events, put them in the bridge
  rules +0x04 tick, frame counter 0x5897e4++
Flight_UpdateWorld (0x418220)         -- the client
  input dispatch, then Net_CyclePump:
    NetCli_ProcessPacket from the bridge -> Dcb_ApplySnapshot, events
    NetCli_BuildAndSend -> PLAYERDATA into the bridge
  camera, HUD, render prep
```

This answers the open question in `flight.md`: the per-frame caller of every entity's `+0x68`
think is **`TachSrv_WorldTick`**, i.e. the server, not the client.

**The bridge** (`0x4b9040..0x4b9110`) is two one-packet slots: 1 = client→server
(`bridge_data`, size = server send buffer), 2 = server→client. A put overwrites, a get clears.
Nothing is lost only because the server reads before it writes in a frame and the client does the
same. In SP both sides use a send interval of **2 frames** (MP: 16) **[c]**
(`NetSrv_SetSendInterval(2)`, `NetCli_SetSendInterval(2)` when bit 0x4 is set).

## SP shortcuts inside the netcode

### Replicas mirror the server entity **[c]**
When a snapshot record spawns a client replica (`0x417900`) in SP, the replica gets a direct
pointer to the server entity at `replica+0xf4` (`FUN_0045d680(id, quadrant)`). The replica think
`TachCli_ReplicaThink (0x415430)` then:
- **SP:** copies position, orientation, angular velocity and velocity from the server entity
  every frame. Exact, no quantisation, no lag.
- **MP:** dead-reckons: target = last snapshot position + velocity, eases 1/16 of the way each
  frame, lerps orientation by 1/32.

So in SP the snapshots matter only for which replicas *exist*, not for how they move.

### Snapshot limits still apply **[c]**
Each snapshot carries at most 8 entities within 3750 of the reported camera (taken in list order,
not nearest-first), plus your target, plus 2 entries from a slower "far" rotation (radius **5000 in
SP**, 10000 in MP; 3000/3000 in quadrants flagged dense) **[c]**
(`Ent_SetQuadrant 0x4577d0`). Replicas missing from the snapshot expire after ~2 snapshots, but
far-rotation records get a lifetime of `1000 / interval` snapshots (500 in SP)
(`TachCli_ExpireReplicas 0x417830`). Combined with the direct mirroring above, crowded SP battles
stay smooth even beyond 8 ships **[l]**.

## Game rules objects **[c]**

`g_ActiveRules` (`0x5b1dc4`) points to a table of hooks, set by `Rules_Set (0x4256f0)`:
`g_Rules_SinglePlayer` (`0x53f6d8`) from the title menu/command line, `g_Rules_Multiplayer`
(`0x5483d0`) from the MP flows. (Two more MP tables, `0x533460/0x533484` and `0x534b58/0x534bac`,
look like faction/round game types layered on top **[l]**.)

| slot | SP | MP | meaning (caller) |
|---|---|---|---|
| +0x00 | `SpRules_Init 0x4359c0` | `0x44f960` | init: SP loads `desnames.cfg` and `PLAYER_MAIN_VARS.PLAYER_SIDE` (your faction) |
| +0x04 | `SpRules_Tick 0x435a70` | `0x44fdd0` | per frame (`Flight_Update_Phase1`) |
| +0x10 | `SpRules_Shutdown 0x435aa0` | – | SP writes `PLAYER_STATS`: ENEMY/FRIENDLY_KILLED, LASERS/MISSILES_FIRED/HIT |
| +0x1c | `0x435ba0` | `0x44feb0` | per-entity byte in snapshot records |
| +0x24 | – | `0x44ffc0` | kill credit (`TachSrv_OnShipKilled`) |
| +0x28 | `SpRules_OnPlayerDamaged 0x4373f0` | – | posts mission event {code 0, hull %}; low-hull warning below 1/4 |
| +0x2c | `0x437870` | `0x450290` | regenerate shield/energy pools (1/1024 steps unless forced) **[l]** |
| +0x38 | `Ent_CreateMiscObject` | `0x4010e0` | stage-2 startup blob callback |
| +0x40 | `SpRules_OnPlayerDeath 0x455580` | `0x4556a0` | death cam/sound (client, from 0x1006) |
| +0x44 | **`Sped_ProcessSpawnQueue`** | – | per quadrant per server tick |
| +0x48..+0x6c | – | `0x4500f0..0x450230` | round freeze/resume, game-mode events (MP only) |
| +0x80 | `0x437a60` | `0x450260` | (client) **[?]** |
| +0x8c..+0x9c | – | MP only | startup complete, player init, etc. |

## SP-only game behaviour **[c]**

- **Difficulty** (`spacesav[0x2f]`, 0/1/2):
  - `Sp_ApplyDifficulty` sets `DAT_0058b078 = 2*d + 1` into player ship `+0xca`. That caps how
    many AI may engage the player at once (1/3/5), checked in the target search `Ent_FindTarget 0x48b450` (see `ai.md`)
    against the target's attacker count at `+0xc8`.
  - On hard, `Sped_ConstructEntity` bumps each spawned entity's skill `+0x310` (max 3).
  - On easy, damage to the player is scaled by ×0.687 (`TachSrv_DamagePlayer 0x460f60`).
- **God mode** (`GLBL_cheat_related1`, toggled by `0x4146d0` once cheats are enabled) is honoured
  only in SP, in `TachSrv_DamagePlayer` and the 0x2009 handler.
- **Cheat "open targeted gate"** (`0x414580`) reaches through the replica's server link
  (`+0xf4`) to force a gate open. It only works in SP.
- **Mission events**: server code posts `{u32 cat, u32 sub, u32 code, u32 value, u32 a, u32 b}` to
  the current quadrant with `Mission_PostEvent (0x48ddc0)`. `Mission_MatchTriggers (0x48dcd0)`
  matches it against the quadrant's two trigger tables (`quadrant+0x3c → +4, +8`) using comparator
  table `0x559984[cat][code]`, and fires matching triggers (`0x48dc90`). Codes seen:
  - 0 player hull %, 2 entered quadrant, 4 docked, 5 undocked, 6 dock action, 7 interact,
    8 object trigger, 9 leave/abort.
  - This runs in MP too; SP adds the hull-% event through rules `+0x28`.
  - The two tables are the main and sub-sector **SPX trigger tables**. Full format and vocabulary:
    `missions.md` → "Mission scripting".
- **Saving**: the `.sav` var store is written on flight shutdown only in SP.
- **Not in SP**: Netcomm voice chat (`Voice_ServerInit 0x490280` / `Voice_ClientInit 0x4903c0`
  check bit 0x4), Netsock transport, scoreboard/rank traffic (MP rules only).

## Open questions
- Real-time frame/tick rate (one server tick per `Flight_Update`).
- SP rules `+0x04` tick body (`FUN_00455960` after 250 frames) and `+0x80`.
- Whether the server still runs full PLAYERDATA trust in SP. It should: the same reader is used.
