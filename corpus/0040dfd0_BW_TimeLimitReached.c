
/* sweep */

void BW_TimeLimitReached(void)

{
  DAT_005b97b8 = BW_PickWinnerByCredits();
  BW_EndRound(DAT_005b97b8);
  DAT_005b97b4 = Round_FreezeTicks();
  return;
}

