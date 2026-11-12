
/* sweep */

void Cheat_RefillEnergy(void)

{
  if (DAT_005b9268 != 0) {
    SpRules_RefillPools(g_SrvCurShip,1);
    PlayerPower_Refill(GLBL_SOME_CONTEXT,1);
    maybe_log_something(s_ENERGY_REPLENISHED_005341b4,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

