
/* sweep: CURRENT_REGION/SECTOR */

void Player_SaveLocation(undefined4 param_1,undefined4 param_2)

{
  Var_SetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_REGION_00548d14,DAT_005a5dcc);
  Var_SetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SECTOR_00548d04,param_2);
  return;
}

