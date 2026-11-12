
/* sweep: guess */

void SndTrig_StopEvent(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    piVar1 = (int *)(param_1 + 0x50);
    iVar2 = 8;
    do {
      if (*piVar1 != 0) {
        Audio_StopSample(*piVar1);
      }
      piVar1 = piVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

