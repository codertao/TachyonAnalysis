
int FUN_0044f0c0(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = 0;
  if (DAT_005b9014 != 0) {
    piVar2 = &DAT_005b3a78;
    iVar3 = DAT_005b9014;
    do {
      if (*piVar2 != 0) {
        iVar1 = iVar1 + 1;
      }
      piVar2 = piVar2 + 0x11;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return iVar1;
}

