
void FUN_00495530(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 0x400;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 0x400;
  iVar1 = *(int *)(param_1 + 0x2c) + -8;
  iVar2 = *(int *)(param_1 + 0xd4) + -6;
  *(int *)(param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 0xd4) = iVar2;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(int *)(param_1 + 0xd4) == 0) {
    FUN_0041b8c0(param_1);
  }
  return;
}

