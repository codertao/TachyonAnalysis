
void FUN_0045c980(int param_1)

{
  int iVar1;
  int local_44;
  undefined1 local_40 [64];
  
  if (DAT_005a6730 != 0) {
    str_sprintf(local_40,s_CHAINED_SCENE_REQUESTED_0054935c);
    FUN_0045d9d0(local_40,0);
  }
  if (param_1 != 0) {
    Var_GetInt(DAT_005a6148,param_1 + 0xc4,param_1 + 0xe4,&local_44);
    iVar1 = Var_SetInt(DAT_005a6148,param_1 + 0xc4,param_1 + 0xe4,1);
    if ((iVar1 == 0) && (DAT_005a6730 != 0)) {
      str_sprintf(local_40,s_CHAINED_SCENE_VARS_Not_Found_0054933c);
      FUN_0045d9d0(local_40,0);
    }
    if (local_44 == 0) {
      FUN_00414f80(param_1 + 0xb4,param_1 + 0xa4,*(undefined4 *)(param_1 + 0xa0));
      return;
    }
    if (DAT_005a6730 != 0) {
      str_sprintf(local_40,s_REQUEST_FAILED_VAR_CHECK_00549320);
      FUN_0045d9d0(local_40,0);
    }
    *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 1;
  }
  return;
}

