
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* per-frame: NovaWorld ping status (0x30 ok -> NW_OpenStartPage, 0x31 timeout -> Continue button);
   g_NwJoinPending -> join */

undefined4 MPSystem_Update(void)

{
  int iVar1;
  undefined4 local_4;
  
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag != 0) {
    return 1;
  }
  Ui_Update(&g_UiManager);
  if (DAT_00547a9c == 1) {
    if (DAT_00562ca4 == 0) {
      FUN_0044de20();
    }
    else {
      DAT_00562cb8 = DAT_00562cb8 + 1;
      if ((DAT_00562cb0 == 0) && (100 < DAT_00562cb8)) {
        DAT_00562cb0 = 1;
        clr_label_flags_11c(&g_UiManager,s_TxtMPNWPing1_00547f70,0x10000);
        set_button_state(&g_UiManager,s_BtnNWSkip_00547f64,1);
        FUN_0043c150(&g_UiManager,s_BtnNWSkip_00547f64,0x80000);
      }
      local_4 = 0;
      iVar1 = netsock_Status_NWPing(&local_4);
      if (iVar1 == 0x30) {
        DAT_00562ca4 = 0;
        _DAT_00562cac = 1;
        NW_OpenStartPage();
      }
      else if (iVar1 == 0x31) {
        DAT_00562ca4 = 0;
        _DAT_00562cac = 0;
        DAT_00562cb8 = -1;
        set_button_state(&g_UiManager,s_BtnNWSkip_00547f64,8);
        Ui_SetButtonFlag(&g_UiManager,s_BtnNWSkip_00547f64,0x80000);
        set_button_state(&g_UiManager,s_BtnNWCont_00547f58,1);
        FUN_0043c150(&g_UiManager,s_BtnNWCont_00547f58,0x80000);
        clr_label_flags_11c(&g_UiManager,s_TxtMPNWPing2_00547f48,0x10000);
        Ui_RefreshWindow(&g_UiManager,s_WndMPSystem_00547ea8,0,0);
        Ui_RefreshWindow(&g_UiManager,s_WndMPSystemNW_00547ed0,0,0);
      }
    }
  }
  else {
    FUN_0044c710();
    if (DAT_00591100 == 0) {
      FUN_0044d2a0();
    }
  }
  if (g_NwJoinPending == 1) {
    g_StarbaseScreen = &PTR_FUN_00548210;
    g_TitleMenu_ExitFlag = 1;
  }
  else if (g_NwJoinPending == 2) {
    g_TitleMenu_ExitFlag = 1;
    DAT_00590e20 = 1;
    g_NextMode = 0;
    return 0;
  }
  return 0;
}

