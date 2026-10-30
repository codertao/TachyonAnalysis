
void FUN_004b78f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    for (iVar2 = *(int *)(iVar1 + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      iVar1 = iVar2;
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(int *)(iVar1 + 8) = param_1;
    *(int *)(param_1 + 4) = iVar1;
    return;
  }
  FUN_004b78c0(param_1,param_2);
  return;
}

