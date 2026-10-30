
void FUN_00456df0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b1f0c + 0xd0;
  DAT_005b20f8 = DAT_005b20f8 + param_1;
  iVar2 = FUN_00455e00(&DAT_005b20e0,iVar1);
  if (iVar2 < DAT_005b20f8) {
    DAT_005b20f8 = FUN_00455e00(&DAT_005b20e0,iVar1);
  }
  return;
}

