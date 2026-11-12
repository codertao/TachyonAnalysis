
/* sweep: MP_ERROR_* */

void Host_ShowErrorDlg(void)

{
  Ui_PresentFrame();
  Box_Free(DAT_005a3848);
  DAT_005a3848 = load_box_file(s_borders2_box_005410dc,0xa000);
  Ui_CloseWindow(&g_UiManager,s_WndHost_00540e4c);
  Ui_ShowWindow(&g_UiManager,s_WndUserDlgHost_0054104c,0);
  Ui_OpenWindow(&g_UiManager,s_WndUserDlgHost_0054104c);
  switch(g_MissionEndReason) {
  case 1:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_BADVERSION_005410c8);
    return;
  case 2:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_PUNT_005410a4);
    return;
  case 3:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_LOSTSERVER_00541090);
    return;
  default:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_UNK_0054105c);
    return;
  case 6:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_BADUSER_0054107c);
    return;
  case 7:
    Ui_SetLabelTextById(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_NONW_0054106c);
    return;
  }
}

