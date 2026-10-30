
void FUN_004206b0(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    FUN_004acf80((int *)(param_1 + 0x120));
    iVar1 = *(int *)(param_1 + 0x120);
    if (iVar1 != 0) {
      FUN_0049c530(iVar1);
    }
    FUN_0049c530(param_1);
  }
  return;
}

