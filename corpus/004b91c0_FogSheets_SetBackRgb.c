
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: BACK_RGB 0x55f1f0 (no reader) */

void FogSheets_SetBackRgb(int param_1,uint param_2,uint param_3)

{
  _DAT_0055f1f0 = (param_1 << 8 | param_2) << 8 | param_3;
  return;
}

