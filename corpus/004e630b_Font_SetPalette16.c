
/* (pal@ESI) via Pix_PaletteToNative into 0x4e56bc */

void __cdecl Font_SetPalette16(byte *pal)

{
  Pix_PaletteToNative(pal,&DAT_004e56bc);
  return;
}

