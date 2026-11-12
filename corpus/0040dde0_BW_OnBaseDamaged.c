
/* sweep */

void BW_OnBaseDamaged(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_1 + 0x34) & 0x2000) != 0) {
    iVar1 = BW_FindBase(param_2);
    if (iVar1 != 0) {
      BW_SubBaseCredits(iVar1,*(undefined4 *)(DAT_005b97bc + 4));
      SrvSend_TextMsg(s_YOUR_BASE_IS_UNDER_ATTACK____005338b0,0,0x10,0,param_2,0,DAT_005a6320._2_1_)
      ;
      if ((param_3 != 0) && (*(short *)(param_3 + 0x76) == 1)) {
        BW_OnCreditPlantDestroyed(param_2,param_3);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x34) & 0x4000) != 0) {
    BW_EndRound(param_2);
  }
  return;
}

