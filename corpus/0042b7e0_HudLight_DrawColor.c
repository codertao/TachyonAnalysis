
/* sweep */

void HudLight_DrawColor(int *param_1,int param_2,uint param_3,uint param_4)

{
  if (*param_1 != 0) {
    *(uint *)(*param_1 + 4) = (param_2 << 8 | param_3) << 8 | param_4;
    Hud_DrawSprite(*param_1,param_1[1],param_1[2],0,0xffffffff,param_1[3],param_1[4],param_1[5],
                   param_1[6]);
  }
  return;
}

