
/* sweep */

void Ent_ClearTargetRefs(undefined4 param_1)

{
  int iVar1;
  Quadrant *pQVar2;
  uint uVar3;
  
  uVar3 = 0;
  pQVar2 = g_Quadrants;
  if (DAT_0058af70 != 0) {
    while (iVar1 = Quad_ContainsEnt(param_1,pQVar2), iVar1 == 0) {
      uVar3 = uVar3 + 1;
      pQVar2 = pQVar2 + 1;
      if (DAT_0058af70 <= uVar3) {
        return;
      }
    }
    Quad_RemoveTargetEnt(param_1,pQVar2);
  }
  return;
}

