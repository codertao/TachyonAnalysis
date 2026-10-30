
void FUN_004b7f10(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  *(undefined4 *)(*(int *)(param_2 + 0x7c) + *(int *)(param_2 + 0x80) * 4) = param_1;
  uVar1 = *(int *)(param_2 + 0x80) + 1;
  *(uint *)(param_2 + 0x80) = uVar1;
  if (0x7f < uVar1) {
    *(undefined4 *)(param_2 + 0x80) = 0;
  }
  return;
}

