
void FUN_00470930(void)

{
  int iVar1;
  
  g_TitleMenu_ExitFlag = 0;
  DAT_005635e0 = 0;
  DAT_0054e4d8 = 0x10;
  FUN_00445720();
  iVar1 = FUN_00470050();
  if (iVar1 == 0) {
    FUN_004715f0();
    return;
  }
  DAT_00603e40 = 0;
  DAT_00603e44 = 0;
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768);
  FUN_004701b0();
  FUN_004705a0();
  FUN_00437b30(0);
  FUN_00437b10(0);
  FUN_00437bd0(&LAB_00470170);
  FUN_00445710();
  FUN_0043e8f0(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  DAT_005635dc = 0;
  if (DAT_00590e24 == &g_Mode_InFlight) {
    DAT_005635dc = 1;
    FUN_004524a0(0xf1);
    FUN_004107c0(0,&LAB_00479930);
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
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnMap_0054e858,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnJobs_0054e880,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnStats_0054e840,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnOptions_0054e7f4,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnReturn_0054e828,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnExit_0054444c,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnNews_0054e86c,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine1_0054e80c,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine2_0054e8ec,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine3_0054e8dc,&DAT_0053f1e4);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine4_0054e8cc,&DAT_0053f1e4);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobImage_0054e8c0,0x20000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobCompImage_0054e8b0,0x20000);
  FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtMainItemSel_0054e684,&DAT_00562b14);
  FUN_0046f5c0();
  FUN_00468f50(g_NextMode);
  if (DAT_005635e4 != 0) {
    FUN_004697c0();
  }
  DAT_005635e4 = 0;
  iVar1 = Job_FindActive();
  if ((DAT_005635e8 != 0) && (iVar1 != 0)) {
    FUN_00468ff0(*(undefined4 *)(iVar1 + 0x13c),*(undefined4 *)(iVar1 + 0x140));
  }
  iVar1 = FUN_00434450();
  if (iVar1 == 0) {
    FUN_00469750();
    FUN_00434460(1);
  }
  if (DAT_00590e24 != &PTR_FUN_00550ad8) {
    Job_Complete();
    FUN_00478c20();
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

