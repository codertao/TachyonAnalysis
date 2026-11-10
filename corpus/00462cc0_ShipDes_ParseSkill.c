
/* SKILL string -> 0..3 via 0x549e60; unknown/missing -> 2 (ACE) */

undefined * ShipDes_ParseSkill(undefined4 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &g_ShipDesSkillTable;
  puVar1 = g_ShipDesSkillTable;
  while( true ) {
    if (puVar1 == (undefined *)0x0) {
      return (undefined *)0x2;
    }
    iVar2 = str_cmp(param_1,*ppuVar3);
    if (iVar2 == 0) break;
    puVar1 = ppuVar3[2];
    ppuVar3 = ppuVar3 + 2;
  }
  return ppuVar3[1];
}

