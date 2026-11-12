
/* sweep */

void PasswordDlg_Show(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  DAT_00592800 = 1;
  DAT_005928cc = MenuHotkey_SetEscape(0);
  DAT_005928c8 = MenuHotkey_SetAccept(0);
  DAT_005928d0 = MenuHotkey_SetUp(0);
  DAT_005928d4 = MenuHotkey_SetDown(0);
  DAT_00592804 = param_3;
  str_sprintf(&DAT_00592808,param_1);
  str_sprintf(&DAT_00592848,param_2);
  str_sprintf(&DAT_00592888,param_6);
  Ui_SetTextEntryText(DAT_00592804,&DAT_00592888,param_4,param_5,PasswordDlg_Close,
                      s_shadow12w_0054119c);
  Ui_FocusTextEntry(DAT_00592804,&DAT_00592888);
  Ui_CloseWindow(DAT_00592804,&DAT_00592848);
  Ui_ShowWindow(DAT_00592804,&DAT_00592808,0);
  Ui_OpenWindow(DAT_00592804,&DAT_00592808);
  DAT_005a3848 = load_box_file(s_borders2_box_005410dc,0xa000);
  DAT_005928d8 = Ui_SetWindowHandler110(DAT_00592804,&DAT_00592808,&LAB_0044cb80);
  return;
}

