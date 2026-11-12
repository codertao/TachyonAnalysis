
/* sweep */

void Host_ShowConfirmDlg(void)

{
  int iVar1;
  
  Ui_CloseWindow(&g_UiManager,s_WndHost_00540e4c);
  Ui_ShowWindow(&g_UiManager,s_WndHostDlg_0054112c,0);
  Ui_OpenWindow(&g_UiManager,s_WndHostDlg_0054112c);
  DAT_005a3f00 = 0;
  if (DAT_005a4010 == '\0') {
    iVar1 = Mnu_FindText(&g_UiManager,s_HOST_MSG_GAMEMAP_00541118);
    if (iVar1 != 0) {
      str_sprintf(&DAT_005a3f00,s__s_s_00541110,&DAT_005a3f00,*(undefined4 *)(iVar1 + 0x40));
    }
  }
  if ((char)GLBL_spacesav[1] == '\0') {
    iVar1 = Mnu_FindText(&g_UiManager,s_HOST_MSG_GAMENAME_005410fc);
    if (iVar1 != 0) {
      str_sprintf(&DAT_005a3f00,s__s_s_00541110,&DAT_005a3f00,*(undefined4 *)(iVar1 + 0x40));
    }
  }
  Ui_SetLabelText(&g_UiManager,s_TxtHostDlgMsg_005410ec,&DAT_005a3f00);
  MenuHotkey_SetEscape(Host_CloseConfirmDlg);
  MenuHotkey_SetAccept(Host_CloseConfirmDlg);
  return;
}

