
/* sweep */

void MpLogin_SelectSlot(int param_1)

{
  if ((param_1 < 0) || (9 < param_1)) {
    DAT_005a60c0 = 0xffffffff;
    MpLogin_ShowFace(0);
  }
  else {
    MpLogin_UnfocusAll();
    MpLogin_LoadSlotVars(param_1);
    MpLogin_ShowFace(DAT_005a60c0);
    if (DAT_005a6080 == '\0') {
      MpLogin_FocusSlot(param_1);
    }
  }
  Ui_RefreshWindow(&g_UiManager,s_WndMPLogin_00547980,0,0);
  return;
}

