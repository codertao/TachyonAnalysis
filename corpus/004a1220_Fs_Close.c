
/* sweep */

undefined4 Fs_Close(void)

{
  undefined4 uVar1;
  
  if ((DAT_00603900 == 0) && (DAT_006038b0 == 0)) {
    uVar1 = close_glbl_open_file();
    return uVar1;
  }
  return 0;
}

