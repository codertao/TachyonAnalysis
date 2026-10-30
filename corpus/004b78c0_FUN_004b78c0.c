
void FUN_004b78c0(int param_1,int *param_2)

{
  *(int *)(param_1 + 8) = *param_2;
  *param_2 = param_1;
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(*(int *)(param_1 + 8) + 4) = param_1;
  }
  return;
}

