
/* sweep */

undefined4 Image_ReadHeader(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Fs_Open(param_1);
  if (iVar1 == -1) {
    return 0;
  }
  iVar1 = Image_DetectFormat();
  if (iVar1 == -1) {
    Fs_Close();
    return 0;
  }
  if (iVar1 == 0) {
    Pcx_ReadHeader();
    return DAT_00603108;
  }
  Bmp_ReadHeader();
  return DAT_00603108;
}

