
void FUN_0041f3a0(void)

{
  uint uVar1;
  SectorRec *pSVar2;
  
  uVar1 = 0;
  pSVar2 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      FUN_0041f260(pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  return;
}

