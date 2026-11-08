
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044c550(void)

{
  undefined4 uVar1;
  
  Ui_ShowWindow(&g_UiManager,s_WndMPSystemNW_00547ed0,0);
  FUN_0043a8d0(&g_UiManager,s_WndMPSystemNW_00547ed0);
  if (DAT_00562ca8 != 0) {
    FUN_0044c4a0();
    return;
  }
  DAT_00562ca4 = 1;
  _DAT_00562cac = 0;
  DAT_00562ca8 = 1;
  DAT_00562cb0 = 0;
  DAT_00562cb8 = 0;
  netsock_Init();
  netsock_SetPorts(DAT_005b2b08,DAT_005b2b08);
  netsock_InitTCPIP(&GLBL_NW_PING_IP);
  uVar1 = FUN_0044c8e0(&GLBL_NW_PING_IP,GLBL_NW_PING_PORT);
  netsock_Initiate_NWPing(uVar1);
  set_button_state(&g_UiManager,s_BtnNWSkip_00547f64,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnNWSkip_00547f64,0x80000);
  set_button_state(&g_UiManager,s_BtnNWCont_00547f58,8);
  Ui_SetButtonFlag(&g_UiManager,s_BtnNWCont_00547f58,0x80000);
  sbi_label_flags_11c(&g_UiManager,s_TxtMPNWPing1_00547f70,0x10000);
  sbi_label_flags_11c(&g_UiManager,s_TxtMPNWPing2_00547f48,0x10000);
  return;
}

