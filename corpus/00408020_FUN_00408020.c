
void FUN_00408020(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 3) == 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    uVar4 = FUN_0048e440((int *)(param_1 + 0x34),DAT_005b3300 + 0x34);
    uVar2 = *(uint *)(iVar1 + 0xc0);
    if (uVar4 < uVar2) {
      local_8 = uVar2 - uVar4;
      lVar3 = (longlong)local_8 * (longlong)*(int *)(iVar1 + 0xc4);
      local_14 = *(int *)(param_1 + 0x34) - *(int *)(DAT_005b3300 + 0x34);
      local_10 = *(int *)(param_1 + 0x38) - *(int *)(DAT_005b3300 + 0x38);
      local_c = *(int *)(param_1 + 0x3c) - *(int *)(DAT_005b3300 + 0x3c);
      FUN_0048e590(&local_14,
                   (int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) >> 0x10);
      *(int *)(DAT_005b3300 + 0xa0) = *(int *)(DAT_005b3300 + 0xa0) + local_14;
      *(int *)(DAT_005b3300 + 0xa4) = *(int *)(DAT_005b3300 + 0xa4) + local_10;
      *(int *)(DAT_005b3300 + 0xa8) = *(int *)(DAT_005b3300 + 0xa8) + local_c;
      FUN_0042e1d0(4);
    }
  }
  return;
}

