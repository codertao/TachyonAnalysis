
/* sweep */

void MpLogin_UnfocusAll(void)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_00592910;
  do {
    Ui_UnfocusTextEntry(&g_UiManager,puVar1);
    str_sprintf(&DAT_005a41e0,s_BtnMPLoginSel_d_00547970,iVar2);
    set_button_state(&g_UiManager,&DAT_005a41e0,1);
    puVar1 = puVar1 + 0x8c;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x592e88);
  if (DAT_005a60c0 != -1) {
    Profile_ParseNameFields(&DAT_005928f0 + DAT_005a60c0 * 0x8c);
    str_sprintf(&DAT_005a6080,&DAT_005928f0 + DAT_005a60c0 * 0x8c);
  }
  return;
}

