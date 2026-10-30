
int FUN_00483940(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  piVar2 = &DAT_0056e4dc;
  iVar3 = 0x10;
  do {
    if ((piVar2[-3] != 0) && (*piVar2 != 0)) {
      iVar1 = iVar1 + 1;
    }
    piVar2 = piVar2 + 0x40;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return iVar1;
}

