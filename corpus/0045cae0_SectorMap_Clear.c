
/* sweep */

void SectorMap_Clear(undefined4 *param_1)

{
  clr_bytes(*param_1,0x10000);
  clr_bytes(param_1[1],0x4000);
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  return;
}

