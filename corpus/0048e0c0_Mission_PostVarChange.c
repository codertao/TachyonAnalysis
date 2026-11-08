
/* var (cat,idx) changed -> Trig_MatchVarConds on every quadrant's two SPX tables */

void Mission_PostVarChange(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_1 << 0x10 | param_2 & 0xffff;
  uVar1 = 0;
  puVar2 = &DAT_005a5548;
  if (DAT_005a5544 != 0) {
    do {
      Trig_MatchVarConds(uVar3,param_3,puVar2[1],*puVar2);
      Trig_MatchVarConds(uVar3,param_3,puVar2[2],*puVar2);
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 0x11;
    } while (uVar1 < DAT_005a5544);
  }
  return;
}

