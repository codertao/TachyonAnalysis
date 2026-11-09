
undefined4 __cdecl netsock_Initiate_NWPing(int param_1,short param_2)

{
  DWORD DVar1;
  
                    /* 0x1fe0  20  netsock_Initiate_NWPing */
  DVar1 = timeGetTime();
  if (DAT_10019880 == 0) {
    return 1;
  }
  if (DAT_10019884 == 0) {
    return 0x200;
  }
  if (DAT_10019c88 != 0) {
    return 7;
  }
  DAT_10019c90 = param_2;
  if (param_2 == 0) {
    DAT_10019c90 = 0xf23;
  }
  DAT_10019c92 = param_1;
  if (param_1 == 0) {
    DAT_10019c92 = -0x1aa51830;
  }
  if (DAT_100198ac == 0) {
    FUN_10003470();
    DAT_100199b0 = 2;
    DAT_100199b4 = DAT_10019c92;
  }
  DAT_10019c96 = DVar1;
  DAT_10019c9a = DVar1 - 0x1389;
  DAT_10019c88 = 0x100;
  DAT_10019c8c = 0;
  return 0;
}

