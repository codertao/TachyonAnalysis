
/* sweep */

void Host_CloseErrorDlg(void)

{
  Ui_CloseWindow(&g_UiManager,s_WndUserDlgHost_0054104c);
  Ui_ShowWindow(&g_UiManager,s_WndHost_00540e4c,0);
  Ui_OpenWindow(&g_UiManager,s_WndHost_00540e4c);
  Box_Free(DAT_005a3848);
  DAT_005a3848 = 0;
  g_MissionEndReason = 0;
  return;
}

