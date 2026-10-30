
void FUN_0045cff0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0045cfc0(param_1,param_2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x10);
    *(int *)(param_2 + 0x10) = param_1;
  }
  return;
}

