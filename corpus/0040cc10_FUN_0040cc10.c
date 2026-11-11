
void FUN_0040cc10(undefined4 param_1)

{
  uint uVar1;
  SectorRec *pSVar2;
  
  uVar1 = 0;
  if (g_SectorCount != 0) {
    pSVar2 = g_SectorTable;
    do {
      FUN_0040cbe0(param_1,pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  return;
}

