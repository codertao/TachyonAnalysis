
/* sweep: guess */

int Item_CountOwned(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (DAT_0058973c != 0) {
    piVar2 = (int *)(DAT_00589740 + 0x58);
    iVar3 = DAT_0058973c;
    do {
      if ((*piVar2 != 0) && ((param_1 != 0 || (*(int *)(*piVar2 + 0x90) != 0)))) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 0x17;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

