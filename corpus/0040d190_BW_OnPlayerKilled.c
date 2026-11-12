
/* sweep */

void BW_OnPlayerKilled(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x104) = 0;
  if (((param_2 != 0) && (*(short *)(param_2 + 0x76) == 1)) &&
     (*(char *)(param_2 + 0xc2) != *(char *)(param_1 + 0xc2))) {
    if (param_2 != param_1) {
      BaseWars_AwardKillPoints(param_2,param_1);
    }
    BW_AddTeamStat(*(undefined1 *)(param_1 + 0xc2),3,1);
    BW_AddTeamStat(*(undefined1 *)(param_2 + 0xc2),1,1);
  }
  BW_DeathPenalty(param_1);
  return;
}

