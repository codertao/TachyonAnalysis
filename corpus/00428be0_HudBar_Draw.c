
/* sweep: style switch at +0x2c */

void HudBar_Draw(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    HudBar_DrawLeftToRight(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  case 1:
    HudBar_DrawRightToLeft(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  case 2:
    HudBar_DrawCentered(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  case 3:
    HudBar_DrawRadialB(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  case 4:
    HudBar_DrawRadialA(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  case 5:
    HudBar_DrawBottomUp(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}

