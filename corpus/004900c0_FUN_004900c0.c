
undefined4 FUN_004900c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Var_FindSection(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  iVar1 = Var_FindKey(iVar1,param_2);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(iVar1 + 4);
}

