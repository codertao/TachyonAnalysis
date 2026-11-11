
void FUN_004355a0(void)

{
  SpED *pSVar1;
  code *pcVar2;
  uint uVar3;
  SectorRec *pSVar4;
  
  uVar3 = 0;
  pSVar4 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      for (pSVar1 = pSVar4->quadrant->dynamicList; pSVar1 != (SpED *)0x0; pSVar1 = pSVar1->next) {
        if ((pSVar1->desc != (Desc *)0x0) && (pcVar2 = pSVar1->desc->notify, pcVar2 != (code *)0x0))
        {
          (*pcVar2)(pSVar1,4,0);
        }
      }
      uVar3 = uVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (uVar3 < g_SectorCount);
  }
  return;
}

