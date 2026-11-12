
/* sweep */

void BW_RoundTimerTick(void)

{
  if ((DAT_005b97b4 != 0) && (DAT_005b97b4 = DAT_005b97b4 + -1, DAT_005b97b4 == 0)) {
    BW_NextRound();
    return;
  }
  return;
}

