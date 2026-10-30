
void FUN_00448ff0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (DAT_00546620 == 0) {
    DAT_00546620 = 1;
    return;
  }
  if (DAT_00589744 != 0) {
    piVar2 = (int *)(DAT_00589748 + 0x20);
    iVar1 = DAT_00589744;
    do {
      if (*(int *)(*piVar2 + 0x50) == 0) break;
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 9;
    } while (iVar1 != 0);
  }
  DAT_00592fc8 = iVar3;
  FUN_00448e20(0);
  FUN_00448f10(0);
  return;
}

