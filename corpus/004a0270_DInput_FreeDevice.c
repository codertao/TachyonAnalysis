
/* sweep */

void DInput_FreeDevice(int *param_1)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    if (DAT_00564000 == param_1) {
      DInput_SelectDevice(0);
    }
    if ((int *)param_1[1] == (int *)0x0) {
      DAT_00563ff4 = *param_1;
    }
    else {
      *(int *)param_1[1] = *param_1;
    }
    if (*param_1 == 0) {
      DAT_00563ff8 = param_1[1];
    }
    else {
      *(int *)(*param_1 + 4) = param_1[1];
    }
    DAT_00563ffc = DAT_00563ffc + -1;
    piVar1 = (int *)param_1[7];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[7] = 0;
    }
    piVar1 = (int *)param_1[8];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[8] = 0;
    }
    piVar1 = (int *)param_1[9];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[9] = 0;
    }
    piVar1 = (int *)param_1[10];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[10] = 0;
    }
    piVar1 = (int *)param_1[0xb];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
      param_1[0xb] = 0;
    }
    piVar1 = (int *)param_1[6];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
      (**(code **)(*(int *)param_1[6] + 8))((int *)param_1[6]);
      param_1[6] = 0;
    }
    _free(param_1);
  }
  return;
}

