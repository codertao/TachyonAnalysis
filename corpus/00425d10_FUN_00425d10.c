
void FUN_00425d10(int param_1)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    uVar1 = FUN_0048e350();
    *(uint *)(param_1 + 0x2c) = (uVar1 & 0x7f) + 0x80;
    uVar1 = FUN_0048e350();
    *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + ((uVar1 & 0x3fff) - 0x2000);
    *(undefined2 *)(param_1 + 0x32) = 0xffff;
    FUN_004b19f0(param_1 + 0x18);
  }
  return;
}

