
void FUN_00496030(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xf4);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar1 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0xcc);
  *(int *)(param_1 + 0xd4) = *(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xec);
  iVar2 = *(int *)(param_1 + 0xec) + -0x80;
  iVar1 = *(int *)(param_1 + 0xcc) + -0x4e2;
  *(int *)(param_1 + 0xec) = iVar2;
  *(int *)(param_1 + 0xcc) = iVar1;
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 0xd4) < 0) {
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (iVar2 < 0x10000) {
    *(undefined4 *)(param_1 + 0xec) = 0x10000;
  }
  iVar1 = *(int *)(param_1 + 0xd4) >> 0x10;
  *(int *)(param_1 + 0x2c) = iVar1;
  if (0xff < iVar1) {
    *(undefined4 *)(param_1 + 0x2c) = 0xff;
  }
  if (*(int *)(param_1 + 0x2c) == 0) {
    FUN_0041b8c0(param_1);
  }
  return;
}

