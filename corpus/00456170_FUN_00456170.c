
void FUN_00456170(int *param_1,byte param_2,byte param_3)

{
  int *piVar1;
  
  if (((param_3 & 8) != 0) && ((param_2 & 2) != 0)) {
    piVar1 = param_1 + 6;
    *piVar1 = *piVar1 + -10;
    if (*piVar1 < 0) {
      param_1[6] = 0;
    }
  }
  if ((((param_3 & 4) != 0) && ((param_2 & 2) != 0)) && (*param_1 = *param_1 + -10, *param_1 < 0)) {
    *param_1 = 0;
  }
  return;
}

