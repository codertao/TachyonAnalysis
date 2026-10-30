
undefined4 FUN_004a6ec0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_0055e3e0 == 0) {
    return 0xffffffff;
  }
  iVar1 = FUN_004a6db0(param_1);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_004a6f00(iVar1,param_2);
  return uVar2;
}

