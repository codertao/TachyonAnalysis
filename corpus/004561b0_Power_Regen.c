
/* flags 4 laser, 2 shields (both pools, 0x10 = even from 0), 8 burner (1 = burner in use); amount =
   g_PowerRegenLevelScale[level] * rate */

void Power_Regen(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (10 < param_4) {
    param_4 = 10;
  }
  if ((param_3 & 4) != 0) {
    *param_1 = *param_1 +
               (((param_1[1] << 1) >> 0xc) * *(int *)(&g_PowerRegenLevelScale + param_4 * 4) >> 8);
    iVar1 = Power_GetLaserMax(param_1,param_2);
    if (iVar1 < *param_1) {
      iVar1 = Power_GetLaserMax(param_1,param_2);
      *param_1 = iVar1;
    }
  }
  if ((param_3 & 2) != 0) {
    iVar1 = Shield_GetMax(param_1,param_2);
    if (((param_3 & 0x10) != 0) || (param_1[2] != 0)) {
      param_1[2] = param_1[2] +
                   (*(int *)(&g_PowerRegenLevelScale + param_4 * 4) * (param_1[3] >> 0xb) >> 8);
    }
    if (iVar1 < param_1[2]) {
      param_1[2] = iVar1;
    }
    if (((param_3 & 0x10) != 0) || (param_1[4] != 0)) {
      param_1[4] = param_1[4] +
                   (*(int *)(&g_PowerRegenLevelScale + param_4 * 4) * (param_1[5] >> 0xb) >> 8);
    }
    if (iVar1 < param_1[4]) {
      param_1[4] = iVar1;
    }
  }
  if ((((param_3 & 8) != 0) && (*(int *)(param_2 + 0x30) != 0)) && ((param_3 & 1) == 0)) {
    param_1[6] = param_1[6] +
                 (*(int *)(&g_PowerRegenLevelScale + param_4 * 4) * (param_1[7] >> 10) >> 8);
    iVar1 = Power_GetBurnerMax(param_1,param_2);
    if (iVar1 < param_1[6]) {
      iVar1 = Power_GetBurnerMax(param_1,param_2);
      param_1[6] = iVar1;
    }
  }
  return;
}

