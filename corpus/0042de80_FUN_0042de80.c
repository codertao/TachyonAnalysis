
void FUN_0042de80(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = *(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x18) = iVar1;
    uVar2 = *(int *)(param_1 + 0x28) + 1;
    *(uint *)(param_1 + 0x28) = uVar2;
    if (iVar1 < 0xff0000) {
      if (iVar1 < 0x400001) {
        *(undefined4 *)(param_1 + 0x18) = 0x400000;
        *(undefined4 *)(param_1 + 0x1c) = 0xf0000;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x18) = 0xff0000;
      *(undefined4 *)(param_1 + 0x1c) = 0xfffb0000;
      if ((uVar2 < 0xfa) && (*(int *)(param_1 + 0x30) != 0)) {
        FUN_00466590(0xb,0,0,0xff);
        return;
      }
    }
  }
  return;
}

