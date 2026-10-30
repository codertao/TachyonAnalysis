
void FUN_0044bc00(void)

{
  FUN_004455f0();
  FUN_004206b0(DAT_005a3848);
  DAT_005a3848 = FUN_0041fd80(s_borders2_box_005410dc,0xa000);
  FUN_0043a990(&g_UiManager,s_WndMPSystem_00547ea8);
  FUN_0043a990(&g_UiManager,s_WndMPSystemLan_00547ee0);
  FUN_0043a990(&g_UiManager,s_WndMPSystemNW_00547ed0);
  Ui_ShowWindow(&g_UiManager,s_WndUserDlg_00547eb4,0);
  FUN_0043a8d0(&g_UiManager,s_WndUserDlg_00547eb4);
  DAT_00562cb4 = 1;
  switch(g_MissionEndReason) {
  case 1:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_BADVERSION_005410c8);
    return;
  case 2:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_PUNT_005410a4);
    return;
  case 3:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_LOSTSERVER_00541090);
    return;
  default:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_UNK_0054105c);
    return;
  case 6:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_BADUSER_0054107c);
    return;
  case 7:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgText_00547ec0,s_MP_ERROR_NONW_0054106c);
    return;
  }
}

