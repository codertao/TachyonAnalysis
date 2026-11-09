
int * __cdecl FUN_10003540(int param_1,short param_2)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = DAT_100199dc;
  while ((*piVar1 != param_1 || ((short)piVar1[1] != param_2))) {
    iVar2 = iVar2 + 1;
    piVar1 = (int *)((int)piVar1 + 0x10e);
    if (0x1f < iVar2) {
      return (int *)0x0;
    }
  }
  return piVar1;
}

