
void FUN_00498590(int param_1)

{
  uint uVar1;
  
  uVar1 = FUN_0048e350();
  *(code **)(param_1 + 0x68) = FUN_00498550;
  *(uint *)(param_1 + 0xd4) = uVar1 % 0x32;
  return;
}

