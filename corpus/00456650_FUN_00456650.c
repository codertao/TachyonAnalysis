
uint FUN_00456650(uint param_1,int param_2)

{
  if (param_2 != 10) {
    return param_1;
  }
  if (DAT_005b2d74 == 0) {
    param_1 = param_1 >> 1;
  }
  else if (DAT_005b2d74 == 2) {
    return param_1 * 2;
  }
  return param_1;
}

