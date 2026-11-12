
/* sweep */

int Quad_FindEntById(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (param_1 != 0) {
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0x78) == param_1) {
        return iVar1;
      }
    }
    for (iVar1 = param_2[1]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
      if (*(int *)(iVar1 + 0x78) == param_1) {
        return iVar1;
      }
    }
  }
  return 0;
}

