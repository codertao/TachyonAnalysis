
/* (pal) per bpp */

void __cdecl call_Font_SetPalette(byte *pal)

{
  if (DAT_00604488 == 0x10) {
    Font_SetPalette16(pal);
  }
  else if (DAT_00604488 == 0x20) {
    Font_SetPalette32(pal);
  }
  return;
}

