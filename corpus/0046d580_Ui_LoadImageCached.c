
/* sweep: IMAGE_%s */

int Ui_LoadImageCached(void)

{
  int iVar1;
  undefined4 *puVar2;
  int in_stack_00001718;
  int in_stack_0000171c;
  int in_stack_00001720;
  int in_stack_00001724;
  
  __chkstk();
  str_sprintf();
  iVar1 = MnuImage_Find();
  if (iVar1 != 0) {
    if ((in_stack_00001724 != 0) && (in_stack_00001724 != 0xff)) {
      *(uint *)(iVar1 + 0x167c) = *(uint *)(iVar1 + 0x167c) | 8;
    }
    if (((in_stack_00001718 != 0) && (in_stack_0000171c < 0x101)) &&
       (in_stack_00001720 / in_stack_00001718 < 0x101)) {
      MnuImage_LoadPcxRemapped();
      return iVar1;
    }
    MnuImage_LoadPcx();
    return iVar1;
  }
  iVar1 = Fs_Exists();
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)&stack0x00000080;
    for (iVar1 = 0x5a3; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    str_sprintf();
    str_sprintf();
    str_sprintf();
    iVar1 = MnuImage_Reload();
    if (iVar1 != 0) {
      if ((in_stack_00001724 != 0) && (in_stack_00001724 != 0xff)) {
        *(uint *)(iVar1 + 0x167c) = *(uint *)(iVar1 + 0x167c) | 8;
      }
      if (((in_stack_00001718 != 0) && (in_stack_0000171c < 0x101)) &&
         (in_stack_00001720 / in_stack_00001718 < 0x101)) {
        MnuImage_LoadPcxRemapped();
        return iVar1;
      }
      MnuImage_LoadPcx();
      return iVar1;
    }
  }
  return 0;
}

