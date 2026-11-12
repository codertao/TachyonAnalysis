
/* set var + Mission_OnVarChanged */

void Var_SetAndNotify(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  Var_EntryPtr(DAT_005a6148,param_1,param_2,param_3);
  Mission_OnVarChanged(param_1,param_2,param_3);
  return;
}

