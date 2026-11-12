
void Anim_Think(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xd0);
  if (piVar1[0x14] == 0) {
    Anim_StepFrame(param_1,piVar1);
    Anim_UpdateParticlePaths(param_1,piVar1[6],piVar1);
    if (*piVar1 != 0) {
      Anim_StepCamera(piVar1[6]);
    }
  }
  else {
    iVar2 = piVar1[0x14] + -1;
    piVar1[0x14] = iVar2;
    if ((iVar2 == 0) && (*piVar1 != 0)) {
      Anim_StartCamera(piVar1[6],param_1);
      Fade_StartDefault(0x3c,0);
      return;
    }
  }
  return;
}

