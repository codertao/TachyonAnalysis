
/* sweep */

void SbJobs_BreakContract(void)

{
  int iVar1;
  
  Mnu_FindText(&GLBL_UI_ELEM_LIST,s_JOB_CONTRACT_BROKEN_005522ac);
  iVar1 = Job_FindActive();
  if (iVar1 != 0) {
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,1);
    Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobAccept_00552170,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobBreak_00552180,0x80000);
    Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_REGION_005342a4,0);
    Player_SetStrVar(*(undefined4 *)(iVar1 + 0x134),*(undefined4 *)(iVar1 + 0x138));
    SbJobs_RefreshCurrent();
    SbJobs_RefreshSlots();
  }
  Job_RefreshAvailable();
  return;
}

