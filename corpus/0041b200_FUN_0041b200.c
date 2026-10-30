
int FUN_0041b200(void)

{
  int local_48;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  local_48 = 0;
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_44);
  str_sprintf(local_40,s_SHIP__d_00534b10,local_44);
  Var_GetInt(DAT_005a6148,s_SHIP_COURSE_NUMS_00534afc,local_40,&local_48);
  if (local_48 == 0) {
    local_48 = 1;
  }
  if (DAT_005b2c10 == 0) {
    DAT_005b2c10 = 1;
  }
  return local_48;
}

