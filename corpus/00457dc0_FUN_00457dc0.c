
void FUN_00457dc0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00457c70(param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00457c30(param_1,param_2);
  }
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  return;
}

