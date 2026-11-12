
/* sweep */

SectorRec * Sector_FindById(int param_1)

{
  SectorRec *pSVar1;
  uint uVar2;
  
  uVar2 = 0;
  pSVar1 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      if (pSVar1->sectorId == param_1) {
        return pSVar1;
      }
      uVar2 = uVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (uVar2 < g_SectorCount);
  }
  return (SectorRec *)0x0;
}

