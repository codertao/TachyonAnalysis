
/* sweep: guess */

void WeaponDefs_RangeDps(int param_1,int *param_2,int *param_3,int *param_4)

{
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  if (param_1 != 0) {
    *param_2 = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x14) >> 8;
    *param_3 = *(int *)(param_1 + 0x18) * *(int *)(param_1 + 0x14) >> 8;
    *param_4 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x14) >> 8;
  }
  return;
}

