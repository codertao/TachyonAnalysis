
/* sweep */

void SpRules_TickQuadrants(void)

{
  Quadrant *pQVar1;
  uint uVar2;
  
  Counters_Tick();
  Dialog_Update();
  uVar2 = 0;
  pQVar1 = g_Quadrants;
  if (DAT_0058af70 != 0) {
    do {
      if (pQVar1->occupied != 0) {
        Counters_PostValues(pQVar1);
      }
      uVar2 = uVar2 + 1;
      pQVar1 = pQVar1 + 1;
    } while (uVar2 < DAT_0058af70);
  }
  return;
}

