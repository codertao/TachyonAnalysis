
undefined4 FUN_0049bf80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = Cbin_LoadFile(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_0049be70(param_2,param_3);
  FUN_0049adb0(param_3);
  return 1;
}

