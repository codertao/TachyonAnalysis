
/* sweep */

void MpSystem_ShowLanPanel(int param_1)

{
  DAT_005927e0 = 1;
  Ui_CloseWindow(&g_UiManager,s_WndMPSystemLan_00547ee0);
  Ui_CloseWindow(&g_UiManager,s_WndMPSystemNW_00547ed0);
  DAT_00547a9c = param_1;
  GLBL_spacesav[0x26] = param_1;
  if (param_1 == 0) {
    Net_InitAdvertTransport();
    Ui_ShowWindow(&g_UiManager,s_WndMPSystemLan_00547ee0,0);
    Ui_OpenWindow(&g_UiManager,s_WndMPSystemLan_00547ee0);
    MpSystem_ClearLanSlots();
    MpSystem_StopLanSearch();
  }
  else if (param_1 == 1) {
    NW_StartPing();
  }
  Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
  return;
}

