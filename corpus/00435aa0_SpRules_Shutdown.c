
/* write PLAYER_STATS (kills, shots, hits) to save vars (SP only) */

void SpRules_Shutdown(void)

{
  SpED_SrvPlayer *pSVar1;
  
  pSVar1 = g_SrvCurShip;
  if (((g_FlightStateFlags & 4) != 0) && (DAT_005b7e38 == 0)) {
    Var_AddInt(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_ENEMY_KILLED_0053f9d0,
               *(undefined4 *)&g_SrvCurShip->field_0xe0);
    Var_AddInt(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_FRIENDLY_KILLED_0053f9b0,
               *(undefined4 *)&pSVar1->field_0xe4);
    Var_AddInt(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_LASERS_FIRED_0053f9a0,
               *(undefined4 *)&pSVar1->field_0xe8);
    Var_AddInt(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_MISSILES_FIRED_0053f990,
               *(undefined4 *)&pSVar1->field_0xf0);
    Var_AddInt(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_LASERS_HIT_0053f984,
               *(undefined4 *)&pSVar1->field_0xec);
    Var_AddInt(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_MISSILES_HIT_0053f974,
               *(undefined4 *)&pSVar1->field_0xf4);
  }
  Player_SaveShipData();
  clr_bytes(&DAT_005a5520,0x910);
  return;
}

