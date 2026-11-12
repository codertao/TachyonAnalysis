
/* points += n (cap 3700), BaseWars_UpdateRank */

void BaseWars_AddPoints(int param_1,int param_2)

{
  int iVar1;
  
  if (DAT_005b2b0c != 0) {
    BW_SendRankProgress(param_1);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x100) + param_2;
  *(int *)(param_1 + 0x100) = iVar1;
  if (0xe74 < iVar1) {
    *(undefined4 *)(param_1 + 0x100) = 0xe74;
  }
  BW_MsgGainedExp(param_1,param_2);
  BaseWars_UpdateRank(param_1);
  BW_SendRankProgress(param_1);
  return;
}

