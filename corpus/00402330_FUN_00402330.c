
void FUN_00402330(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (iVar1 == 0) {
    FUN_00401e20(param_1);
    return;
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    iVar2 = FUN_0048e440(param_1 + 0x34,iVar1 + 0x34);
    if (iVar2 < 0x28a000) {
      FUN_004022a0(param_1,iVar1);
    }
    if (iVar2 < 0x1770000) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      *(undefined1 **)(param_1 + 0x6c) = &LAB_00404aa0;
    }
    if (iVar2 < 0x1b58000) {
      *(short *)(param_1 + 0x312) = *(short *)(param_1 + 0xf4) * -0xcc + 0x400;
    }
    else {
      *(undefined2 *)(param_1 + 0x312) = 0x400;
    }
    FUN_0040f380(param_1 + 0x34,iVar1 + 0x34,param_1 + 0xdc);
  }
  return;
}

