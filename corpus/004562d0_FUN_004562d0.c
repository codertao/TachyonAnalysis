
undefined4 FUN_004562d0(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_2;
  if (iVar1 < param_3) {
    if (*param_1 != 0) {
      iVar3 = *param_1 >> 3;
      iVar2 = param_3 - iVar1;
      if (iVar3 < param_3 - iVar1) {
        iVar2 = iVar3;
      }
      *param_2 = iVar1 + iVar2;
      *param_1 = *param_1 - iVar2;
      return 1;
    }
  }
  return 0;
}

