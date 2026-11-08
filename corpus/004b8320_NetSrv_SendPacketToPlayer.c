
/* transport SendToClient or loopback; dumps server.txt if over buffer size */

void NetSrv_SendPacketToPlayer(int param_1)

{
  FUN_004b82d0(DAT_006af66c);
  if (DAT_006af790 <= DAT_006af66c) {
    Net_DumpPacket(s_server_txt_0055f070,DAT_006af668);
  }
  if (*(int *)(param_1 + 4) != 0) {
    NetDrv_SendToClient(DAT_006af668,DAT_006af66c,*(undefined4 *)(param_1 + 0xc));
    return;
  }
  NetBridge_Put(DAT_006af668,DAT_006af66c,2);
  return;
}

