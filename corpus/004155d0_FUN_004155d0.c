
void FUN_004155d0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0xac);
    *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0xb0);
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0xb4);
  }
  else {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0xa0);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar1 + 0xa4);
    *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar1 + 0xa8);
  }
  if (*(int *)(param_1 + 200) != 0) {
    FUN_00466290(param_1);
  }
  return;
}

