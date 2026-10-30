
void FUN_00425a80(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((iVar1 != 0) &&
     (iVar2 = *(int *)(iVar1 + 0xe8), *(int *)(iVar1 + 0xe8) = param_2, iVar2 != param_2)) {
    FUN_00425850(param_1,param_3,100);
  }
  return;
}

