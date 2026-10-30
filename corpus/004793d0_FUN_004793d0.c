
void FUN_004793d0(void)

{
  char *pcVar1;
  char local_40 [64];
  
  if (DAT_00563644 != 0) {
    str_sprintf(local_40,DAT_00563644 + 0x14);
    pcVar1 = _strstr(local_40,&DAT_0053fec0);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
    Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_REGION_005342a4,local_40);
  }
  FUN_0046d870();
  g_StarbaseScreen = &g_Mode_StarbaseShipyard;
  g_TitleMenu_ExitFlag = 1;
  return;
}

