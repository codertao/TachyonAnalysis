
int FUN_00469190(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_00589724;
  if (DAT_00589720 != 0) {
    do {
      iVar1 = FUN_004c67c0(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0xe0;
    } while (uVar3 < DAT_00589720);
  }
  return 0;
}

