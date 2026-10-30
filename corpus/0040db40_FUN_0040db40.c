
int FUN_0040db40(int param_1)

{
  int *piVar1;
  
  piVar1 = DAT_005b97ac;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return -1;
    }
    if (*piVar1 != param_1) break;
    piVar1 = (int *)piVar1[4];
  }
  return *piVar1;
}

