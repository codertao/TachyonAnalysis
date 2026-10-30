
int FUN_004b01b0(int param_1)

{
  if (*(short *)(param_1 + 0xc) != 0) {
    return *(int *)(param_1 + 0x18) + 0x31c + param_1;
  }
  return *(int *)(param_1 + 0x18) + 0x1c + param_1;
}

