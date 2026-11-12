
/* sweep */

void BW_SubBaseCredits(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar1 = param_1[3];
    param_1[3] = iVar1 - param_2;
    if (iVar1 - param_2 < 0) {
      param_1[3] = 0;
    }
    BW_UpdateBaseLevel(param_1);
    uVar2 = Rank_ThresholdAt(*DAT_005b97bc,param_1[1] + 1,param_1[1],0);
    SrvSend_FactionProgress(*param_1,param_1[3],uVar2);
    Faction_SendLevelAllSectors(param_1);
  }
  return;
}

