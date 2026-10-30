
void FUN_00421230(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00668fd8;
  uVar2 = *(int *)(param_1 + 0xf0) + 1;
  *(short *)(param_1 + 0x30) = (short)(uVar2 >> 2);
  *(uint *)(param_1 + 0xf0) = uVar2;
  FUN_004b1890(*(undefined4 *)(param_1 + 0x90));
  FUN_004b19f0(param_1 + 0x18);
  FUN_004b1890(uVar1);
  return;
}

