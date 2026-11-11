
/* post to every loaded quadrant */

void Mission_PostEventAll(undefined4 param_1)

{
  Quadrant *pQVar1;
  SectorRec *pSVar2;
  uint uVar3;
  
  uVar3 = 0;
  pSVar2 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      pQVar1 = pSVar2->quadrant;
      Mission_MatchTriggers(param_1,pQVar1,pQVar1->sector->spx);
      Mission_MatchTriggers(param_1,pQVar1,*(undefined4 *)&pQVar1->sector->field_0x8);
      uVar3 = uVar3 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar3 < g_SectorCount);
  }
  return;
}

