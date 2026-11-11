
/* refresh var-bound objects (type 10), post var change to every quadrant */

void Mission_OnVarChanged(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Quadrant *pQVar1;
  SpED *pSVar2;
  uint uVar3;
  SectorRec *pSVar4;
  
  uVar3 = 0;
  pSVar4 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      pQVar1 = pSVar4->quadrant;
      for (pSVar2 = pQVar1->dynamicList; pSVar2 != (SpED *)0x0; pSVar2 = pSVar2->next) {
        if (pSVar2->poolType == 10) {
          Gate_UpdateCollideState(pSVar2);
        }
      }
      Mission_PostVarChange(param_1,param_2,param_3,pQVar1);
      uVar3 = uVar3 + 1;
      pSVar4 = pSVar4 + 1;
    } while (uVar3 < g_SectorCount);
  }
  return;
}

