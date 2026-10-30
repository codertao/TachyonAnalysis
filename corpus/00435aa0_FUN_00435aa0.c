
void FUN_00435aa0(void)

{
  int iVar1;
  
  iVar1 = DAT_0058b064;
  if (((g_FlightStateFlags & 4) != 0) && (DAT_005b7e38 == 0)) {
    FUN_0048fbf0(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_ENEMY_KILLED_0053f9d0,
                 *(undefined4 *)(DAT_0058b064 + 0xe0));
    FUN_0048fbf0(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_FRIENDLY_KILLED_0053f9b0,
                 *(undefined4 *)(iVar1 + 0xe4));
    FUN_0048fbf0(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_LASERS_FIRED_0053f9a0,
                 *(undefined4 *)(iVar1 + 0xe8));
    FUN_0048fbf0(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_MISSILES_FIRED_0053f990,
                 *(undefined4 *)(iVar1 + 0xf0));
    FUN_0048fbf0(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_LASERS_HIT_0053f984,
                 *(undefined4 *)(iVar1 + 0xec));
    FUN_0048fbf0(DAT_005a6148,s_PLAYER_STATS_0053f9c0,s_MISSILES_HIT_0053f974,
                 *(undefined4 *)(iVar1 + 0xf4));
  }
  FUN_00454bf0();
  FUN_0048e380(&DAT_005a5520,0x910);
  return;
}

