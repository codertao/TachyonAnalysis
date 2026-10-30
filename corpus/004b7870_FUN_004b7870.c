
int FUN_004b7870(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 8);
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

