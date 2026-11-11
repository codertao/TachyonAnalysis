
/* action 9/8, 11/1: every quadrant */

void TrigAct_OrderRemoveAll(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  SectorRec *pSVar2;
  
  uVar1 = 0;
  pSVar2 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      TrigAct_OrderRemove(param_1,param_2,param_3,pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  return;
}

