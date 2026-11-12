
/* sweep */

void BW_UpdateBaseLevel(int param_1)

{
  int iVar1;
  
  iVar1 = Rank_FromPoints(*DAT_005b97bc,*(undefined4 *)(param_1 + 0xc));
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar1 < *(int *)(param_1 + 8)) {
    iVar1 = *(int *)(param_1 + 8);
  }
  BW_ApplyTechLock(param_1,iVar1);
  if (iVar1 != *(int *)(param_1 + 4)) {
    if (*(int *)(param_1 + 0x18) != 0) {
      Starbase_SetDockState(*(int *)(param_1 + 0x18),iVar1);
    }
    if (*(int *)(param_1 + 4) < iVar1) {
      BW_MsgBaseLevelUp();
      *(int *)(param_1 + 4) = iVar1;
      return;
    }
    BW_MsgBaseLevelDown(param_1,iVar1);
    *(int *)(param_1 + 4) = iVar1;
  }
  return;
}

