
void FUN_00414660(void)

{
  if (DAT_005b9268 != 0) {
    SpRules_RefillPools(DAT_0058b064,1);
    FUN_00437940(GLBL_SOME_CONTEXT,1);
    maybe_log_something(s_ENERGY_REPLENISHED_005341b4,0xc);
    Chatter_PlayRandom(5);
  }
  return;
}

