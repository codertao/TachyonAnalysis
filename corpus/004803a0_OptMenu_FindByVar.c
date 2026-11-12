
/* sweep */

int * OptMenu_FindByVar(int param_1)

{
  int *piVar1;
  
  for (piVar1 = DAT_00563d74; (piVar1 != (int *)0x0 && (*piVar1 != 0)); piVar1 = piVar1 + 100) {
    if (piVar1[0x13] == param_1) {
      return piVar1;
    }
  }
  return (int *)0x0;
}

