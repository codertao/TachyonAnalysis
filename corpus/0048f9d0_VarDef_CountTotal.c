
/* sweep: guess */

int VarDef_CountTotal(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (DAT_0056aa88 != 0) {
    piVar2 = (int *)(DAT_0056aa8c + 0x24);
    iVar3 = DAT_0056aa88;
    do {
      iVar1 = iVar1 + *piVar2;
      piVar2 = piVar2 + 0xd;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

