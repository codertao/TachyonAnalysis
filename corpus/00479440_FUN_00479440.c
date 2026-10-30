
void FUN_00479440(void)

{
  char *pcVar1;
  char local_40 [64];
  
  FUN_0043bf10(&DAT_00583420,s_JOB_CONTRACT_ACCEPTED_005522c0);
  FUN_00479320();
  if (DAT_00563644 != 0) {
    str_sprintf(local_40,DAT_00563644 + 0x14);
    pcVar1 = _strstr(local_40,&DAT_0053fec0);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_REGION_005342a4,local_40);
    FUN_00468ff0(*(undefined4 *)(DAT_00563644 + 0x124),*(undefined4 *)(DAT_00563644 + 0x128));
    FUN_00478b90();
    FUN_00478930();
    FUN_0043ce50(&DAT_00583420,s_BtnJobAccept_00552170,8);
    Ui_SetButtonFlag(&DAT_00583420,s_BtnJobAccept_00552170,0x80000);
    FUN_0043ce50(&DAT_00583420,s_BtnJobBreak_00552180,1);
    FUN_0043c150(&DAT_00583420,s_BtnJobBreak_00552180,0x80000);
    if (DAT_005a6740 != 0) {
      FUN_00469030(*(undefined4 *)(DAT_00563644 + 300),*(undefined4 *)(DAT_00563644 + 0x130));
      Var_SetInt(g_PlayerVarStore,DAT_00563644 + 0x14,DAT_00563644 + 0x54,2);
    }
    if (DAT_005a6744 != 0) {
      FUN_00469030(*(undefined4 *)(DAT_00563644 + 300),*(undefined4 *)(DAT_00563644 + 0x130));
      Var_SetInt(g_PlayerVarStore,DAT_00563644 + 0x14,DAT_00563644 + 0x54,1);
    }
    if (DAT_005a6748 != 0) {
      FUN_00469030(*(undefined4 *)(DAT_00563644 + 300),*(undefined4 *)(DAT_00563644 + 0x130));
      Var_SetInt(g_PlayerVarStore,DAT_00563644 + 0x14,DAT_00563644 + 0x54,3);
    }
  }
  FUN_0046ae30();
  FUN_0046d870();
  g_StarbaseScreen = &g_Mode_StarbaseShipyard;
  g_TitleMenu_ExitFlag = 1;
  return;
}

