
int FUN_00415e10(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = DAT_005b3280;
    if (param_1 == DAT_005b8f50) {
      return DAT_005b3300;
    }
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0xe8) == param_1) {
        return iVar1;
      }
    }
  }
  return 0;
}

