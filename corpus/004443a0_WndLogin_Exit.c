
/* sweep */

void WndLogin_Exit(void)

{
  WndLogin_RefreshSlotPanels();
  Profile_SaveAll();
  DAT_0054442c = 1;
  Box_Free(DAT_005a3848);
  DAT_005a3848 = 0;
  return;
}

