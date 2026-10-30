
int FUN_0049c6f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *(undefined4 *)(param_1 + -0xc);
  FUN_0049c530(param_1);
  iVar2 = FUN_0049c3b0(param_2,param_3,0,*(undefined4 *)(param_1 + -8));
  if (iVar2 != param_1) {
    FUN_004bd8e0(iVar2,param_1,param_2);
  }
  *(undefined4 *)(iVar2 + -0xc) = uVar1;
  return iVar2;
}

