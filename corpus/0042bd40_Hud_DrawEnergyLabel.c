
/* sweep */

void Hud_DrawEnergyLabel(undefined4 *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  if ((param_3 <= param_2) || (param_4 == 0)) {
    param_5 = param_1[4];
  }
  Hud_DrawStringId(*param_1,param_1[3],param_1[1],param_1[2],
                   (*(int *)(param_5 + 0x1c) << 8 | *(uint *)(param_5 + 0x20)) << 8 |
                   *(uint *)(param_5 + 0x24),0,param_1[5]);
  return;
}

