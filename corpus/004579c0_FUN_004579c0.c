
void FUN_004579c0(SpED *param_1)

{
  int iVar1;
  Quadrant *q;
  uint uVar2;
  
  uVar2 = 0;
  q = g_Quadrants;
  if (DAT_0058af70 != 0) {
    do {
      iVar1 = FUN_0045d080(param_1,&q->staticSectorMap);
      if (iVar1 != 0) {
        Ent_LeaveQuadrant(param_1,q);
        FUN_00445720(param_1,q);
      }
      uVar2 = uVar2 + 1;
      q = q + 1;
    } while (uVar2 < DAT_0058af70);
  }
  return;
}

