
void NetCli_BuildAndSend(void)

{
  DAT_006af5d4 = DAT_006af5d0;
  NetCli_WritePacketHeader();
  NetCli_WritePlayerData();
  NetCli_WriteQueuedEvents();
  DAT_006af5d8 = DAT_006af5d4 - DAT_006af5d0;
  NetCli_SendPacket();
  DAT_006af648 = DAT_006af648 + 1;
  return;
}

