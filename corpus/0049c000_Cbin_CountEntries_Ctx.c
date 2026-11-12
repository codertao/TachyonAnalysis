
/* count entries of a name (explicit ctx variant) */

int Cbin_CountEntries_Ctx(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = Cbin_FindSection(param_1,param_3);
  if (iVar1 != 0) {
    while (iVar1 = Cbin_IterField(param_2,0,0,0,param_3), iVar1 != 0) {
      iVar2 = iVar2 + 1;
    }
    return iVar2;
  }
  return 0;
}

