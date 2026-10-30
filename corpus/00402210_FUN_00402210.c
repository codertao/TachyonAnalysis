
void FUN_00402210(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    while (iVar1 = *(int *)(param_2 + 0xfc), iVar1 != param_1) {
      param_2 = iVar1;
      if (iVar1 == 0) {
        return;
      }
    }
    *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  }
  return;
}

