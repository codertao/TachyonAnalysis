
/* sweep */

void HudBlink_Draw(undefined4 *param_1)

{
  if (param_1[2] != 0) {
    if (param_1[8] == 0) {
      HudBlink_Reset(param_1,0xffffffff);
    }
    Text_DrawAligned(param_1[2],param_1[9],*param_1,param_1[1],param_1[3],(int)param_1[6] >> 8,
                     param_1[5],param_1[4]);
  }
  return;
}

