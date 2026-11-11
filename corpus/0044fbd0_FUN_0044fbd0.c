
void FUN_0044fbd0(void)

{
  uint uVar1;
  SectorRec *pSVar2;
  
  uVar1 = 0;
  if (g_SectorCount != 0) {
    pSVar2 = g_SectorTable;
    do {
      FUN_0044fb70(pSVar2);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  uVar1 = 0;
  if (g_SectorCount != 0) {
    pSVar2 = g_SectorTable;
    do {
      FUN_0044fbb0(pSVar2->spx,pSVar2->quadrant);
      FUN_0044fbb0(*(undefined4 *)&pSVar2->field_0x8,pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  return;
}

