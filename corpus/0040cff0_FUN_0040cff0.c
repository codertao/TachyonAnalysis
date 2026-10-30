
void FUN_0040cff0(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = *(int *)(param_1 + 0x104) + param_2;
  *(int *)(param_1 + 0x104) = param_2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x8c) + 0x6c0);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x104) = iVar1;
  }
  return;
}

