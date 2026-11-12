
/* sweep */

void Host_CloseConfirmDlg(void)

{
  Ui_CloseWindow(&g_UiManager,s_WndHostDlg_0054112c);
  Ui_ShowWindow(&g_UiManager,s_WndHost_00540e4c,0);
  Ui_OpenWindow(&g_UiManager,s_WndHost_00540e4c);
  MenuHotkey_SetEscape(Host_GoBack);
  MenuHotkey_SetAccept(Host_StartSession);
  return;
}

