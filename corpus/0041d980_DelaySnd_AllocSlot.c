
/* sweep */

int * DelaySnd_AllocSlot(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = DAT_005b2704;
  if (DAT_005b2700 != 0) {
    do {
      if (*piVar1 == 0) {
        *piVar1 = 1;
        return piVar1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0xf;
    } while (uVar2 < DAT_005b2700);
  }
  return (int *)0x0;
}

