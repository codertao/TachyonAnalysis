
undefined4
FUN_0049ce30(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0049cd90(param_1,param_2,param_3);
  iVar2 = FUN_0049cdf0(uVar1,param_2,param_3);
  if (iVar2 != 0) {
    uVar1 = FUN_0049cdc0(uVar1,param_2,param_3);
    *param_4 = 0;
    return uVar1;
  }
  *param_4 = 1;
  return uVar1;
}

