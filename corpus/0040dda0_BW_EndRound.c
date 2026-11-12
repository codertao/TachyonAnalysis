
/* sweep */

void BW_EndRound(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = BW_FindBase(param_1);
  if (iVar1 != 0) {
    DAT_005b97b8 = BW_FindOtherTeam(param_1);
    DAT_005b97b4 = Round_FreezeTicks();
    SrvSend_RoundFreeze();
    BW_WriteStatsFile();
    SrvSend_RoundResult();
  }
  return;
}

