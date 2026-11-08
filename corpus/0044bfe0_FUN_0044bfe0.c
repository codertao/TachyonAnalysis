
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0044bfe0(void)

{
  int iVar1;
  char *pcVar2;
  
  g_TitleMenu_ExitFlag = 0;
  Rules_Set(&g_Rules_Multiplayer);
  _g_FlightStateFlags = 2;
  DAT_00590e34 = &PTR_init_flight_start_00534260;
  g_ReturnMode = &PTR_FUN_00547a88;
  if (g_PlayerVarStore == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&DAT_005a60a0,&g_PlayerVarStore,0xa010,1);
  }
  FUN_00444d80();
  DAT_005927e0 = 1;
  DAT_00562ca0 = 0;
  Ui_BuildWindows(&g_UiManager);
  FUN_00437b30(0);
  FUN_00437b10(0);
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_00445710();
  FUN_0043efa0();
  Ui_ShowWindow(&g_UiManager,s_WndMPSystem_00547ea8,0);
  FUN_0043a8d0(&g_UiManager,s_WndMPSystem_00547ea8);
  set_button_state(&g_UiManager,s_BtnMPSysLan_00547f3c,1);
  set_button_state(&g_UiManager,s_BtnMPSysNW_00547f30,1);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysLan_00547f3c,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysNW_00547f30,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysLan_00547f3c,0x2000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysNW_00547f30,0x2000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSystemUp_00547f20,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSystemDn_00547f10,0x100000);
  FUN_0044d390();
  FUN_00458200();
  Profile_LoadoutInit(0);
  FUN_00458230();
  if (DAT_00547a9c == 0) {
    pcVar2 = s_BtnMPSysLan_00547f3c;
  }
  else {
    pcVar2 = s_BtnMPSysNW_00547f30;
  }
  set_button_state(&g_UiManager,pcVar2,0x10);
  FUN_0044c670(DAT_00547a9c);
  FUN_0044c710();
  DAT_00562cb4 = 0;
  if (g_MissionEndReason != 0) {
    dialog_mp_error_reason();
  }
  iVar1 = FUN_00432b70(0);
  if (iVar1 == 0) {
    FUN_0044c480();
    return;
  }
  return;
}

