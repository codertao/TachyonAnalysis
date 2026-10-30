
void FUN_004549d0(void)

{
  uint uVar1;
  undefined4 local_4;
  
  if ((g_FlightStateFlags & 4) == 0) {
    DAT_005b20d4 = 0;
    DAT_005b20d8 = 1;
    DAT_005b20dc = 0;
  }
  else {
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_WEAP_DOUBLEFIRE_00548940,&DAT_005b20dc);
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_WEAP_A_00548938,&DAT_005b20d4);
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_WEAP_B_00548930,&DAT_005b20d8);
  }
  uVar1 = DAT_005b20d0 - 1;
  if (uVar1 < DAT_005b20d4) {
    DAT_005b20d4 = uVar1;
  }
  if (uVar1 < DAT_005b20d8) {
    DAT_005b20d8 = uVar1;
  }
  if ((DAT_005b20d4 == DAT_005b20d8) &&
     (DAT_005b20d8 = DAT_005b20d8 + 1, DAT_005b20d0 <= DAT_005b20d8)) {
    DAT_005b20d8 = 0;
  }
  if ((g_FlightStateFlags & 4) != 0) {
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_WEAP_A_LINKED_00548920,&local_4);
    FUN_00453280(0,local_4);
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_WEAP_B_LINKED_00548910,&local_4);
    FUN_00453280(1,local_4);
    FUN_00453140(1);
    FUN_00453190();
    return;
  }
  FUN_00453280(0,0);
  FUN_00453280(1,0);
  FUN_00453140(1);
  FUN_00453190();
  return;
}

