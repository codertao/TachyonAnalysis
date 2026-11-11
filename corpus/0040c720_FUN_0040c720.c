
Quadrant * FUN_0040c720(int param_1)

{
  SectorRec *pSVar1;
  uint uVar2;
  
  uVar2 = 0;
  pSVar1 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      if (((*(byte *)((int)pSVar1->spx + 0x118) & 1) != 0) &&
         (*(int *)((int)pSVar1->spx + 0x11c) == *(int *)(param_1 + 0x140))) {
        return pSVar1->quadrant;
      }
      uVar2 = uVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (uVar2 < g_SectorCount);
  }
  return g_SectorTable[0].quadrant;
}

