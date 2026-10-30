
/* section name -> section object (+0x30 = id) */

int Var_FindSection(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar2 = DAT_0056aa8c;
  if (DAT_0056aa88 != 0) {
    do {
      iVar1 = FUN_004c67c0(iVar2,param_1);
      if (iVar1 == 0) {
        return iVar2;
      }
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x34;
    } while (uVar3 < DAT_0056aa88);
  }
  return 0;
}

