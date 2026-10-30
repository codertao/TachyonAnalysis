
void FUN_00492d50(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  uVar1 = *(undefined4 *)(param_1 + 0x4c);
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  uVar3 = *(undefined4 *)(param_1 + 0x54);
  FUN_004b19f0(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  return;
}

