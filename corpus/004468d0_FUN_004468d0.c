
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004468d0(char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  
  uVar3 = DAT_005a6810;
  FUN_00452180(1);
  DAT_005a62d0 = 0;
  DAT_005a62d4 = 0;
  cVar1 = *param_1;
  for (; ((cVar1 != '\0' && (iVar2 = *(int *)(param_1 + 0xa4), iVar2 != 0)) &&
         (*(int *)(param_1 + 0xa8) != 0)); param_1 = param_1 + 0xac) {
    if (*(int *)(iVar2 + 0x1650) != 0) {
      FUN_004ad9c0(*(int *)(iVar2 + 0x1650),0);
    }
    if ((iVar2 != -0x50) && (*(int *)(iVar2 + 0x60) != 0)) {
      *(undefined4 *)(iVar2 + 0x6c) = 0x20008;
      local_10 = (int)(longlong)
                      ROUND((float)(*(int *)(*(int *)(param_1 + 0xa8) + 0x60) + -5) *
                            *(float *)(param_1 + 0x8c) + _DAT_0052e9a0);
      DAT_005a62d8 = (uint)((longlong)*(int *)(param_1 + 0x80) * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)*(int *)(param_1 + 0x80) * (longlong)DAT_005a67e4)
                          >> 0x20) << 0x10;
      DAT_005a62dc = (uint)((longlong)*(int *)(param_1 + 0x84) * (longlong)DAT_005a67e4) >> 0x10 |
                     (int)((ulonglong)((longlong)*(int *)(param_1 + 0x84) * (longlong)DAT_005a67e4)
                          >> 0x20) << 0x10;
      DAT_005a62e0 = DAT_005a67e4 * local_10 + 0xffff >> 0x10;
      DAT_005a64cc = local_10;
      DAT_005a62e4 = *(int *)(*(int *)(param_1 + 0xa8) + 100) * DAT_005a67e4 + 0xffff >> 0x10;
      DAT_005a64d0 = *(undefined4 *)(*(int *)(param_1 + 0xa8) + 100);
      DAT_005a64c0 = *(undefined4 *)(iVar2 + 0x6c);
      DAT_005a64c8 = iVar2 + 0x60;
      *(uint *)(iVar2 + 100) =
           (*(int *)(param_1 + 0x98) << 8 | *(uint *)(param_1 + 0x9c)) << 8 |
           *(uint *)(param_1 + 0xa0);
    }
    FUN_004ace10();
    cVar1 = param_1[0xac];
  }
  FUN_00452180(uVar3);
  return;
}

