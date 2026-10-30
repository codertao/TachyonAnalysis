
void FUN_004a23e0(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    if (param_1 == DAT_005640d0) {
      FUN_004a1d80(0);
    }
    if ((int *)param_1[1] == (int *)0x0) {
      DAT_005640c4 = *param_1;
    }
    else {
      *(int *)param_1[1] = *param_1;
    }
    if (*param_1 == 0) {
      DAT_005640c8 = param_1[1];
    }
    else {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    DAT_005640cc = DAT_005640cc + -1;
    piVar1 = (int *)param_1[0x19];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0x19] = 0;
    }
    FUN_004bd512(param_1);
  }
  return;
}

