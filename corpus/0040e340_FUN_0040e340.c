
int FUN_0040e340(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = FUN_004580c0(s_GALSPAN_00533548);
  iVar2 = FUN_004580c0(&DAT_00533540);
  if ((GLBL_spacesav[0x6c] != 0) ||
     ((iVar3 = param_1, param_1 != iVar1 && (bVar9 = param_1 != iVar2, param_1 = iVar2, bVar9)))) {
    iVar3 = FUN_0040e310(iVar1);
    iVar4 = FUN_0040e310(iVar2);
    uVar5 = (uint)(iVar4 * 100) / DAT_006af664;
    uVar6 = (uint)(iVar3 * 100) / DAT_006af664;
    uVar7 = uVar5 - uVar6;
    uVar8 = (int)uVar7 >> 0x1f;
    if ((int)((uVar7 ^ uVar8) - uVar8) < 6) {
      return param_1;
    }
    iVar3 = iVar1;
    if ((int)uVar5 < (int)(uVar6 + 5)) {
      iVar3 = iVar2;
    }
  }
  return iVar3;
}

