
/* sweep: WndStarBaseLoading */

void SbLoading_Enter(void)

{
  int iVar1;
  int iVar2;
  
  Gfx_SetBrightMode(1);
  g_TitleMenu_ExitFlag = 0;
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseLoading_00550298);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseLoading_00550298,0);
  SbLoading_BuildJobText();
  iVar1 = Job_FindActive();
  Ui_HideCursor();
  Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_WINGMAN_IS_BENCHED_00550284,
             s_FALSE_00541294);
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x114) == (int *)0x0) {
      iVar2 = iVar1 + 0x94;
    }
    else {
      iVar2 = **(int **)(iVar1 + 0x114);
    }
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtLoadingJobBannerMsg_0055026c,iVar2);
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtLoadingJobTxtMsg_00550258,DAT_00563638);
    if (*(int *)(iVar1 + 0x144) != 0) {
      Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_WINGMAN_IS_BENCHED_00550284,
                 &DAT_00541270);
    }
  }
  return;
}

