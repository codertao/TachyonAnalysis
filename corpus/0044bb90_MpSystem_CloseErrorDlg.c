
/* sweep */

void MpSystem_CloseErrorDlg(void)

{
  Ui_CloseWindow(&g_UiManager,s_WndUserDlg_00547eb4);
  Ui_ShowWindow(&g_UiManager,s_WndMPSystem_00547ea8,0);
  Ui_OpenWindow(&g_UiManager,s_WndMPSystem_00547ea8);
  MpSystem_ShowLanPanel(DAT_00547a9c);
  Box_Free(DAT_005a3848);
  DAT_005a3848 = 0;
  DAT_00562cb4 = 0;
  g_MissionEndReason = 0;
  return;
}

