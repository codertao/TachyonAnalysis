
/* sweep */

void BW_NextRound(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MpRules_CountRound();
  if (iVar1 == 0) {
    BW_FreeBases();
    MpRules_ResetRound();
    SrvSend_RoundResume();
    return;
  }
  BW_FreeBases();
  uVar2 = MpRules_PickNextMap();
  Sector_StartMP(uVar2);
  return;
}

