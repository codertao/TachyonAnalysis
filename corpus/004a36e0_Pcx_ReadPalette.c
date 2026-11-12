
/* sweep */

void Pcx_ReadPalette(void)

{
  Fs_Seek(0xfffffd00,2);
  Fs_Read(&DAT_00602e00,0x300);
  return;
}

