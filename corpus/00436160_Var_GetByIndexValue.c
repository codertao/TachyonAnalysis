
/* sweep */

undefined4 Var_GetByIndexValue(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = Var_GetByIndex(DAT_005a6148,param_1,param_2,&param_2);
  if (iVar1 != 0) {
    return param_2;
  }
  return 0xffffffff;
}

