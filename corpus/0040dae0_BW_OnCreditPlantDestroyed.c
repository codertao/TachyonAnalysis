
/* sweep */

void BW_OnCreditPlantDestroyed(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != *(byte *)(param_2 + 0xc2)) {
    iVar1 = BW_FindBase(param_1);
    if (iVar1 != 0) {
      BaseWars_AddPoints(param_2,*(int *)(iVar1 + 4) * 0x19);
      BW_AddCarriedCredits(param_2,*(int *)(iVar1 + 4) * 100);
      BW_AddTeamStat(*(undefined1 *)(param_2 + 0xc2),0,1);
    }
  }
  return;
}

