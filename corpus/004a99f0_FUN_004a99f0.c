
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004a99f0(uint param_1,undefined4 param_2)

{
  int iVar1;
  MCIERROR MVar2;
  uint local_c;
  int local_8;
  uint local_4;
  
  if (DAT_005648e8 == 0) {
    return 0;
  }
  if (DAT_005648ec != 0) {
    FUN_004a9b10();
  }
  iVar1 = FUN_004a9950(param_1,&local_c,&local_8,&local_4);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_005648f8 = param_2;
  _DAT_005b9ce4 = param_1 & 0xff;
  _DAT_005b9ce8 =
       ((uint)CONCAT11((undefined1)local_4,(undefined1)local_8) << 8 | local_c & 0xff) << 8 |
       _DAT_005b9ce4;
  DAT_005648f4 = param_1;
  _DAT_005b9ce0 = DAT_0060395c;
  MVar2 = mciSendCommandA(DAT_005b9cd4,0x806,0xc,0x5b9ce0);
  if (MVar2 != 0) {
    return 0;
  }
  DAT_005648ec = 1;
  DAT_005648f0 = 0;
  _DAT_00564900 = local_4 + (local_4 >> 1) + (local_8 + 1 + local_c * 0x3c) * 0x78;
  DAT_00564904 = DAT_006039f0 + _DAT_00564900;
  return 1;
}

