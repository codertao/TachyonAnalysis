
/* sweep */

void DM_RoundTimerTick(void)

{
  if ((DAT_005b2820 != 0) && (DAT_005b2820 = DAT_005b2820 + -1, DAT_005b2820 == 0)) {
    DM_NextRound();
  }
  if (DAT_005b2824 != 0) {
    DAT_005b2824 = DAT_005b2824 + -1;
    if (DAT_005b2824 == 0) {
      DM_EndRound();
    }
    DM_MsgMinutesLeft(DAT_005b2824);
  }
  return;
}

