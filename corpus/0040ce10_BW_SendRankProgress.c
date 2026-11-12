
/* sweep */

void BW_SendRankProgress(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = Rank_ThresholdAt(&g_RankPointThresholds,*(int *)(param_1 + 0xfc) + 1,
                           *(int *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x104));
  SrvSend_RankProgress(*(undefined4 *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0x100),uVar1);
  return;
}

