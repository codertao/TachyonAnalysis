
/* sweep: guess */

int Var_ResetSection(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = Var_SectionExists(param_2);
  iVar3 = 0;
  if (iVar1 < 1) {
    return iVar1;
  }
  do {
    puVar2 = (undefined4 *)Var_GetEntryByIndex(param_1,param_2,iVar3);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < iVar1);
  return iVar1;
}

