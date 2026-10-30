
int FUN_00469140(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_00589730;
  if (DAT_00589728 != 0) {
    do {
      iVar1 = FUN_004c67c0(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x1b8;
    } while (uVar3 < DAT_00589728);
  }
  return 0;
}

