
void FUN_004405b0(int param_1)

{
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_0049c530(*(int *)(param_1 + 0x30));
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  return;
}

