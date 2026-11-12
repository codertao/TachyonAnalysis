
/* sweep */

void Credits_Exit(void)

{
  Credits_FreeLines(&g_UiManager);
  OurFreeMem(DAT_005a41c8);
  load_sbf_and_bin(&DAT_005b2b78,&DAT_005b2b88);
  return;
}

