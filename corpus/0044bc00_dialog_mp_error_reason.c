
void dialog_mp_error_reason(void)

{
  Ui_PresentFrame();
  Box_Free(DAT_005a3848);
  DAT_005a3848 = load_box_file(s_borders2_box_005410dc,0xa000);
  Ui_CloseWindow(&g_UiManager,s_WndMPSystem_00547ea8);
  Ui_CloseWindow(&g_UiManager,s_WndMPSystemLan_00547ee0);
  Ui_CloseWindow(&g_UiManager,s_WndMPSystemNW_00547ed0);
  Ui_ShowWindow(&g_UiManager,s_WndUserDlg_00547eb4,0);
  Ui_OpenWindow(&g_UiManager,s_WndUserDlg_00547eb4);
  DAT_00562cb4 = 1;
  switch(g_MissionEndReason) {
  case 1:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_BADVERSION_005410c8);
    return;
  case 2:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_PUNT_005410a4);
    return;
  case 3:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_LOSTSERVER_00541090);
    return;
  default:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_UNK_0054105c);
    return;
  case 6:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_BADUSER_0054107c);
    return;
  case 7:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_NONW_0054106c);
    return;
  }
}

