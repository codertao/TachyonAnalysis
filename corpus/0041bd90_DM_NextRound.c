
/* sweep */

void DM_NextRound(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = MpRules_CountRound();
  if (iVar1 == 0) {
    MpRules_ResetRound();
    SrvSend_RoundResume();
  }
  else {
    uVar2 = MpRules_PickNextMap();
    Sector_StartMP(uVar2);
  }
  DAT_005b2824 = GLBL_spacesav[0x61] * 3000;
  return;
}

