
/* (alt) 32 bpp -> mode 5, 16 bpp -> 3, else alt ? 2 : 1 */

void __cdecl Sw_SelectRasterizer(int alt)

{
  if (DAT_00604488 == 0x20) {
    Sw_SetRasterMode(5);
  }
  else if (DAT_00604488 == 0x10) {
    Sw_SetRasterMode(3);
  }
  else if (alt == 0) {
    Sw_SetRasterMode(1);
  }
  else {
    Sw_SetRasterMode(2);
  }
  return;
}

