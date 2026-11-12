
/* sweep */

void WndLogin_GoBack(void)

{
  g_NextMode = &g_Mode_TitleMenu;
  g_TitleMenu_ExitFlag = 1;
  MenuHotkey_SetUp(0);
  MenuHotkey_SetDown(0);
  return;
}

