
undefined4 FUN_004263a0(int param_1)

{
  if ((*(byte *)(param_1 + 0xe4) & 1) != 0) {
    return 0;
  }
  FUN_00426370(param_1);
  *(uint *)(param_1 + 0xe4) = *(uint *)(param_1 + 0xe4) | 1;
  return 1;
}

