
/* sweep */

void DM_EndRound(void)

{
  SrvSend_Scoreboard();
  SrvSend_RoundFreeze();
  DAT_005b2820 = Round_FreezeTicks();
  DM_WriteStatsFile();
  return;
}

