
void FUN_0042def0(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x2c) == 0) {
    DAT_005b1b74 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    uVar1 = *(int *)(param_1 + 0x28) + 1;
    *(int *)(param_1 + 0x18) = iVar2;
    *(uint *)(param_1 + 0x28) = uVar1;
    if (iVar2 < 0xff0000) {
      if (iVar2 < 0x400001) {
        *(undefined4 *)(param_1 + 0x18) = 0x400000;
        *(undefined4 *)(param_1 + 0x1c) = 0xf0000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0xff0000;
      *(undefined4 *)(param_1 + 0x1c) = 0xfffb0000;
      if (uVar1 < 0xfa) {
        FUN_00466590(0xb,0,0,0xff);
      }
    }
    if (*(int *)(param_1 + 0x2c) != 0) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    }
  }
  return;
}

