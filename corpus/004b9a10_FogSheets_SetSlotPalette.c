
/* refine */

void FogSheets_SetSlotPalette(int param_1,undefined4 param_2)

{
  (&DAT_006c90dc)[param_1 * 10] = param_2;
  (&DAT_006c961c)[param_1 * 10] = param_2;
  Pal_Remap(param_2,0x80,0x80,0x80,0x80,0x80);
  return;
}

