
/* starbase Config "Launch" -> shipyard mode */

void cb_CFGLaunch(void)

{
  g_TitleMenu_ExitFlag = 1;
  g_StarbaseScreen = &g_Mode_StarbaseShipyard;
  return;
}

