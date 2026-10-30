
void FUN_00401980(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x108) == 0) {
    *(undefined2 *)(param_1 + 0x312) = 0x3cc;
  }
  else {
    *(short *)(param_1 + 0x312) = (short)*(int *)(param_1 + 0x108);
  }
  *(undefined1 *)(param_1 + 0x327) = 0;
  *(undefined1 *)(param_1 + 0x326) = 0;
  if (((*(uint *)(param_1 + 800) ^ DAT_005897e4) & 0xf) == 0) {
    uVar1 = FUN_0048e440(param_1 + 0x34,*(undefined4 *)(param_1 + 0xf0));
    if ((uVar1 < 0x3e8000) &&
       (FUN_004018a0(param_1,param_1 + 0xdc), *(code **)(param_1 + 0x304) != FUN_00401980)) {
      return;
    }
    FUN_0040f380(param_1 + 0x34,*(undefined4 *)(param_1 + 0xf0),param_1 + 0xdc);
    if (*(int *)(param_1 + 0x90) == 0) {
      iVar2 = FUN_004015e0(param_1);
      *(int *)(param_1 + 0x90) = iVar2;
      *(undefined4 *)(param_1 + 0x328) = 0;
      if (iVar2 != 0) {
        *(short *)(iVar2 + 200) = *(short *)(iVar2 + 200) + 1;
        FUN_00401080(param_1,1);
        FUN_00401f80(param_1);
      }
    }
  }
  return;
}

