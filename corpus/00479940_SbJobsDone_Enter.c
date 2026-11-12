
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: WndStarBaseJobsComplete */

void SbJobsDone_Enter(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  float local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  ulonglong local_8;
  
  Mnu_FindText(&GLBL_UI_ELEM_LIST,s_JOB_CREDITS_EARNED_00552488);
  iVar1 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_JOB_NONE_0055247c);
  iVar2 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  iVar3 = Wingman_GetCurrent();
  local_c = Starbase_FindFont(s_JOB_STATS_00552470);
  uVar6 = 0;
  local_18 = 0;
  local_1c = 1.0;
  DAT_00552018 = 1;
  DAT_0056364c = Job_GetCompleted();
  if (DAT_0056364c == 0) {
    SbJobsDone_GoHub();
    return;
  }
  Var_GetInt(g_PlayerVarStore,DAT_0056364c + 0x14,DAT_0056364c + 0x54,&DAT_00552018);
  if (DAT_00552018 == 0) {
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_COMPLETED_0054a96c,
               s_NO_JOB_0054a964);
    SbJobsDone_GoHub();
    return;
  }
  g_TitleMenu_ExitFlag = 0;
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsComplete_0055227c,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsComplete_0055227c);
  MenuHotkey_SetEscape(SbJobsDone_GoHub);
  MenuHotkey_SetAccept(SbJobsDone_GoHub);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtJobCompletedPayField_00552458,&DAT_00572000);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtJobCompletedWingCutField_0055243c,&DAT_00572010);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtJobCompletedYourCutField_00552420,&DAT_00571ff0);
  Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtJobCompletedCreditsField_00552404,&DAT_00571fe0);
  if (DAT_00552018 == 2) {
    uVar6 = *(uint *)(DAT_0056364c + 0x148);
  }
  else if (DAT_00552018 == 3) {
    uVar6 = *(uint *)(DAT_0056364c + 0x14c);
  }
  str_sprintf(&DAT_00572000,&PTR_DAT_00552400,uVar6);
  if (iVar1 == 0) {
    pcVar4 = s__none_005523f8;
  }
  else {
    pcVar4 = *(char **)(iVar1 + 0x40);
  }
  str_sprintf(&DAT_00572010,&DAT_0054801c,pcVar4);
  if (iVar1 == 0) {
    pcVar4 = s__none_005523f8;
  }
  else {
    pcVar4 = *(char **)(iVar1 + 0x40);
  }
  str_sprintf(&DAT_00571ff0,&DAT_0054801c,pcVar4);
  if (DAT_00552018 == 1) {
    SbJobsDone_ShowImage3();
    Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CAMPAIGN_MISSION_005342f0,&local_18);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobsCompExit_00552378,8);
    Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobsCompExit_00552378,0x80000);
    set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobCompReplay_005523d4,1);
    Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobCompReplay_005523d4,0x80000);
    if (local_18 == 0) {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobCompContinue_005523c0,1);
      Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobCompContinue_005523c0,0x80000);
      iVar1 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_JOB_MISSION_FAILED_00552334);
      if (iVar1 == 0) {
        pcVar4 = s__Independent_Mission_Failed_00552318;
      }
      else {
        pcVar4 = *(char **)(iVar1 + 0x40);
      }
    }
    else {
      set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobCompContinue_005523c0,8);
      Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobCompContinue_005523c0,0x80000);
      iVar1 = Mnu_FindText(&GLBL_UI_ELEM_LIST,s_JOB_CAMPAIGN_FAILED_00552364);
      if (iVar1 == 0) {
        pcVar4 = s__Campaign_Mission_Failed_00552348;
      }
      else {
        pcVar4 = *(char **)(iVar1 + 0x40);
      }
    }
    Ui_SetLabelText(&GLBL_UI_ELEM_LIST,s_TxtJobCompletedMessage_005523a8,pcVar4);
    goto LAB_00479e1e;
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobCompExit_005523e8,1);
  Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnJobCompExit_005523e8,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobCompReplay_005523d4,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobCompReplay_005523d4,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnJobCompContinue_005523c0,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnJobCompContinue_005523c0,0x80000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtJobCompletedMessage_005523a8,0x10000);
  Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_WINGMAN_0054a954,&local_14);
  iVar1 = Var_GetTable(s_WINGMEN_0054adb0);
  if (iVar1 == 0) {
LAB_00479c64:
    if ((iVar3 != 0) && (*(int *)(DAT_0056364c + 0x144) == 0)) {
      local_1c = _DAT_0052e59c - *(float *)(iVar3 + 0xa4);
    }
  }
  else {
    iVar1 = Var_GetKeyByIndex(iVar1,local_14);
    if (iVar1 == 0) goto LAB_00479c64;
    Var_GetInt(g_PlayerVarStore,s_WINGMEN_STATUS_VARS_00552394,iVar1,&local_10);
    if (local_10 != 1) goto LAB_00479c64;
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_WINGMAN_0054a954,
               s_NO_WINGMAN_0054ac34);
    iVar3 = 0;
  }
  local_8 = (ulonglong)uVar6;
  local_8 = (ulonglong)ROUND((float)local_8 * local_1c);
  iVar1 = (int)local_8;
  Player_AddCredits((int)local_8);
  if (iVar3 != 0) {
    local_8 = (ulonglong)ROUND(*(float *)(iVar3 + 0xa4) * _DAT_0052ec38);
    str_sprintf(&DAT_00572010,s__d___d____00552388,uVar6 - iVar1,(int)local_8);
  }
  str_sprintf(&DAT_00571ff0,&PTR_DAT_00552400,iVar1);
  if (DAT_00552018 == 2) {
    SbJobsDone_ShowImage1();
  }
  else {
    SbJobsDone_ShowImage2();
  }
LAB_00479e1e:
  uVar5 = Player_GetCredits();
  str_sprintf(&DAT_00571fe0,&PTR_DAT_00552400,uVar5);
  SbStats_BuildText(local_c,s_SHADOW8g_0055230c);
  Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_COMPLETED_0054a96c,s_NO_JOB_0054a964
            );
  DAT_005635dc = 1;
  Viewport_SetHeight(0xf1);
  Fade_StartDefault(0,&LAB_00479930);
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50),
             *(undefined4 *)(iVar2 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44),
                     *(undefined4 *)(iVar2 + 0x48));
  Sw_EnableZBuffer(1);
  SbJobsDone_InitSliders();
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJobCompImage_0054e8b0,0x20000);
  return;
}

