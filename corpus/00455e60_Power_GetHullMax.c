
/* def+0x20 * g_HullLevelScale[level] >> 8 */

int Power_GetHullMax(undefined4 param_1,int param_2,uint param_3)

{
  if (10 < param_3) {
    param_3 = 10;
  }
  return *(int *)(&g_HullLevelScale + param_3 * 4) * *(int *)(param_2 + 0x20) >> 8;
}

