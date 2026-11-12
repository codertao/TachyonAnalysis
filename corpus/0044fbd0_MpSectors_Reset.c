
/* sweep */

void MpSectors_Reset(void)

{
  uint uVar1;
  SectorRec *pSVar2;
  
  uVar1 = 0;
  if (g_SectorCount != 0) {
    pSVar2 = g_SectorTable;
    do {
      MpSector_Free(pSVar2);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  uVar1 = 0;
  if (g_SectorCount != 0) {
    pSVar2 = g_SectorTable;
    do {
      MpSector_ApplyPlacements(pSVar2->spx,pSVar2->quadrant);
      MpSector_ApplyPlacements(*(undefined4 *)&pSVar2->field_0x8,pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  return;
}

