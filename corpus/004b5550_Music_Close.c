
/* sweep */

BOOL Music_Close(void)

{
  BOOL BVar1;
  
  if (DAT_006af504 != 0) {
    Music_Stop();
  }
  if (DAT_006af508 != 0) {
    MusScr_FreeBin();
    DAT_006af508 = 0;
    BVar1 = CloseHandle(GLBL_sbf_file_handle);
    return BVar1;
  }
  return 0;
}

