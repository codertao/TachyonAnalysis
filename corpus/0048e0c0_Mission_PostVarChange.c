
/* var (cat,idx) changed -> Trig_MatchVarConds on every quadrant's two SPX tables */

void Mission_PostVarChange(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  SectorRec *pSVar2;
  uint uVar3;
  
  uVar3 = param_1 << 0x10 | param_2 & 0xffff;
  uVar1 = 0;
  pSVar2 = g_SectorTable;
  if (g_SectorCount != 0) {
    do {
      Trig_MatchVarConds(uVar3,param_3,pSVar2->spx,pSVar2->quadrant);
      Trig_MatchVarConds(uVar3,param_3,*(undefined4 *)&pSVar2->field_0x8,pSVar2->quadrant);
      uVar1 = uVar1 + 1;
      pSVar2 = pSVar2 + 1;
    } while (uVar1 < g_SectorCount);
  }
  return;
}

