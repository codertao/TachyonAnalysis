
/* (pixels, count) Pal_RemapPixels(0x603180, 0x602e00, ...): texture load */

void Pal_RemapToGamePalette(byte *param_1,int param_2)

{
  Pal_RemapPixels((byte *)&DAT_00603180,(byte *)&DAT_00602e00,param_1,param_2);
  return;
}

