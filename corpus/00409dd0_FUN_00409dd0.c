
void FUN_00409dd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_3 != 0) {
    FUN_004b21c0(param_3 + 0x18);
    FUN_0048e720(param_2 + 0x10,DAT_005b9810 + 0x4c,param_1 + 0x4c);
    iVar2 = FUN_004b1db0(*(undefined4 *)(param_3 + 0x58),*(undefined4 *)(param_2 + 0x20));
    piVar1 = *(int **)(iVar2 + 0xc);
    *(int *)(param_1 + 0x34) = *(int *)(param_3 + 0x34) + *piVar1;
    *(int *)(param_1 + 0x38) = piVar1[1] + *(int *)(param_3 + 0x38);
    *(int *)(param_1 + 0x3c) = piVar1[2] + *(int *)(param_3 + 0x3c);
    FUN_004b21c0(param_1 + 0x18);
    iVar2 = FUN_004b1db0(*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_2 + 0x24));
    piVar1 = *(int **)(iVar2 + 0xc);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - *piVar1;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - piVar1[1];
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - piVar1[2];
  }
  return;
}

