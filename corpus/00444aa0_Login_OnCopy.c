
/* sweep */

void Login_OnCopy(int param_1)

{
  if ((((param_1 != -1) || (param_1 = g_CurrentProfileSlot, g_CurrentProfileSlot != -1)) &&
      (-1 < param_1)) && (param_1 < 10)) {
    DAT_00541184 = param_1;
    set_button_state(&g_UiManager,s_BtnLoginCopy_005411f4,8);
    Ui_SetButtonFlag(&g_UiManager,s_BtnLoginCopy_005411f4,0x80000);
    set_button_state(&g_UiManager,s_BtnLoginPaste_005411e4,1);
    Ui_ClearButtonFlags(&g_UiManager,s_BtnLoginPaste_005411e4,0x80000);
  }
  return;
}

