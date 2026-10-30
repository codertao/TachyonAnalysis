
int FUN_00469830(void)

{
  DAT_005635cc = 0;
  if (DAT_005a6614 == 0) {
    Var_GetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_STARBASE_00532c20,&DAT_005635cc);
    if (DAT_005635cc < 0) {
      DAT_005635cc = 0;
      return 0;
    }
  }
  else {
    DAT_005635cc = DAT_005a6618;
    Var_SetInt(g_PlayerVarStore,s_PLAYER_MAIN_VARS_00534198,s_STARBASE_00532c20,DAT_005a6618);
  }
  return DAT_005635cc;
}

