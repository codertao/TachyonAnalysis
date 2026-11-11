
void FUN_004146a0(void)

{
  if (DAT_005b9268 != 0) {
    FUN_00454540(g_SrvCurShip);
    FUN_004546a0();
    maybe_log_something(s_AMMO_REPLENISHED_005341c8,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

