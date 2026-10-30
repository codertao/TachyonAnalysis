
void FUN_004809c0(void)

{
  g_StarbaseScreen = &g_Mode_StarbaseHub;
  if (g_MpModeFlag == 0) {
    g_StarbaseScreen = &g_Mode_MPLogin;
  }
  g_TitleMenu_ExitFlag = 1;
  return;
}

