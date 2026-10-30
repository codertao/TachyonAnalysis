
void FUN_00495250(int param_1)

{
  int iVar1;
  uint uVar2;
  
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(int *)(param_1 + 0xa0);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + *(int *)(param_1 + 0xa4);
  iVar1 = *(int *)(param_1 + 0xd4) + -1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0xa8);
  *(int *)(param_1 + 0xd4) = iVar1;
  uVar2 = 0x13880000;
  if ((iVar1 < *(int *)(*(int *)(param_1 + 0xdc) + 0x3c) + -0x32) &&
     (((**(uint **)(*(int *)(param_1 + 100) + 0x1c) ^ *(uint *)(param_1 + 0xd0)) & 7) == 0)) {
    iVar1 = FUN_0048b2b0(param_1,0xff,0,0x2bc000,*(undefined4 *)(param_1 + 200),3);
    if (iVar1 != 0) {
      uVar2 = FUN_0048e440((int *)(param_1 + 0x34),iVar1 + 0x34);
    }
  }
  if ((*(int *)(param_1 + 0xd4) == 0) || (uVar2 < 0x2bc000)) {
    FUN_004941b0(param_1);
  }
  return;
}

