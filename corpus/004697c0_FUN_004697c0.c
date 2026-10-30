
void FUN_004697c0(void)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = Job_FindActive();
  if (iVar1 != 0) {
    Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_JOB_005342b0,&local_4);
    Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_COMPLETED_0054a96c,local_4);
    Var_SetStr(g_PlayerVarStore,iVar1 + 0x14,iVar1 + 0x54,s_SUCCESS_0054a994);
  }
  return;
}

