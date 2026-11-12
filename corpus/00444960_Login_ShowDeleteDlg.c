
/* sweep: LOGIN_DELWARNING */

void Login_ShowDeleteDlg(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = Mnu_FindText(&g_UiManager,s_LOGIN_DELWARNING_00541334);
  MenuHotkey_SetEscape(0);
  MenuHotkey_SetAccept(0);
  MenuHotkey_SetUp(0);
  MenuHotkey_SetDown(0);
  WndLogin_RefreshSlotPanels();
  DAT_00541188 = param_1;
  DAT_005a3848 = load_box_file(s_borders2_box_005410dc,0xa000);
  DAT_00562c10 = 1;
  Ui_CloseWindow(&g_UiManager,s_WndLogin_00541204);
  Ui_ShowWindow(&g_UiManager,s_WndLoginDlg_005411d8,0);
  Ui_OpenWindow(&g_UiManager,s_WndLoginDlg_005411d8);
  if ((iVar1 == 0) || (g_CurrentProfileSlot == -1)) {
    str_sprintf(&DAT_005a3860,s__You_are_about_to_delete_this_pl_005412dc);
  }
  else {
    str_sprintf(&DAT_005a3860,*(undefined4 *)(iVar1 + 0x40),
                &DAT_005a3990 + g_CurrentProfileSlot * 0x8c);
    Ui_SetLabelText(&g_UiManager,s_TxtDelSlotTxt_00541324,
                    &DAT_005a3990 + g_CurrentProfileSlot * 0x8c);
  }
  Ui_SetLabelText(&g_UiManager,s_TxtDelConfirm_005412cc,&DAT_005a3860);
  ImageArea_SetFrame(&g_UiManager,s_IADlgSlot_005412c0,2);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IADlgSlot_005412c0,0);
  return;
}

