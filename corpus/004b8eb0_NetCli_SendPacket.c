
/* transport SendToServer or loopback */

void NetCli_SendPacket(void)

{
  if (GLBL_some_game_mode == 3) {
    NetBridge_Put(DAT_006af5d0,DAT_006af5d8,1);
    return;
  }
  NetDrv_SendToServer(DAT_006af5d0,DAT_006af5d8);
  return;
}

