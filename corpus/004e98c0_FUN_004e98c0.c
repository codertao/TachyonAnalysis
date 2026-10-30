
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004e98c0(void)

{
  bool bVar1;
  uint in_EAX;
  uint uVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  int unaff_EBX;
  undefined4 unaff_EBP;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  
  if (DAT_00604440 == 0) {
    return in_EAX;
  }
  FUN_004e9720();
  DAT_005a630c = *(undefined4 *)(&DAT_005a63c0 + (uint)DAT_005a6308 * 4);
  DAT_005a6310 = *(undefined4 *)(&DAT_005a6440 + (uint)DAT_005a6308 * 4);
  uVar2 = (uint)DAT_005a6308;
  _DAT_004e9704 = 1;
  iVar3 = extraout_ECX;
  iVar5 = DAT_004e96ec;
  _DAT_004e96fc = unaff_EBP;
  while( true ) {
    iVar4 = iVar5 + -1;
    bVar1 = iVar5 < 1;
    iVar5 = iVar4;
    if (iVar4 == 0 || bVar1) {
      _DAT_004e9704 = _DAT_004e9704 ^ 1;
      iVar5 = DAT_004e96ec;
    }
    if (_DAT_004e9704 != 0) {
      uVar2 = (*DAT_004e96f0)();
      iVar3 = extraout_ECX_00;
    }
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) break;
    unaff_EBX = unaff_EBX - unaff_ESI;
    if (unaff_EBX < 0) {
      unaff_EBX = unaff_EBX + _DAT_004e96f8;
    }
  }
  return uVar2;
}

