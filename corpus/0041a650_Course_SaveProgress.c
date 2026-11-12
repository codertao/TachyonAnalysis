
/* sweep: SHIP_COURSE_NUMS */

void Course_SaveProgress(undefined4 param_1)

{
  undefined4 local_44;
  undefined1 local_40 [64];
  
  Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SHIP_00534b18,&local_44);
  str_sprintf(local_40,s_SHIP__d_00534b10,local_44);
  Var_SetInt(DAT_005a6148,s_SHIP_COURSE_NUMS_00534afc,local_40,param_1);
  return;
}

