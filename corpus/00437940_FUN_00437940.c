
void FUN_00437940(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_005b1f0c + 0xd0;
  iVar1 = FUN_00455e20(&DAT_005b20e0,iVar2);
  iVar3 = iVar1 - DAT_005b20e0;
  if ((param_2 == 0) && (iVar1 >> 10 < iVar3)) {
    iVar3 = iVar1 >> 10;
  }
  DAT_005b20e0 = DAT_005b20e0 + iVar3;
  iVar2 = FUN_00455e00(&DAT_005b20e0,iVar2);
  if ((param_2 == 0) && (iVar2 >> 10 < iVar2 - DAT_005b20f8)) {
    DAT_005b20f8 = DAT_005b20f8 + (iVar2 >> 10);
    return;
  }
  DAT_005b20f8 = DAT_005b20f8 + (iVar2 - DAT_005b20f8);
  return;
}

