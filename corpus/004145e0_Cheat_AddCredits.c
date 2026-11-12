
/* sweep: +5000 */

void Cheat_AddCredits(void)

{
  int local_84;
  undefined1 local_80 [128];
  
  if (DAT_005b9268 != 0) {
    Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CREDITS_005341ac,&local_84);
    local_84 = local_84 + 5000;
    Var_SetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CREDITS_005341ac,local_84);
    str_sprintf(local_80,s__d_CREDITS_ADDED_TO_ACCOUNT_0053417c,5000);
    maybe_log_something(local_80,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

