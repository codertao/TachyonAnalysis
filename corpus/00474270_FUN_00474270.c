
void FUN_00474270(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0;
  if (DAT_0054f884 == 0) {
    DAT_0054f884 = 1;
    return;
  }
  if (DAT_0058974c != 0) {
    piVar2 = (int *)(DAT_00589750 + 0x50);
    iVar1 = DAT_0058974c;
    do {
      if (*piVar2 == 0) {
        if (iVar1 != 0) {
          DAT_005720c0 = iVar3;
          FUN_00473fb0(0);
        }
        break;
      }
      iVar1 = iVar1 + -1;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 0x17;
    } while (iVar1 != 0);
  }
  if (DAT_00589744 != 0) {
    piVar2 = (int *)(DAT_00589748 + 0x20);
    iVar3 = DAT_00589744;
    while (*(int *)(*piVar2 + 0x50) != 0) {
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 9;
      if (iVar3 == 0) {
        FUN_00474190(0);
        return;
      }
    }
    if (iVar3 != 0) {
      DAT_00577f00 = iVar4;
      FUN_00474010(0);
    }
  }
  FUN_00474190(0);
  return;
}

