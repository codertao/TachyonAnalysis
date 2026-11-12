
/* sweep */

void Login_DeleteConfirmed(void)

{
  Profile_Delete(DAT_00541188);
  DAT_00541188 = 0xffffffff;
  Ui_CloseWindow(&g_UiManager,s_WndLoginDlg_005411d8);
  Ui_ShowWindow(&g_UiManager,s_WndLogin_00541204,0);
  Ui_OpenWindow(&g_UiManager,s_WndLogin_00541204);
  DAT_00562c10 = 0;
  MenuHotkey_SetEscape(WndLogin_GoBack);
  MenuHotkey_SetAccept(Profile_StartGame);
  MenuHotkey_SetUp(&LAB_00444720);
  MenuHotkey_SetDown(&LAB_00444740);
  return;
}

