
void FUN_004655f0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x90) == param_2) {
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  if (*(int *)(param_1 + 0x334) == param_2) {
    *(undefined4 *)(param_1 + 0x334) = 0;
  }
  if (*(int *)(param_1 + 0x354) == param_2) {
    *(undefined4 *)(param_1 + 0x354) = 0;
  }
  return;
}

