
int FUN_004b0bd0(int param_1)

{
  return *(int *)(param_1 + 4) +
         (*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc) * 6 + *(int *)(param_1 + 8)) * 0xc;
}

