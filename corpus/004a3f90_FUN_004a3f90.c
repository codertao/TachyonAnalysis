
undefined4 FUN_004a3f90(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a3f10(param_1,param_2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_2 + 0xb4) = 0;
    return 1;
  }
  *(undefined4 *)(param_2 + 0xb4) = 1;
  return 0;
}

