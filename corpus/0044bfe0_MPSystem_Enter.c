
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* multiplayer system screen (LAN / NovaWorld buttons); inits the in-game browser */

void MPSystem_Enter(void)

{
  int iVar1;
  char *pcVar2;
  
  g_TitleMenu_ExitFlag = 0;
  Rules_Set(&g_Rules_Multiplayer);
  _g_FlightStateFlags = 2;
  DAT_00590e34 = &PTR_init_flight_start_00534260;
  g_ReturnMode = &PTR_MPSystem_Enter_00547a88;
  if (g_PlayerVarStore == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&DAT_005a60a0,&g_PlayerVarStore,0xa010,1);
  }
  TitleMenu_LoadUi();
  DAT_005927e0 = 1;
  g_NwJoinPending = 0;
  Ui_BuildWindows(&g_UiManager);
  MenuHotkey_SetEscape(0);
  MenuHotkey_SetAccept(0);
  Ui_SetCursor(&g_UiManager,s_Cursor1_0053ff4c);
  TitleHover_Clear();
  Ui_ShowCursor();
  Ui_ShowWindow(&g_UiManager,s_WndMPSystem_00547ea8,0);
  Ui_OpenWindow(&g_UiManager,s_WndMPSystem_00547ea8);
  set_button_state(&g_UiManager,s_BtnMPSysLan_00547f3c,1);
  set_button_state(&g_UiManager,s_BtnMPSysNW_00547f30,1);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysLan_00547f3c,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysNW_00547f30,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysLan_00547f3c,0x2000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSysNW_00547f30,0x2000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSystemUp_00547f20,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnMPSystemDn_00547f10,0x100000);
  NW_BrowserInit();
  Races_Init();
  Profile_LoadoutInit(0);
  Races_Free();
  if (DAT_00547a9c == 0) {
    pcVar2 = s_BtnMPSysLan_00547f3c;
  }
  else {
    pcVar2 = s_BtnMPSysNW_00547f30;
  }
  set_button_state(&g_UiManager,pcVar2,0x10);
  MpSystem_ShowLanPanel(DAT_00547a9c);
  MpSystem_RefreshLanButtons();
  DAT_00562cb4 = 0;
  if (g_MissionEndReason != 0) {
    dialog_mp_error_reason();
  }
  iVar1 = Cd_Check(0);
  if (iVar1 == 0) {
    MpSystem_GoBack();
    return;
  }
  return;
}

