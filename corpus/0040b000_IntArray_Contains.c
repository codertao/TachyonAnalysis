
/* sweep */

undefined4 IntArray_Contains(uint param_1,ushort *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (*param_2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      param_2 = param_2 + 1;
    } while (iVar1 < param_3);
  }
  return 0;
}

