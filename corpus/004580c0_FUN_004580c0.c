
uint FUN_004580c0(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = DAT_0058f2e4;
  if (DAT_0058f2e0 != 0) {
    do {
      iVar1 = str_cmp(iVar3,param_1);
      if (iVar1 == 0) {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (uVar2 < DAT_0058f2e0);
  }
  return 0;
}

