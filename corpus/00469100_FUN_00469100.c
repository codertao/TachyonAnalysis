
int FUN_00469100(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_00589748;
  if (DAT_00589744 != 0) {
    do {
      iVar1 = str_cmp(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x24;
    } while (uVar3 < DAT_00589744);
  }
  return 0;
}

