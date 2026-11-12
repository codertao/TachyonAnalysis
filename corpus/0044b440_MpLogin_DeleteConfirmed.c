
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void MpLogin_DeleteConfirmed(void)

{
  MpLogin_DeleteSlot(DAT_00547954);
  DAT_00547954 = 0xffffffff;
  _DAT_00562c8c = 0;
  Ui_CloseWindow(&g_UiManager,s_WndMPLoginDlg_005479e8);
  Ui_ShowWindow(&g_UiManager,s_WndMPLogin_00547980,0);
  Ui_OpenWindow(&g_UiManager,s_WndMPLogin_00547980);
  MenuHotkey_SetEscape(MpLogin_GoBack);
  MenuHotkey_SetAccept(MpLogin_OnPlay);
  MenuHotkey_SetUp(&LAB_0044b390);
  MenuHotkey_SetDown(&LAB_0044b3b0);
  return;
}

