
/* sweep: WndStarBaseJobs */

void SbJobs_Enter(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  iVar3 = DAT_00589724;
  g_TitleMenu_ExitFlag = 0;
  DAT_00592e60 = 0;
  DAT_0056c480 = 0;
  DAT_00563648 = 0;
  SbJobs_GoCompleteIfDone();
  if (g_TitleMenu_ExitFlag != 0) {
    return;
  }
  Wingman_CheckAvailability();
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
  Job_RefreshAvailable();
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  SbJobs_LoadImages();
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobs_00552160,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobs_00552160);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240);
  Ui_SetWindowPos(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258,0x17,0xffffff51);
  Ui_StartWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258,s_WndStarBaseJobs_00552160
                      ,0x17,0,0x19,0);
  Ui_SetWindowPos(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240,0x280,0x1b8);
  Ui_StartWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240,s_WndStarBaseJobs_00552160
                      ,500,0x1b8,0x19,0);
  MenuHotkey_SetEscape(SbJobs_SlidePanels);
  MenuHotkey_SetAccept(SbJobs_SlidePanels);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  Job_BuildList();
  DAT_00563644 = Job_FindActive();
  if ((DAT_00563644 != 0) && (*(int *)(DAT_00563644 + 0x10) == 0)) {
    DAT_00563644 = 0;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,1);
  Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,0x80000);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnJob0_00552224,s_SNDEVNT_JOB_ROLL_0055222c);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnJob1_0055221c,s_SNDEVNT_JOB_ROLL_0055222c);
  Ui_SetButtonText(&GLBL_UI_ELEM_LIST,s_BtnJob2_00552214,s_SNDEVNT_JOB_ROLL_0055222c);
  SbJobs_RefreshCurrent();
  SbJobs_RefreshSlots();
  if ((DAT_00563644 != 0) && (*(int *)(DAT_00563644 + 0x10) != 0)) {
    SbJobs_SelectJob(0);
  }
  SbJobs_InitSliders();
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,8);
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(undefined4 *)(iVar1 + 0x48));
  Sw_EnableZBuffer(1);
  Starbase_PlayMusic(g_NextMode);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobImage_0054e8c0,0x20000);
  return;
}

