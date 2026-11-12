
/* sweep: guess */

uint Credits_Format(int param_1,uint param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  param_2 = (uint)(param_1 * 100) / param_2;
  if ((param_1 != 0) && (param_2 == 0)) {
    param_2 = 1;
  }
  return param_2;
}

