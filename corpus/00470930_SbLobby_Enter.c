
/* sweep: WndStarBase */

void SbLobby_Enter(void)

{
  int iVar1;
  
  g_TitleMenu_ExitFlag = 0;
  DAT_005635e0 = 0;
  DAT_0054e4d8 = 0x10;
  Nop();
  iVar1 = Starbase_Init();
  if (iVar1 == 0) {
    SbLobby_GoShipyard();
    return;
  }
  DAT_00603e40 = 0;
  DAT_00603e44 = 0;
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768);
  SbLobby_InitImages();
  SbHelp_Show();
  MenuHotkey_SetEscape(0);
  MenuHotkey_SetAccept(0);
  Menu_SetVar4b38(&LAB_00470170);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  DAT_005635dc = 0;
  if (DAT_00590e24 == &g_Mode_InFlight) {
    DAT_005635dc = 1;
    Viewport_SetHeight(0xf1);
    Fade_StartDefault(0,&LAB_00479930);
  }
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnMap_0054e858,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobs_0054e880,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnStats_0054e840,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnOptions_0054e7f4,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnReturn_0054e828,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnExit_0054444c,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnNews_0054e86c,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine1_0054e80c,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine2_0054e8ec,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine3_0054e8dc,0x80000);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine4_0054e8cc,0x80000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnMap_0054e858,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnJobs_0054e880,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnStats_0054e840,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnOptions_0054e7f4,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnReturn_0054e828,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnExit_0054444c,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnNews_0054e86c,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine1_0054e80c,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine2_0054e8ec,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine3_0054e8dc,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine4_0054e8cc,0x10000);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnMap_0054e858,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnJobs_0054e880,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnStats_0054e840,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnOptions_0054e7f4,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnReturn_0054e828,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnExit_0054444c,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnNews_0054e86c,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine1_0054e80c,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine2_0054e8ec,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine3_0054e8dc,&DAT_0053f1e4);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine4_0054e8cc,&DAT_0053f1e4);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobImage_0054e8c0,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobCompImage_0054e8b0,0x20000);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtMainItemSel_0054e684,&DAT_00562b14);
  SbLobby_ResetAnims();
  Starbase_PlayMusic(g_NextMode);
  if (DAT_005635e4 != 0) {
    Job_MarkSuccess();
  }
  DAT_005635e4 = 0;
  iVar1 = Job_FindActive();
  if ((DAT_005635e8 != 0) && (iVar1 != 0)) {
    Player_SetStrVar(*(undefined4 *)(iVar1 + 0x13c),*(undefined4 *)(iVar1 + 0x140));
  }
  iVar1 = Stub_Nop434450();
  if (iVar1 == 0) {
    Job_MarkFailed();
    SpRules_SetCampaignFlag(1);
  }
  if (DAT_00590e24 != &PTR_SbJobs_Enter_00550ad8) {
    Job_Complete();
    SbJobs_GoCompleteIfDone();
  }
  if ((g_TitleMenu_ExitFlag == 0) && (DAT_005635e8 != 0)) {
    iVar1 = Job_FindActive();
    if (iVar1 != 0) {
      cb_SPLaunch();
    }
  }
  DAT_005635e8 = 0;
  if (DAT_005a6730 == 0) {
    iVar1 = Job_FindActive();
    if (iVar1 == 0) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnReturn_0054e828,8);
    }
  }
  return;
}

