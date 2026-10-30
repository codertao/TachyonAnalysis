
void FUN_00456da0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_005b1f0c + 0xd0;
  DAT_005b20e0 = DAT_005b20e0 + param_1;
  iVar2 = FUN_00455e20(&DAT_005b20e0,iVar1);
  if (iVar2 < DAT_005b20e0) {
    DAT_005b20e0 = FUN_00455e20(&DAT_005b20e0,iVar1);
  }
  return;
}

