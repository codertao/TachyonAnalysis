
undefined4 FUN_0048b000(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    for (iVar1 = *(int *)(param_2 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x94)) {
      if (iVar1 == param_1) {
        return 1;
      }
    }
  }
  return 0;
}

