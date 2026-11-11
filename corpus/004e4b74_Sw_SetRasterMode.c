
/* (mode) span-routine set 0x4e4860: 1 0x521fd0, 2 0x523140 (+flag), 3 0x505180 (16 bpp), 5 0x502350
   (32 bpp, +flag); Sw_ResetRasterState */

void __cdecl Sw_SetRasterMode(int mode)

{
  if (mode == 1) {
    DAT_004e4860 = &PTR_LAB_00521fd0;
    DAT_004e4864 = 0;
  }
  else if (mode == 2) {
    DAT_004e4860 = &PTR_LAB_00523140;
    DAT_004e4864 = 1;
  }
  else if (mode == 3) {
    DAT_004e4860 = &PTR_LAB_00505180;
    DAT_004e4864 = 0;
  }
  else if (mode == 5) {
    DAT_004e4860 = &PTR_LAB_00502350;
    DAT_004e4864 = 1;
  }
  Sw_ResetRasterState();
  return;
}

