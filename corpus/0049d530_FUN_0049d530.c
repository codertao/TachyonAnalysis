
undefined4 FUN_0049d530(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_3 + 0x1c) == 0) {
    return 0;
  }
  iVar1 = FUN_0049d150(param_1,param_3);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0049d2d0(iVar1,param_2,param_3);
  return uVar2;
}

