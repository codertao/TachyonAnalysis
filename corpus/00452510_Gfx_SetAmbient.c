
/* sweep: guess */

void Gfx_SetAmbient(uint param_1,uint param_2,uint param_3)

{
  Gfx_SetPalCurve((param_1 >> 1) + 0x40,(param_2 >> 2) + 0x60,(param_3 >> 1) + 0x40);
  return;
}

