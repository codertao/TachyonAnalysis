
void FUN_004705a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  int local_8;
  int local_4;
  
  iVar1 = Ui_FindWindowDef(&GLBL_UI_ELEM_LIST,s_WndStarBaseHelp_0054e8a0);
  local_4 = 4;
  FUN_0048f670(s_STARBASES_00532e38,s_FRONTIER_0054e894,&local_4);
  Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_STARBASE_00532c20,&local_8);
  if ((iVar1 == 0) || (GLBL_spacesav[0x2b] == 0)) {
    switch(local_8) {
    case 0:
    case 1:
    case 4:
    case 5:
      pcVar5 = s_TERM16g_0054e7e0;
      break;
    case 2:
    case 7:
      pcVar5 = s_TERM16b_0054e7c4;
      break;
    case 3:
    case 8:
      pcVar5 = s_TERM16r_0054e7bc;
      break;
    default:
      return;
    }
    FUN_0043e580(&GLBL_UI_ELEM_LIST,s_TxtMainItemSel_0054e684,pcVar5);
    return;
  }
  DAT_005635e0 = 1;
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnJobs_0054e880,s_BtnHelp0_0054e888);
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnNews_0054e86c,s_BtnHelp1_0054e874);
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnMap_0054e858,s_BtnHelp2_0054e860);
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnStats_0054e840,s_BtnHelp3_0054e84c);
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnReturn_0054e828,s_BtnHelp4_0054e834);
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnSlotMachine1_0054e80c,s_BtnHelp5_0054e81c);
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnOptions_0054e7f4,s_BtnHelp6_0054e800);
  FUN_0043c1e0(&GLBL_UI_ELEM_LIST,s_BtnExit_0054444c,s_BtnHelp7_0054e7e8);
  uVar4 = 0;
  do {
    str_sprintf(&DAT_005a41e0,s_BtnHelp_d_0054e78c,uVar4);
    FUN_0043c150(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,1);
    clr_label_flags_11c(&GLBL_UI_ELEM_LIST,&DAT_005a41e0,0x10000);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 8);
  if ((DAT_005a6730 == 0) && (iVar2 = Job_FindActive(), iVar2 == 0)) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnHelp4_0054e834,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnHelp4_0054e834,0x80000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnHelp4_0054e834,0x10000);
  }
  if (local_8 != local_4) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnHelp5_0054e81c,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnHelp5_0054e81c,0x80000);
    sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_BtnHelp5_0054e81c,0x10000);
  }
  switch(local_8) {
  case 0:
  case 4:
    FUN_00470560(s_TERM16g_0054e7e0);
    FUN_004704b0(s_ImageMainHelpBg1_0054e7cc);
    str_sprintf(iVar1 + 0xa8,s_ImageMainHelpBg1_0054e7cc);
    break;
  case 1:
  case 5:
  case 6:
    pcVar5 = s_TERM16g_0054e7e0;
    goto LAB_00470846;
  case 2:
    pcVar5 = s_TERM16b_0054e7c4;
    goto LAB_00470846;
  case 3:
    FUN_00470560(s_TERM16r_0054e7bc);
    FUN_004704b0(s_ImageMainHelpBg1_0054e7cc);
    str_sprintf(iVar1 + 0xa8,s_ImageMainHelpBg1_0054e7cc);
    break;
  case 7:
    FUN_00470560(s_TERM16b_0054e7c4);
    FUN_004704b0(s_ImageMainHelpBg1_0054e7cc);
    str_sprintf(iVar1 + 0xa8,s_ImageMainHelpBg1_0054e7cc);
    break;
  case 8:
    pcVar5 = s_TERM16r_0054e7bc;
LAB_00470846:
    FUN_00470560(pcVar5);
    str_sprintf(iVar1 + 0xa8,s_ImageMainHelpBg2_0054e7a8);
  }
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseHelp_0054e8a0,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseHelp_0054e8a0);
  puVar3 = (undefined4 *)FUN_004699f0(s_STARBASE_HELP_0054e798);
  if (puVar3 == (undefined4 *)0x0) {
    return;
  }
  FUN_0043b370(&GLBL_UI_ELEM_LIST,s_WndStarBaseHelp_0054e8a0,*puVar3,puVar3[1]);
  return;
}

