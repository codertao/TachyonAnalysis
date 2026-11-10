
/* rate += step; > 2.0 wraps to 0, < 0 wraps to 2.0 */

void Power_StepRate(int param_1,int param_2)

{
  param_2 = *(int *)(param_1 + 4) + param_2;
  *(int *)(param_1 + 4) = param_2;
  if (0x20000 < param_2) {
    *(undefined4 *)(param_1 + 4) = 0;
    return;
  }
  if (param_2 < 0) {
    *(undefined4 *)(param_1 + 4) = 0x20000;
  }
  return;
}

