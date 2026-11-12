
/* [tentative] new-profile path when slot empty */

void Profile_CreateNew(int param_1)

{
  Ui_FocusTextEntry(&g_UiManager,&DAT_005a39b0 + param_1 * 0x8c);
  str_sprintf(&DAT_005a41e0,s_BtnLoginSel_d_0054118c,param_1);
  set_button_state(&g_UiManager,&DAT_005a41e0,0x10);
  return;
}

