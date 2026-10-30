
undefined4 FUN_004a4290(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_004a3fd0(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0xb4) = 1;
    return 0xffffffff;
  }
  uVar2 = FUN_004a4070(0,2,param_2);
  *(undefined4 *)(param_2 + 0xb4) = 0;
  return uVar2;
}

