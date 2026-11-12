
/* sweep: WndLogin */

void WndLogin_Enter(void)

{
  g_TitleMenu_ExitFlag = 0;
  DAT_005a3964 = 0;
  DAT_005a3960 = 1;
  DAT_0054442c = 1;
  DAT_005635dc = 0;
  Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  MenuHotkey_SetEscape(WndLogin_GoBack);
  MenuHotkey_SetAccept(Profile_StartGame);
  MenuHotkey_SetUp(&LAB_00444720);
  MenuHotkey_SetDown(&LAB_00444740);
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  TitleHover_Clear();
  Ui_ShowCursor();
  Ui_ShowWindow(&g_UiManager,s_WndLogin_00541204,0);
  Ui_OpenWindow(&g_UiManager,s_WndLogin_00541204);
  Login_RefreshSlots();
  set_button_state(&g_UiManager,s_BtnLoginCopy_005411f4,1);
  Ui_ClearButtonFlags(&g_UiManager,s_BtnLoginCopy_005411f4,0x80000);
  set_button_state(&g_UiManager,s_BtnLoginPaste_005411e4,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnLoginPaste_005411e4,0x80000);
  DAT_00541184 = 0xffffffff;
  g_CurrentProfileSlot = GLBL_spacesav[0x28];
  Login_SelectSlot(GLBL_spacesav[0x28]);
  WndLogin_RefreshSlotPanels();
  DAT_00562c10 = 0;
  Ui_SetWindowHandler110(&g_UiManager,s_WndLoginDlg_005411d8,&LAB_004442b0);
  return;
}

