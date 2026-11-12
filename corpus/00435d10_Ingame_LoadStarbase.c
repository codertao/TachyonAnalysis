
/* sweep */

void Ingame_LoadStarbase(int param_1)

{
  int local_14;
  undefined1 local_10 [16];
  
  local_14 = 0;
  if (param_1 == -1) {
    Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_STARBASE_00532c20,&local_14);
  }
  else {
    local_14 = param_1;
  }
  Var_GetTableKey(s_STARBASES_00532e38,local_14,local_10,&DAT_0053fa00);
  Ingame_LoadBaseLocation(local_10);
  DAT_005a5dcc = local_14;
  return;
}

