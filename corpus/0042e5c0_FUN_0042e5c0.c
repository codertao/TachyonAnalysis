
void FUN_0042e5c0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(DAT_005b0080 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = 0x6d600000;
  *(undefined4 *)(param_1 + 0x38) = 0x6d600000;
  *(undefined4 *)(param_1 + 0x3c) = 0xfe0c0000;
  uVar2 = global_bad_shift_rng();
  *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + ((uVar2 & 0x3fffff) - 0x200000);
  uVar2 = global_bad_shift_rng();
  *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + ((uVar2 & 0x3fffff) - 0x200000);
  uVar2 = global_bad_shift_rng();
  *(undefined4 *)(param_1 + 0x1c) = 0x8000;
  *(uint *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + uVar2 % (iVar1 * 2 + 0x9c40000U);
  uVar2 = global_bad_shift_rng();
  *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (uVar2 & 0x7fff);
  return;
}

