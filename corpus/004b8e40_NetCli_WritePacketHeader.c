
/* u32 seq, u32 ack */

void NetCli_WritePacketHeader(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_006af5d4;
  *DAT_006af5d4 = DAT_006af648;
  puVar1[1] = DAT_006af64c;
  DAT_006af5d4 = DAT_006af5d4 + 2;
  return;
}

