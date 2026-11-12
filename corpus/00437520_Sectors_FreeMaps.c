
/* sweep */

void Sectors_FreeMaps(void)

{
  SectorRec *pSVar1;
  uint uVar2;
  
  uVar2 = 0;
  pSVar1 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      SectorMap_Free(&pSVar1->quadrant->staticSectorMap);
      Quadrant_FreeMaps(pSVar1->quadrant);
      OurFreeMem(pSVar1->spx);
      if (*(int *)&pSVar1->field_0x8 != 0) {
        OurFreeMem(*(int *)&pSVar1->field_0x8);
      }
      clr_bytes(pSVar1->quadrant,0xbc);
      clr_bytes(pSVar1,0x44);
      uVar2 = uVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (uVar2 < g_SectorCount);
  }
  g_SectorCount = 0;
  return;
}

