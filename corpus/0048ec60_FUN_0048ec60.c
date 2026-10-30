
int FUN_0048ec60(int param_1,uint param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  param_2 = (uint)(param_1 * 10) / param_2;
  if ((param_1 != 0) && (param_2 == 0)) {
    param_2 = 1;
  }
  return param_2 * 10;
}

