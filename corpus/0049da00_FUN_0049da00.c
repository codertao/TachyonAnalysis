
undefined4 FUN_0049da00(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1 != 0) && (param_3 != 0)) && (*(int *)(param_3 + 0x10) != 0)) {
    iVar1 = FUN_0049d630(param_1,param_3);
    if (iVar1 != 0) {
      uVar2 = FUN_0049d740(iVar1,param_2,param_3);
      return uVar2;
    }
  }
  return 0;
}

