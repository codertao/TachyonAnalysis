
/* sweep */

void Credits_ReturnToTitle(void)

{
  g_NextMode = &g_Mode_TitleMenu;
  g_TitleMenu_ExitFlag = 1;
  Ui_ShowCursor();
  MenuHotkey_SetUp(0);
  MenuHotkey_SetDown(0);
  return;
}

