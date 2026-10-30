
int * FUN_0047a560(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = DAT_00563690;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    if ((piVar1[1] == param_1) && (*piVar1 == param_2)) break;
    piVar1 = (int *)piVar1[0xb];
  }
  return piVar1;
}

