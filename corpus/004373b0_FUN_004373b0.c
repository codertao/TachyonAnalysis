
void FUN_004373b0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = Var_GetTable(s_SHIP_TYPE_0053fbd0);
  if (iVar1 == 0) {
    Spx_ResolveDesName(s_DEFAULT_0053f920);
    return;
  }
  uVar2 = Var_GetKeyByIndex(iVar1,param_1);
  Spx_ResolveDesName(uVar2);
  return;
}

