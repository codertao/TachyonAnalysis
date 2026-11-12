
/* sweep */

void Ent_LeaveAllQuadrants(SpED *param_1)

{
  int iVar1;
  Quadrant *q;
  uint uVar2;
  
  uVar2 = 0;
  q = g_Quadrants;
  if (DAT_0058af70 != 0) {
    do {
      iVar1 = Quad_UnlinkDynamicHead(param_1,&q->staticSectorMap);
      if (iVar1 != 0) {
        Ent_LeaveQuadrant(param_1,q);
        Nop(param_1,q);
      }
      uVar2 = uVar2 + 1;
      q = q + 1;
    } while (uVar2 < DAT_0058af70);
  }
  return;
}

