
void FUN_00422f80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00668fd8;
  *(short *)(param_1 + 0x30) = (short)(*(uint *)(param_1 + 0x90) >> 3);
  FUN_004b1890(*(uint *)(param_1 + 0x90));
  if (*(char *)(param_1 + 0x7f) != '\0') {
    FUN_00420e10(param_1,1);
    FUN_004b1890(uVar1);
    return;
  }
  FUN_004b19f0(param_1 + 0x18);
  FUN_004b1890(uVar1);
  return;
}

