
/* SP: rates from PLAYER_SHIP_DATA LASER/SHIELD/BURNER_RECHARGE_RATE; MP: all 1.0 */

void PlayerPower_LoadRates(void)

{
  undefined4 local_4;
  
  if ((g_FlightStateFlags & 4) != 0) {
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_LASER_RECHARGE_RATE_005488fc,&local_4);
    Power_SetRate(&g_PlayerPower,local_4,1,DAT_005b1f0c + 0xd0);
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_SHIELD_RECHARGE_RATE_005488d0,&local_4);
    Power_SetRate(&g_PlayerPower,local_4,0,DAT_005b1f0c + 0xd0);
    Var_GetInt(DAT_005a6148,s_PLAYER_SHIP_DATA_005488e8,s_BURNER_RECHARGE_RATE_005488b8,&local_4);
    Power_SetRate(&g_PlayerPower,local_4,2,DAT_005b1f0c + 0xd0);
    return;
  }
  Power_SetRate(&g_PlayerPower,0x10000,1,DAT_005b1f0c + 0xd0);
  Power_SetRate(&g_PlayerPower,0x10000,0,DAT_005b1f0c + 0xd0);
  Power_SetRate(&g_PlayerPower,0x10000,2,DAT_005b1f0c + 0xd0);
  return;
}

