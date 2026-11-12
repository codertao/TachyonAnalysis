
/* add to var + Mission_OnVarChanged */

void Var_AddAndNotify(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  Var_EntryPtr2(DAT_005a6148,param_1,param_2,param_3);
  iVar1 = Var_GetByIndex(DAT_005a6148,param_1,param_2,&local_4);
  if (iVar1 != 0) {
    Mission_OnVarChanged(param_1,param_2,local_4);
  }
  return;
}

