
void FUN_004031e0(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(int *)(param_1 + 0x90) == 0) {
    iVar1 = FUN_004015e0(param_1);
    *(int *)(param_1 + 0x90) = iVar1;
    if (iVar1 == 0) {
      FUN_00401e20(param_1);
      return;
    }
    *(short *)(iVar1 + 200) = *(short *)(iVar1 + 200) + 1;
  }
  FUN_00401080(param_1,1);
  return;
}

