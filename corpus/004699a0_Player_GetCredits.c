
/* PLAYER_MAIN_VARS/CREDITS */

undefined4 Player_GetCredits(void)

{
  undefined4 local_4;
  
  local_4 = 0;
  Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_CREDITS_005341ac,&local_4);
  return local_4;
}

