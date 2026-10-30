
undefined4 FUN_0041eb40(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_80 [128];
  
  iVar1 = FUN_0041e6d0(param_1,&DAT_005a5dd0);
  if (iVar1 == 0) {
    if (DAT_005a6730 != 0) {
      str_sprintf(local_80,s__s_not_found_00535728,param_1);
      FUN_0048ce30(local_80,DAT_005a6320._2_1_);
    }
    return 0;
  }
  if (param_3 == 1) {
    uVar2 = FUN_0041e9c0();
    return uVar2;
  }
  uVar2 = FUN_0041ea70(iVar1,param_2,param_4);
  return uVar2;
}

