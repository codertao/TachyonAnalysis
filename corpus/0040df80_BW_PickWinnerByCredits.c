
/* sweep */

undefined4 BW_PickWinnerByCredits(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = Race_FindByName(&DAT_00533540);
  uVar2 = Race_FindByName(s_GALSPAN_00533548);
  iVar3 = BW_FindBase(uVar2);
  if (iVar3 != 0) {
    uVar4 = *(uint *)(iVar3 + 0xc);
  }
  iVar3 = BW_FindBase(uVar1);
  if ((iVar3 != 0) && (uVar4 < *(uint *)(iVar3 + 0xc))) {
    return uVar1;
  }
  return uVar2;
}

