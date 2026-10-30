
int FUN_004516f0(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x24);
  if (iVar1 != 0) {
    do {
      if ((*(int *)(iVar1 + 0x18) == *param_1) && (*(int *)(iVar1 + 0x1c) == param_1[1])) {
        return iVar1;
      }
      iVar1 = *(int *)(iVar1 + 8);
    } while (iVar1 != 0);
  }
  return 0;
}

