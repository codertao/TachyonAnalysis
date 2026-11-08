
/* u32 seq, u32 ack */

void NetSrv_WritePacketHeader(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_006af670;
  *DAT_006af670 = *(undefined4 *)(param_1 + 0xbc);
  puVar1[1] = *(undefined4 *)(param_1 + 0xc0);
  DAT_006af670 = DAT_006af670 + 2;
  return;
}

