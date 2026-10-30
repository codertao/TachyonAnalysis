
void FUN_0042e540(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x34) = 0x6d600000;
  *(undefined4 *)(param_1 + 0x38) = 0x6d600000;
  *(int *)(param_1 + 0x3c) = *(int *)(DAT_005b0080 + 0x30) << 1;
  uVar1 = FUN_0048e350();
  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + ((uVar1 & 0x3fffff) - 0x200000);
  uVar1 = FUN_0048e350();
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + ((uVar1 & 0x3fffff) - 0x200000);
  uVar1 = FUN_0048e350();
  *(undefined4 *)(param_1 + 0x1c) = 0x8000;
  *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar1 % 0x7d00000;
  uVar1 = FUN_0048e350();
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uVar1 & 0x7fff);
  return;
}

