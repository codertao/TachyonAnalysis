
/* sweep */

void Bmp_ReadPixels(undefined4 param_1)

{
  if (DAT_0060315c < 9) {
    Bmp_ReadHeader();
    Bmp_Read8(param_1);
    Bmp_ReadPalette();
    return;
  }
  if (DAT_0060315c == 0x10) {
    Bmp_ReadHeader();
    Bmp_ReadPalette();
    Bmp_Read16(param_1);
    return;
  }
  if (DAT_0060315c == 0x20) {
    Bmp_ReadHeader();
    Bmp_ReadPalette();
    Bmp_Read32(param_1);
  }
  return;
}

