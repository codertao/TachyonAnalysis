
void FUN_004986c0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 200) + -1;
  *(int *)(param_1 + 200) = iVar1;
  if (iVar1 < 1) {
    if (*(int *)(param_1 + 0xcc) == 0) {
      FUN_0045d020(param_1,*(int *)(param_1 + 100) + 0x14);
    }
    FUN_0041b950(param_1);
    FUN_0041b9b0(param_1);
  }
  return;
}

