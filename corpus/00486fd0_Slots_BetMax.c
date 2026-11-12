
/* sweep */

void Slots_BetMax(void)

{
  SndTrig_PostEvent(s_PLAYER_BETS_MAX_0055804c,&DAT_005833e0,&DAT_00583498);
  Slots_PlaceBet(1);
  Slots_PlaceBet(1);
  Slots_PlaceBet(1);
  Slots_Spin();
  return;
}

