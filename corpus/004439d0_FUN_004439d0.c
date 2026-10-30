
void FUN_004439d0(void)

{
  FUN_004455f0();
  FUN_004206b0(DAT_005a3848);
  DAT_005a3848 = FUN_0041fd80(s_borders2_box_005410dc,0xa000);
  FUN_0043a990(&g_UiManager,s_WndHost_00540e4c);
  Ui_ShowWindow(&g_UiManager,s_WndUserDlgHost_0054104c,0);
  FUN_0043a8d0(&g_UiManager,s_WndUserDlgHost_0054104c);
  switch(g_MissionEndReason) {
  case 1:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_BADVERSION_005410c8);
    return;
  case 2:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_PUNT_005410a4);
    return;
  case 3:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_LOSTSERVER_00541090);
    return;
  default:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_UNK_0054105c);
    return;
  case 6:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_BADUSER_0054107c);
    return;
  case 7:
    FUN_0043e770(&g_UiManager,s_TxtUserDlgHostText_005410b4,s_MP_ERROR_NONW_0054106c);
    return;
  }
}

