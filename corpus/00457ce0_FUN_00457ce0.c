
void FUN_00457ce0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00457c70(param_1,param_2);
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
  }
  return;
}

