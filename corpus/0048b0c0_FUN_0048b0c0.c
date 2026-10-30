
void FUN_0048b0c0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0048b000(param_1,param_2);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 8) == param_1) {
      iVar1 = *(int *)(param_1 + 0x94);
      *(int *)(param_2 + 8) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined4 *)(param_1 + 0x98) = 0;
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x98) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x94) = *(undefined4 *)(param_1 + 0x94);
      }
      if (*(int *)(param_1 + 0x94) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x94) + 0x98) = *(undefined4 *)(param_1 + 0x98);
      }
    }
    *(undefined4 *)(param_1 + 0x94) = 0;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  return;
}

