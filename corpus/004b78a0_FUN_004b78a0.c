
void FUN_004b78a0(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 4);
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  return;
}

