
undefined4
FUN_00497a60(int param_1,int param_2,int param_3,undefined4 *param_4,int *param_5,int param_6)

{
  if (param_3 == 1) {
    if (((param_2 == 0) && (*(int *)(param_1 + 0x58) <= *param_5)) &&
       (*(int *)(param_1 + 0x40) + *(int *)(param_6 + 0x20) < **(int **)(param_6 + 0x1c))) {
      *param_4 = 0x10000;
      *(undefined4 *)(param_6 + 0x30) = 1;
      FUN_00427ff0(0,1);
      FUN_0042b9e0(1,0,0x80,0x80);
      return 1;
    }
  }
  else if (param_3 == 0) {
    *(undefined4 *)(param_6 + 0x30) = 0;
    FUN_00427ff0(0,0);
    FUN_0042b9e0(0,0,0,0);
    return 2;
  }
  if (*(int *)(param_6 + 0x30) != 0) {
    *param_5 = *param_5 - *(int *)(param_1 + 0x58);
    if (*param_5 < 0) {
      *param_5 = 0;
    }
    if (*param_5 == 0) {
      return 2;
    }
  }
  return 0;
}

