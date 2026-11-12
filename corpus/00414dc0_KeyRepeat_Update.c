
/* sweep: guess */

void KeyRepeat_Update(undefined4 *param_1)

{
  if ((uint)param_1[9] <= DAT_006039e8) {
    param_1[9] = param_1[10] + DAT_006039e8;
    param_1[8] = 1;
    if ((*(byte *)(param_1 + 7) & 1) != 0) {
      KeyRepeat_Fire(param_1,2,*param_1,param_1[1]);
    }
    if ((*(byte *)(param_1 + 7) & 2) != 0) {
      KeyRepeat_Fire(param_1,8,*param_1,param_1[1]);
    }
    param_1[8] = 0;
  }
  return;
}

