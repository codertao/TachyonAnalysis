
/* sweep */

void Dialog_UpdateAllQueues(void)

{
  uint uVar1;
  SectorRec *pSVar2;
  
  uVar1 = 0;
  pSVar2 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      Dialog_UpdateQuadQueue(pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  return;
}

