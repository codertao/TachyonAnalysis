
/* rank (+0xfc, 1..10) = count of g_RankPointThresholds <= points (+0x100); msgs +
   SrvSend_RankChange on change */

void BaseWars_UpdateRank(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0040c940(&g_RankPointThresholds,*(undefined4 *)(param_1 + 0x100));
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar1 != *(int *)(param_1 + 0xfc)) {
    if (*(int *)(param_1 + 0xfc) < iVar1) {
      BaseWars_MsgRankUp();
    }
    else {
      BaseWars_MsgRankDown(param_1,iVar1);
    }
    *(int *)(param_1 + 0xfc) = iVar1;
    SrvSend_RankChange(*(undefined4 *)(param_1 + 0xdc));
  }
  return;
}

