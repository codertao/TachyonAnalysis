
void FUN_00478ca0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00469a70(s_DefaultLight_0053ff6c);
  iVar3 = DAT_00589724;
  g_TitleMenu_ExitFlag = 0;
  DAT_00592e60 = 0;
  DAT_0056c480 = 0;
  DAT_00563648 = 0;
  FUN_00478c20();
  if (g_TitleMenu_ExitFlag != 0) {
    return;
  }
  FUN_004692e0();
  iVar4 = 0;
  if (DAT_00589720 != 0) {
    piVar2 = (int *)(iVar3 + 0x10);
    iVar3 = DAT_00589720;
    do {
      if ((piVar2 != (int *)0x10) && (*piVar2 != 0)) {
        iVar4 = iVar4 + 1;
      }
      piVar2 = piVar2 + 0x38;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (iVar4 != 0) goto LAB_00478d35;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingmen_00552270,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnWingmen_00552270,0x80000);
LAB_00478d35:
  FUN_0046ae30();
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  FUN_00478c40();
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobs_00552160,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobs_00552160);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240);
  FUN_0043b370(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258,0x17,0xffffff51);
  FUN_0043b3a0(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258,s_WndStarBaseJobs_00552160,0x17,0
               ,0x19,0);
  FUN_0043b370(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240,0x280,0x1b8);
  FUN_0043b3a0(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240,s_WndStarBaseJobs_00552160,500,
               0x1b8,0x19,0);
  FUN_00437b30(FUN_00479260);
  FUN_00437b10(FUN_00479260);
  FUN_00445710();
  FUN_0043e8f0(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_0046ad00();
  DAT_00563644 = Job_FindActive();
  if ((DAT_00563644 != 0) && (*(int *)(DAT_00563644 + 0x10) == 0)) {
    DAT_00563644 = 0;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,1);
  FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,0x80000);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnJob0_00552224,s_SNDEVNT_JOB_ROLL_0055222c);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnJob1_0055221c,s_SNDEVNT_JOB_ROLL_0055222c);
  FUN_0043cac0(&GLBL_UI_ELEM_LIST,s_BtnJob2_00552214,s_SNDEVNT_JOB_ROLL_0055222c);
  FUN_00478b90();
  FUN_00478930();
  if ((DAT_00563644 != 0) && (*(int *)(DAT_00563644 + 0x10) != 0)) {
    FUN_004787b0(0);
  }
  FUN_004796f0();
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,8);
  FUN_004af2e0();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
               *(undefined4 *)(iVar1 + 0x48));
  Sw_EnableZBuffer(1);
  FUN_00468f50(g_NextMode);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobImage_0054e8c0,0x20000);
  return;
}

