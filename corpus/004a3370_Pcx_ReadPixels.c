
/* sweep */

void Pcx_ReadPixels(undefined4 param_1)

{
  if (DAT_0060315c == 8) {
    Pcx_ReadHeader();
    Pcx_Read8(param_1);
    Pcx_ReadPalette();
    return;
  }
  if (DAT_0060315c == 0x10) {
    Pcx_ReadHeader();
    Pcx_ReadPalette();
    Pcx_Read16(param_1);
    return;
  }
  if (DAT_0060315c == 0x20) {
    Pcx_ReadHeader();
    Pcx_ReadPalette();
    Pcx_Read32(param_1);
  }
  return;
}

