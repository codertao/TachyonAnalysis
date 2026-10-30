
void FUN_004950a0(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xdc);
  iVar3 = *(int *)(param_1 + 0x90);
  if (iVar3 != 0) {
    FUN_00494db0(param_1,iVar3 + 0x34,iVar3 + 0x4c,*(undefined4 *)(iVar2 + 0x54),
                 *(undefined4 *)(param_1 + 0xec));
    if (*(short *)(iVar3 + 0x76) == 1) {
      puVar1 = (uint *)(*(int *)(iVar3 + 0xdc) + 0x1c4);
      *puVar1 = *puVar1 | 1;
    }
    if ((0x400000 < (int)((DAT_005656bc ^ (int)DAT_005656bc >> 0x1f) - ((int)DAT_005656bc >> 0x1f)))
       || (0x400000 <
           (int)((DAT_005656c0 ^ (int)DAT_005656c0 >> 0x1f) - ((int)DAT_005656c0 >> 0x1f)))) {
      FUN_00494fb0(param_1);
    }
  }
  if (*(int *)(param_1 + 0x90) != 0) {
    FUN_00494fe0(param_1);
  }
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  iVar3 = *(int *)(param_1 + 0xd4) + -1;
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar3;
  if (iVar3 == 0) {
    if (*(code **)(param_1 + 0x118) != (code *)0x0) {
      (**(code **)(param_1 + 0x118))(param_1);
    }
    FUN_00494370(param_1);
    return;
  }
  iVar3 = *(int *)(param_1 + 0xec) + *(int *)(iVar2 + 0x8c);
  *(int *)(param_1 + 0xec) = iVar3;
  if (*(int *)(iVar2 + 0x88) < iVar3) {
    *(int *)(param_1 + 0xec) = *(int *)(iVar2 + 0x88);
  }
  return;
}

