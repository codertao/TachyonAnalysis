
BOOL FUN_004b5550(void)

{
  BOOL BVar1;
  
  if (DAT_006af504 != 0) {
    FUN_004b5510();
  }
  if (DAT_006af508 != 0) {
    FUN_004b5900();
    DAT_006af508 = 0;
    BVar1 = CloseHandle(GLBL_sbf_file_handle);
    return BVar1;
  }
  return 0;
}

