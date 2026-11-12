
/* sweep */

void BW_DeathPenalty(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x100);
  *piVar1 = *piVar1 + *(int *)(param_1 + 0xfc) * -5;
  if (*piVar1 < 0) {
    *(undefined4 *)(param_1 + 0x100) = 0;
  }
  BaseWars_UpdateRank(param_1);
  BW_SendRankProgress(param_1);
  return;
}

