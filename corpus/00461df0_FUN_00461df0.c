
void FUN_00461df0(undefined4 param_1,undefined2 *param_2,short *param_3)

{
  short sVar1;
  
  if (*(int *)(DAT_005b1dc4 + 0x74) != 0) {
    *param_2 = 8;
    param_2[1] = 8;
    *(undefined4 *)(param_2 + 2) = 0;
    sVar1 = (**(code **)(DAT_005b1dc4 + 0x74))(param_1,param_2,param_2 + 4);
    *param_3 = *param_3 + 1;
    param_2[1] = sVar1 - (short)param_2;
  }
  return;
}

