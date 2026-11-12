
/* sweep */

void MpLogin_GoBack(void)

{
  g_NextMode = &g_Mode_TitleMenu;
  g_TitleMenu_ExitFlag = 1;
  MenuHotkey_SetEscape(0);
  MenuHotkey_SetAccept(0);
  MenuHotkey_SetUp(0);
  MenuHotkey_SetDown(0);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  return;
}

