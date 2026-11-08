
int FUN_0046b4d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_00589738;
  if (DAT_00589734 != 0) {
    do {
      iVar1 = str_cmp(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x100;
    } while (uVar3 < DAT_00589734);
  }
  return 0;
}

