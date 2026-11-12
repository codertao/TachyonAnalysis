
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void MpLogin_ShowDeleteDlg(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Mnu_FindText(&g_UiManager,s_LOGIN_DELWARNING_00541334);
  MenuHotkey_SetEscape(0);
  MenuHotkey_SetAccept(0);
  MenuHotkey_SetUp(0);
  MenuHotkey_SetDown(0);
  MpLogin_UnfocusAll();
  DAT_00547954 = param_1;
  DAT_005a3848 = load_box_file(s_borders2_box_005410dc,0xa000);
  _DAT_00562c8c = 1;
  Ui_CloseWindow(&g_UiManager,s_WndMPLogin_00547980);
  Ui_ShowWindow(&g_UiManager,s_WndMPLoginDlg_005479e8,0);
  Ui_OpenWindow(&g_UiManager,s_WndMPLoginDlg_005479e8);
  if (iVar1 == 0) {
    str_sprintf(&DAT_00592e80,s__You_are_about_to_delete_this_pl_005412dc);
  }
  else {
    iVar2 = DAT_005a60c0;
    if (param_1 != -1) {
      iVar2 = param_1;
    }
    str_sprintf(&DAT_00592e80,*(undefined4 *)(iVar1 + 0x40),&DAT_005928f0 + iVar2 * 0x8c);
    if (param_1 == -1) {
      param_1 = DAT_005a60c0;
    }
    Ui_SetLabelText(&g_UiManager,s_TxtMPDelSlotTxt_00547a14,&DAT_005928f0 + param_1 * 0x8c);
  }
  Ui_SetLabelText(&g_UiManager,s_TxtMPDelConfirm_00547a04,&DAT_00592e80);
  ImageArea_SetFrame(&g_UiManager,s_IAMPDlgSlot_005479f8,2);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAMPDlgSlot_005479f8,0);
  return;
}

