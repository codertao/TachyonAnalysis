
/* sweep */

void FlightUi_FreeAll(void)

{
  KeyChart_Free();
  InGameUi_Free();
  OptionsPanel_Free();
  WingMenu_Shutdown();
  VonUi_Shutdown();
  VonMenu_Shutdown();
  return;
}

