
void FUN_0044adf0(void)

{
  int iVar1;
  
  if ((DAT_005a60c0 == -1) || ((&DAT_005928f0)[DAT_005a60c0 * 0x8c] == '\0')) {
    set_button_state(&g_UiManager,s_BtnMPLoginPlay_005479a0,8);
    set_button_state(&g_UiManager,s_BtnMPLoginDelete_0054798c,8);
    return;
  }
  iVar1 = FUN_0043ca90(&g_UiManager,s_BtnMPLoginPlay_005479a0);
  if (iVar1 == 8) {
    set_button_state(&g_UiManager,s_BtnMPLoginPlay_005479a0,1);
  }
  iVar1 = FUN_0043ca90(&g_UiManager,s_BtnMPLoginDelete_0054798c);
  if (iVar1 == 8) {
    set_button_state(&g_UiManager,s_BtnMPLoginDelete_0054798c,1);
  }
  str_sprintf(&DAT_005a41e0,s_BtnMPLoginSel_d_00547970,DAT_005a60c0);
  iVar1 = FUN_0043ca90(&g_UiManager,&DAT_005a41e0);
  if ((iVar1 != 1) && (iVar1 = FUN_0043ca90(&g_UiManager,&DAT_005a41e0), iVar1 != 2)) {
    return;
  }
  FUN_0043c1b0(&g_UiManager,&DAT_005a41e0,2);
  return;
}

