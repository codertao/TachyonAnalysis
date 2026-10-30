
/* (store, section, key, &out) */

void Var_GetInt(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Var_FindSection(param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = Var_FindKey(iVar1,param_3);
  if (iVar2 == 0) {
    return;
  }
  Var_GetByIndex(param_1,*(undefined4 *)(iVar1 + 0x30),*(undefined4 *)(iVar2 + 4),param_4);
  return;
}

