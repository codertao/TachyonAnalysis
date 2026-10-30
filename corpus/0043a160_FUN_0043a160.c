
void FUN_0043a160(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  FUN_004ad9c0(*(undefined4 *)(param_1 + 0x1650),0);
  for (iVar1 = param_1 + 0x50; (param_4 != 0 && (*(int *)(iVar1 + 0x10) != 0)); iVar1 = iVar1 + 0x2c
      ) {
    param_4 = param_4 + -1;
  }
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    return;
  }
  DAT_005a62d0 = 0;
  DAT_005a62d4 = 0;
  DAT_005a62d8 = (uint)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)param_2 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  DAT_005a62dc = (uint)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x10 |
                 (int)((ulonglong)((longlong)param_3 * (longlong)DAT_005a67e4) >> 0x20) << 0x10;
  DAT_005a62e0 = DAT_005a67e4 * param_5 + 0xffff >> 0x10;
  DAT_005a62e4 = DAT_005a67e4 * param_6 + 0xffff >> 0x10;
  DAT_005a64cc = param_5;
  DAT_005a64d0 = param_6;
  DAT_005a64c0 = *(uint *)(iVar1 + 0x1c);
  DAT_005a64c8 = iVar1 + 0x10;
  if ((DAT_005a64c0 & 0x20000) == 0) {
    *(uint *)(iVar1 + 0x14) = *(int *)(param_1 + 0x1684) + *(int *)(param_1 + 0x1688) & 0xff;
    DAT_005a64c4 = *(int *)(param_1 + 0x1684) + *(int *)(param_1 + 0x1688) & 0xff;
    if ((DAT_005a64c0 & 0x20000) == 0) goto LAB_0043a275;
  }
  *(undefined4 *)(DAT_005a64c8 + 4) = *(undefined4 *)(iVar1 + 0x14);
LAB_0043a275:
  FUN_004ace10();
  return;
}

