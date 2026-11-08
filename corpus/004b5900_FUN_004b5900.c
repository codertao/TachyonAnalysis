
void FUN_004b5900(void)

{
  if (GLBL_bin_content != 0) {
    OurFreeMem(GLBL_bin_content);
    GLBL_bin_content = 0;
  }
  return;
}

