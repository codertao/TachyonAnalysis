
void FUN_00421370(int param_1)

{
  uint uVar1;
  int iVar2;
  
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) + -1;
  if (*(int *)(param_1 + 200) != 0) {
    FUN_00466290(param_1);
  }
  if (*(int *)(param_1 + 0xd4) < 1) {
    uVar1 = FUN_0048e440(param_1 + 0x34,&DAT_005b9600);
    if (uVar1 < 0x4000000) {
      FUN_004b19a0(param_1 + 0x18);
      iVar2 = FUN_004b3bf0(param_1 + 0x18);
      if (iVar2 != 0) goto LAB_004213de;
    }
    FUN_00421320(param_1);
    return;
  }
LAB_004213de:
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0xe4);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xe0);
  *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0xe8);
  if ((*(int *)(param_1 + 0x104) != 0) && (((byte)DAT_005b3304 & 1) == 0)) {
    FUN_00421130(param_1);
  }
  return;
}

