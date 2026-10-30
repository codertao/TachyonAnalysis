
void FUN_004adda0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  *(int *)(param_1 + 0x10) = param_2 << 7;
  *(int *)(param_1 + 0x14) = param_3 << 7;
  *(int *)(param_1 + 0x18) = param_4 << 7;
  *(int *)(param_1 + 0x2c) = param_5;
  *(int *)(param_1 + 0x28) = param_4;
  *(int *)(param_1 + 0x1c) = param_5 << 7;
  *(int *)(param_1 + 0x20) = param_2;
  *(int *)(param_1 + 0x24) = param_3;
  return;
}

