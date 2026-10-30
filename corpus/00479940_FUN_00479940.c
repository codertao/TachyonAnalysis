
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479940(void)

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
  
  FUN_0043bf10(&DAT_00583420,s_JOB_CREDITS_EARNED_00552488);
  iVar1 = FUN_0043bf10(&DAT_00583420,s_JOB_NONE_0055247c);
  iVar2 = FUN_00469a70(s_DefaultLight_0053ff6c);
  iVar3 = FUN_00469330();
  local_c = FUN_004699f0(s_JOB_STATS_00552470);
  uVar6 = 0;
  local_18 = 0;
  local_1c = 1.0;
  DAT_00552018 = 1;
  DAT_0056364c = FUN_00469570();
  if (DAT_0056364c == 0) {
    FUN_004798b0();
    return;
  }
  Var_GetInt(g_PlayerVarStore,DAT_0056364c + 0x14,DAT_0056364c + 0x54,&DAT_00552018);
  if (DAT_00552018 == 0) {
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_COMPLETED_0054a96c,
               s_NO_JOB_0054a964);
    FUN_004798b0();
    return;
  }
  g_TitleMenu_ExitFlag = 0;
  FUN_00440460(&DAT_00583420,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  FUN_0043ab40(&DAT_00583420);
  Ui_ShowWindow(&DAT_00583420,s_WndStarBaseJobsComplete_0055227c,0);
  FUN_0043a8d0(&DAT_00583420,s_WndStarBaseJobsComplete_0055227c);
  FUN_00437b30(FUN_004798b0);
  FUN_00437b10(FUN_004798b0);
  FUN_00445710();
  FUN_0043e8f0(&DAT_00583420,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  FUN_0043e6a0(&DAT_00583420,s_TxtJobCompletedPayField_00552458,&DAT_00572000);
  FUN_0043e6a0(&DAT_00583420,s_TxtJobCompletedWingCutField_0055243c,&DAT_00572010);
  FUN_0043e6a0(&DAT_00583420,s_TxtJobCompletedYourCutField_00552420,&DAT_00571ff0);
  FUN_0043e6a0(&DAT_00583420,s_TxtJobCompletedCreditsField_00552404,&DAT_00571fe0);
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
    FUN_0047a170();
    Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CAMPAIGN_MISSION_005342f0,&local_18);
    FUN_0043ce50(&DAT_00583420,s_BtnJobsCompExit_00552378,8);
    Ui_SetButtonFlag(&DAT_00583420,s_BtnJobsCompExit_00552378,0x80000);
    FUN_0043ce50(&DAT_00583420,s_BtnJobCompReplay_005523d4,1);
    FUN_0043c150(&DAT_00583420,s_BtnJobCompReplay_005523d4,0x80000);
    if (local_18 == 0) {
      FUN_0043ce50(&DAT_00583420,s_BtnJobCompContinue_005523c0,1);
      FUN_0043c150(&DAT_00583420,s_BtnJobCompContinue_005523c0,0x80000);
      iVar1 = FUN_0043bf10(&DAT_00583420,s_JOB_MISSION_FAILED_00552334);
      if (iVar1 == 0) {
        pcVar4 = s__Independent_Mission_Failed_00552318;
      }
      else {
        pcVar4 = *(char **)(iVar1 + 0x40);
      }
    }
    else {
      FUN_0043ce50(&DAT_00583420,s_BtnJobCompContinue_005523c0,8);
      Ui_SetButtonFlag(&DAT_00583420,s_BtnJobCompContinue_005523c0,0x80000);
      iVar1 = FUN_0043bf10(&DAT_00583420,s_JOB_CAMPAIGN_FAILED_00552364);
      if (iVar1 == 0) {
        pcVar4 = s__Campaign_Mission_Failed_00552348;
      }
      else {
        pcVar4 = *(char **)(iVar1 + 0x40);
      }
    }
    FUN_0043e6a0(&DAT_00583420,s_TxtJobCompletedMessage_005523a8,pcVar4);
    goto LAB_00479e1e;
  }
  FUN_0043ce50(&DAT_00583420,s_BtnJobCompExit_005523e8,1);
  FUN_0043c150(&DAT_00583420,s_BtnJobCompExit_005523e8,0x80000);
  FUN_0043ce50(&DAT_00583420,s_BtnJobCompReplay_005523d4,8);
  Ui_SetButtonFlag(&DAT_00583420,s_BtnJobCompReplay_005523d4,0x80000);
  FUN_0043ce50(&DAT_00583420,s_BtnJobCompContinue_005523c0,8);
  Ui_SetButtonFlag(&DAT_00583420,s_BtnJobCompContinue_005523c0,0x80000);
  FUN_0043e610(&DAT_00583420,s_TxtJobCompletedMessage_005523a8,0x10000);
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
  FUN_004699d0((int)local_8);
  if (iVar3 != 0) {
    local_8 = (ulonglong)ROUND(*(float *)(iVar3 + 0xa4) * _DAT_0052ec38);
    str_sprintf(&DAT_00572010,s__d___d____00552388,uVar6 - iVar1,(int)local_8);
  }
  str_sprintf(&DAT_00571ff0,&PTR_DAT_00552400,iVar1);
  if (DAT_00552018 == 2) {
    FUN_0047a0d0();
  }
  else {
    FUN_0047a120();
  }
LAB_00479e1e:
  uVar5 = FUN_004699a0();
  str_sprintf(&DAT_00571fe0,&PTR_DAT_00552400,uVar5);
  FUN_00488200(local_c,s_SHADOW8g_0055230c);
  Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_COMPLETED_0054a96c,s_NO_JOB_0054a964
            );
  DAT_005635dc = 1;
  FUN_004524a0(0xf1);
  FUN_004107c0(0,&LAB_00479930);
  FUN_004af2e0();
  FUN_004b1b70(DAT_005a6818,0x80,*(undefined4 *)(iVar2 + 0x4c),*(undefined4 *)(iVar2 + 0x50),
               *(undefined4 *)(iVar2 + 0x54));
  FUN_00468e40(*(undefined4 *)(iVar2 + 0x40),*(undefined4 *)(iVar2 + 0x44),
               *(undefined4 *)(iVar2 + 0x48));
  FUN_004e4b65(1);
  FUN_0047a250();
  FUN_0043f620(&DAT_00583420,s_IAJobCompImage_0054e8b0,0x20000);
  return;
}

