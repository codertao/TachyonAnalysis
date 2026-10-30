
void FUN_004361b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  FUN_0048fb60(DAT_005a6148,param_1,param_2,param_3);
  iVar1 = Var_GetByIndex(DAT_005a6148,param_1,param_2,&local_4);
  if (iVar1 != 0) {
    FUN_004360d0(param_1,param_2,local_4);
  }
  return;
}

