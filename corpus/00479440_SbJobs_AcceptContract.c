
/* sweep */

void SbJobs_AcceptContract(void)

{
  char *pcVar1;
  char local_40 [64];
  
  Mnu_FindText(&GLBL_UI_ELEM_LIST,s_JOB_CONTRACT_ACCEPTED_005522c0);
  SbJobs_BreakContract();
  if (DAT_00563644 != 0) {
    str_sprintf(local_40,DAT_00563644 + 0x14);
    pcVar1 = _strstr(local_40,&DAT_0053fec0);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_REGION_005342a4,local_40);
    Player_SetStrVar(*(undefined4 *)(DAT_00563644 + 0x124),*(undefined4 *)(DAT_00563644 + 0x128));
    SbJobs_RefreshCurrent();
    SbJobs_RefreshSlots();
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,1);
    Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,0x80000);
    if (DAT_005a6740 != 0) {
      Player_SetStrVar2(*(undefined4 *)(DAT_00563644 + 300),*(undefined4 *)(DAT_00563644 + 0x130));
      Var_SetInt(g_PlayerVarStore,DAT_00563644 + 0x14,DAT_00563644 + 0x54,2);
    }
    if (DAT_005a6744 != 0) {
      Player_SetStrVar2(*(undefined4 *)(DAT_00563644 + 300),*(undefined4 *)(DAT_00563644 + 0x130));
      Var_SetInt(g_PlayerVarStore,DAT_00563644 + 0x14,DAT_00563644 + 0x54,1);
    }
    if (DAT_005a6748 != 0) {
      Player_SetStrVar2(*(undefined4 *)(DAT_00563644 + 300),*(undefined4 *)(DAT_00563644 + 0x130));
      Var_SetInt(g_PlayerVarStore,DAT_00563644 + 0x14,DAT_00563644 + 0x54,3);
    }
  }
  Job_RefreshAvailable();
  SbAudio_StopAll();
  g_StarbaseScreen = &g_Mode_StarbaseShipyard;
  g_TitleMenu_ExitFlag = 1;
  return;
}

