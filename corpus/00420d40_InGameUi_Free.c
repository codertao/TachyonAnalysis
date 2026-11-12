
/* sweep */

void InGameUi_Free(void)

{
  Box_Free(DAT_005b2188);
  Font_Free(DAT_005b2180);
  Font_Free(DAT_005b2184);
  OurFreeMem(DAT_005b218c);
  return;
}

