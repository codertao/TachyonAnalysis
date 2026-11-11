
/* look up an already-loaded sector by spx name in the galaxy table (dedupe) */

SectorRec * Spx_FindLoaded(undefined4 param_1)

{
  int iVar1;
  SectorRec *pSVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  pSVar2 = g_SectorTable;
  if (g_SectorCount != 0) {
    iVar4 = 0x5a5554;
    do {
      iVar1 = str_cmp(param_1,iVar4);
      if (iVar1 == 0) {
        return pSVar2;
      }
      uVar3 = uVar3 + 1;
      pSVar2 = pSVar2 + 1;
      iVar4 = iVar4 + 0x44;
    } while (uVar3 < g_SectorCount);
  }
  return (SectorRec *)0x0;
}

