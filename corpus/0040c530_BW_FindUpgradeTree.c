
/* sweep */

int * BW_FindUpgradeTree(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_005b97b0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[2];
  }
  return piVar1;
}

