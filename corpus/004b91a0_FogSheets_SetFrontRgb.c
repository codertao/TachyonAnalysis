
/* refine: FRONT_RGB 0x55f1ec (sheet tint) */

void FogSheets_SetFrontRgb(int param_1,uint param_2,uint param_3)

{
  DAT_0055f1ec = (param_1 << 8 | param_2) << 8 | param_3;
  return;
}

