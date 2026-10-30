
int FUN_004b08a0(int param_1)

{
  return (*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x34) * 2 + *(int *)(param_1 + 0x38)) * 0x10
         + *(int *)(param_1 + 0x30) * 0x2c + *(int *)(param_1 + 0x2c) * 0x1c + 0x5c +
         *(int *)(param_1 + 0x3c) * 0xc;
}

