
/* sweep */

void VonUi_Shutdown(void)

{
  Box_Free(DAT_005657c8);
  Font_Free(DAT_005657c0);
  Font_Free(DAT_005657c4);
  OurFreeMem(DAT_005657cc);
  return;
}

