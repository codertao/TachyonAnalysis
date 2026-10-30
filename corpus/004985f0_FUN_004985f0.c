
void FUN_004985f0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    while ((*(short *)(iVar1 + 0x76) != 3 || (*(int *)(iVar1 + 0x114) != param_2))) {
      iVar1 = *(int *)(iVar1 + 8);
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_0041b950(iVar1);
    FUN_0041b9b0(iVar1);
  }
  return;
}

