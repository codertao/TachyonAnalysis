
/* sweep */

undefined4 Image_ReadPixels(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Fs_Open(param_1);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  iVar1 = Image_DetectFormat();
  if (iVar1 == -1) {
    Fs_Close();
    return 0xffffffff;
  }
  if (iVar1 == 0) {
    Pcx_ReadPixels(param_2);
    Fs_Close();
    return DAT_00603108;
  }
  Bmp_ReadPixels(param_2);
  Fs_Close();
  return DAT_00603108;
}

