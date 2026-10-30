
/* look up SPED by id, run named action on it (logs OBJECT %d ACTION %s) */

void Sped_DispatchAction(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
                        )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_60 [96];
  
  iVar1 = Sped_FindById(param_1,param_4);
  if (iVar1 != 0) {
    if (DAT_005a6730 != 0) {
      uVar2 = FUN_00434470(param_2,param_3);
      str_sprintf(local_60,s_OBJECT__d_ACTION____s__PARAM__x_0053fb80,param_1,uVar2);
      FUN_0045d9d0(local_60,0);
    }
    FUN_00436b30(iVar1,param_2,param_3);
    return;
  }
  if (DAT_005a6730 != 0) {
    uVar2 = FUN_00434470(param_2);
    str_sprintf(local_60,s_SPED_OBJ__d_not_found___action___0053fb54,param_1,uVar2);
    FUN_0045d9d0(local_60,0);
  }
  return;
}

