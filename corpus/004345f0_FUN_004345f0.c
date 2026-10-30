
bool FUN_004345f0(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    return true;
  }
  iVar1 = FUN_004345b0(*(int *)(param_1 + 0xf8) + param_2 * 0x20);
  if (iVar1 == 0) {
    return true;
  }
  return *(int *)(iVar1 + 4) == 0;
}

