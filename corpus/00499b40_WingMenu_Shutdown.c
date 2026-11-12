
/* sweep */

void WingMenu_Shutdown(void)

{
  Box_Free(DAT_00565308);
  Font_Free(DAT_00565300);
  Font_Free(DAT_00565304);
  OurFreeMem(DAT_0056530c);
  return;
}

