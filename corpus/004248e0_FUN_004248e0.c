
void FUN_004248e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  iVar1 = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  *(int *)(param_1 + 0x38) = iVar1;
  *(int *)(param_1 + 0x34) = iVar2;
  iVar3 = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0x3c) = iVar3;
  *(int *)(param_1 + 0x34) = iVar2 + DAT_005b1ebc;
  *(int *)(param_1 + 0x38) = iVar1 + DAT_005b1ec0;
  *(int *)(param_1 + 0x3c) = iVar3 + DAT_005b1ec4;
  return;
}

