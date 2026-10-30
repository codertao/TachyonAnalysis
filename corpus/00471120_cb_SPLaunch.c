
/* space/launch button -> shipyard mode */

void cb_SPLaunch(void)

{
  g_StarbaseScreen = &g_Mode_StarbaseShipyard;
  g_TitleMenu_ExitFlag = 1;
  return;
}

