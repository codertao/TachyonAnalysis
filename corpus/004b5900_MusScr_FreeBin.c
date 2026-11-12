
/* sweep */

void MusScr_FreeBin(void)

{
  if (GLBL_bin_content != 0) {
    OurFreeMem(GLBL_bin_content);
    GLBL_bin_content = 0;
  }
  return;
}

