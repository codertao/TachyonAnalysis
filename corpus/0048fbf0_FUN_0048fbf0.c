
undefined4 FUN_0048fbf0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_3;
  iVar2 = Var_GetInt(param_1,param_2,param_3,&param_3);
  if (iVar2 != 0) {
    param_3 = param_3 + param_4;
    uVar3 = Var_SetInt(param_1,param_2,iVar1,param_3);
    return uVar3;
  }
  return 0;
}

