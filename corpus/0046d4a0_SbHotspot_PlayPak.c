
/* sweep */

void SbHotspot_PlayPak(int param_1)

{
  int *piVar1;
  
  if (((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0xc0), piVar1 != (int *)0x0)) &&
     (*piVar1 != 0)) {
    SbPak_Start(piVar1 + 9,piVar1 + 0xd,piVar1 + 1,piVar1[0x1a],piVar1[0x1b],piVar1[0x1c]);
    SbPak_StepKeyframes(*(undefined4 *)(param_1 + 0xc0));
  }
  return;
}

