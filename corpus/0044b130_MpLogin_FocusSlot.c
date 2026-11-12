
/* sweep */

void MpLogin_FocusSlot(int param_1)

{
  Ui_FocusTextEntry(&g_UiManager,&DAT_00592910 + param_1 * 0x8c);
  str_sprintf(&DAT_005a41e0,s_BtnMPLoginSel_d_00547970,param_1);
  set_button_state(&g_UiManager,&DAT_005a41e0,0x10);
  return;
}

