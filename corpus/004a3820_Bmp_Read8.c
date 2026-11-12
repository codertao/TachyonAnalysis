
/* sweep */

void Bmp_Read8(undefined4 param_1)

{
  Fs_Seek(DAT_0060310c * 4 + 0x36,0);
  Fs_Read(param_1,DAT_00603108);
  Bmp_FlipRows(param_1);
  return;
}

