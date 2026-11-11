
/* per server tick: each active quadrant -> rules +0x44, every DCB +0x68 think then +0x6c; Dcb_GC
   around */

void TachSrv_WorldTick(void)

{
  SpED *pSVar1;
  SpED *pSVar2;
  uint uVar3;
  Quadrant *pQVar4;
  
  if (g_CutsceneActive == 0) {
    Dcb_GC();
    uVar3 = 0;
    pQVar4 = g_Quadrants;
    if (DAT_0058af70 != 0) {
      do {
        if (pQVar4->occupied != 0) {
          if (*(code **)(g_ActiveRules + 0x44) != (code *)0x0) {
            (**(code **)(g_ActiveRules + 0x44))(pQVar4);
          }
          pSVar1 = pQVar4->dynamicList;
          while (pSVar2 = pSVar1, pSVar2 != (SpED *)0x0) {
            pSVar1 = pSVar2->next;
            if (pSVar2->think != (code *)0x0) {
              (*pSVar2->think)(pSVar2);
            }
          }
          pSVar1 = pQVar4->dynamicList;
          while (pSVar2 = pSVar1, pSVar2 != (SpED *)0x0) {
            pSVar1 = pSVar2->next;
            if (pSVar2->postThink != (code *)0x0) {
              (*pSVar2->postThink)(pSVar2);
            }
          }
        }
        uVar3 = uVar3 + 1;
        pQVar4 = pQVar4 + 1;
      } while (uVar3 < DAT_0058af70);
    }
    Dcb_GC();
  }
  return;
}

