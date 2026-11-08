
void FUN_0044c670(int param_1)

{
  DAT_005927e0 = 1;
  FUN_0043a990(&g_UiManager,s_WndMPSystemLan_00547ee0);
  FUN_0043a990(&g_UiManager,s_WndMPSystemNW_00547ed0);
  DAT_00547a9c = param_1;
  GLBL_spacesav[0x26] = param_1;
  if (param_1 == 0) {
    FUN_0044c8b0();
    Ui_ShowWindow(&g_UiManager,s_WndMPSystemLan_00547ee0,0);
    FUN_0043a8d0(&g_UiManager,s_WndMPSystemLan_00547ee0);
    FUN_0044c9d0();
    FUN_0044c860();
  }
  else if (param_1 == 1) {
    FUN_0044c550();
  }
  Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
  return;
}

