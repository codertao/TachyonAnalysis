
uint FUN_00406130(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = DAT_005b9ab4;
  if (DAT_005b9ab0 != 0) {
    do {
      iVar1 = FUN_004c67c0(iVar3,param_1);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (uVar2 < DAT_005b9ab0);
  }
  return 0;
}

