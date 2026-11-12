
/* sweep */

void BW_SendAllFactionLevels(void)

{
  int iVar1;
  
  for (iVar1 = DAT_005b97ac; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x10)) {
    Faction_SendLevelAllSectors(iVar1);
  }
  return;
}

