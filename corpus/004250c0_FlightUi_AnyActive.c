
/* sweep */

undefined4 FlightUi_AnyActive(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_005b1de0;
  piVar2 = DAT_005b1de0;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (piVar2[1] != 0) break;
    iVar1 = piVar2[4];
    piVar2 = piVar2 + 4;
  }
  return 1;
}

