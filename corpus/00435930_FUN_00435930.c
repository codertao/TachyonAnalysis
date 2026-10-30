
undefined4 FUN_00435930(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = Var_GetTable(s_PLAYER_SIDE_0053f968);
  if (iVar1 == 0) {
    return 1;
  }
  Var_GetInt(DAT_005a6148,param_1,param_2,&local_4);
  iVar1 = Var_GetKeyByIndex(iVar1,local_4);
  if (iVar1 == 0) {
    return 1;
  }
  uVar2 = FUN_004580c0(iVar1);
  return uVar2;
}

