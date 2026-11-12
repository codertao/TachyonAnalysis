
/* sweep */

void PasswordDlg_Close(void)

{
  DAT_00592800 = 0;
  Ui_UnfocusTextEntry(DAT_00592804,&DAT_00592888);
  Ui_CloseWindow(DAT_00592804,&DAT_00592808);
  Ui_ShowWindow(DAT_00592804,&DAT_00592848,0);
  Ui_OpenWindow(DAT_00592804,&DAT_00592848);
  MenuHotkey_SetEscape(DAT_005928cc);
  MenuHotkey_SetAccept(DAT_005928c8);
  MenuHotkey_SetUp(DAT_005928d0);
  MenuHotkey_SetDown(DAT_005928d4);
  Box_Free(DAT_005a3848);
  DAT_005a3848 = 0;
  Ui_SetWindowHandler110(DAT_00592804,&DAT_00592808,DAT_005928d8);
  return;
}

