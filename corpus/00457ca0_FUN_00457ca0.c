
int FUN_00457ca0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00457c70(param_1,param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_00457c30(param_1,param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(iVar2 + 0xc);
  *(int *)(iVar2 + 0xc) = iVar1 + 1;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  return iVar1;
}

