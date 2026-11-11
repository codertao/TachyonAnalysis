
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442460(void)

{
  int iVar1;
  
  g_TitleMenu_ExitFlag = 0;
  _DAT_00562c00 = 0;
  if (g_PlayerVarStore == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&DAT_005a60a0,&g_PlayerVarStore,0xa010,1);
  }
  FUN_00444d80();
  DAT_005a40b8 = load_rtxt_bin(s_mpgames_bin_00540e54,0xa000);
  Ui_PlaySoundEvent(&g_UiManager,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_BuildWindows(&g_UiManager);
  FUN_00437b30(FUN_004427e0);
  FUN_00437b10(FUN_00442ba0);
  FUN_0043e8f0(&g_UiManager,s_Cursor1_0053ff4c);
  FUN_00445710();
  FUN_0043efa0();
  Ui_ShowWindow(&g_UiManager,s_WndHost_00540e4c,0);
  FUN_0043a8d0(&g_UiManager,s_WndHost_00540e4c);
  set_flag_10c_on_elem_by_id(&g_UiManager,s_IAHOPreview_00540e40,0x20000);
  FUN_00440170(&g_UiManager,s_EntryHOGameName_00540e24,0x5b2bc4,0x1f,FUN_00442e90,
               s_SHADOW10w_00540e34);
  FUN_00440170(&g_UiManager,s_EntryHOPassWord_00540e14,0x5b2be4,0x1f,FUN_00442e90,
               s_SHADOW10w_00540e34);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHOGameName_00540e04,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHOPassWord_00540df4,4);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostLeftPlayers_00540de0,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostRightPlayers_00540dcc,0x100000);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot0_00540db8,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot1_00540da4,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot2_00540d90,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot3_00540d7c,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot4_00540d68,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot5_00540d54,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot6_00540d40,0x2004);
  Ui_SetButtonFlag(&g_UiManager,s_BtnHostGameSlot7_00540d2c,0x2004);
  FUN_0043e770(&g_UiManager,s_TxtHostStatus_00540d08,s_HOST_STATUS_IDLE_00540d18);
  if (GLBL_spacesav[0x13] == 1) {
    GLBL_spacesav[0] = GLBL_spacesav[0x69];
  }
  else {
    GLBL_spacesav[0] = GLBL_spacesav[0x5f];
  }
  FUN_00442ee0();
  DAT_005a4020 = 0;
  MP_BuildMapList();
  FUN_00443440();
  iVar1 = Ui_GetButtonState(&g_UiManager,s_BtnHostGameSlot0_00540db8);
  if (iVar1 != 8) {
    set_button_state(&g_UiManager,s_BtnHostGameSlot0_00540db8,4);
  }
  FUN_00443740();
  if (g_MissionEndReason != 0) {
    FUN_004439d0();
    return;
  }
  return;
}

