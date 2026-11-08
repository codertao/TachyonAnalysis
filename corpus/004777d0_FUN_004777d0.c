
void FUN_004777d0(void)

{
  int iVar1;
  int iVar2;
  
  FUN_004ad380(1);
  g_TitleMenu_ExitFlag = 0;
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseLoading_00550298);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseLoading_00550298,0);
  FUN_00477700();
  iVar1 = Job_FindActive();
  FUN_0043ed80();
  Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_WINGMAN_IS_BENCHED_00550284,
             s_FALSE_00541294);
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x114) == (int *)0x0) {
      iVar2 = iVar1 + 0x94;
    }
    else {
      iVar2 = **(int **)(iVar1 + 0x114);
    }
    FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtLoadingJobBannerMsg_0055026c,iVar2);
    FUN_0043e6a0(&GLBL_UI_ELEM_LIST,s_TxtLoadingJobTxtMsg_00550258,DAT_00563638);
    if (*(int *)(iVar1 + 0x144) != 0) {
      Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_WINGMAN_IS_BENCHED_00550284,
                 &DAT_00541270);
    }
  }
  return;
}

