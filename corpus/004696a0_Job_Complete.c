
/* on job completion: JOB_COMPLETED := CURRENT_JOB; CURRENT_JOB := "NO_JOB";
   PLAYER_STATS.JOBS_COMPLETED++ (player var store) */

undefined4 Job_Complete(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_4;
  
  iVar1 = Job_FindActive();
  if (iVar1 != 0) {
    iVar2 = Job_EvalConditions(*(undefined4 *)(iVar1 + 300),*(undefined4 *)(iVar1 + 0x130));
    if (iVar2 != 0) {
      Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_JOB_005342b0,&local_4);
      Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_JOB_COMPLETED_0054a96c,local_4);
      Var_SetStr(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_JOB_005342b0,
                 s_NO_JOB_0054a964);
      Var_AddInt(g_PlayerVarStore,s_PLAYER_STATS_0053f9c0,s_JOBS_COMPLETED_0054a97c,1);
      *(undefined4 *)(iVar1 + 0x10) = 0;
      return 1;
    }
  }
  return 0;
}

