
/* sweep */

void PlayerList_FormatEntry(int param_1,char *param_2,undefined4 *param_3)

{
  *param_3 = 0x40ffff;
  if (*(int *)(param_1 + 0x40) == 0) {
    *(undefined4 *)param_2 = s____________0054848c._0_4_;
    *(undefined4 *)(param_2 + 4) = s____________0054848c._4_4_;
    *(undefined2 *)(param_2 + 8) = s____________0054848c._8_2_;
    param_2[10] = s____________0054848c[10];
    return;
  }
  if (*(code **)(DAT_00590238 + 0x4c) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x4c))(param_1,param_2,param_3);
    return;
  }
  str_sprintf(param_2,&DAT_00536768,param_1);
  return;
}

