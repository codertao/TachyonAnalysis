
/* restore saved think/+0x5c */

void Anim_Finish(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0xd0);
  *(int *)(param_1 + 0x68) = piVar1[0xe];
  *(int *)(param_1 + 0x5c) = piVar1[0xf];
  *(int *)(param_1 + 0x1c) = piVar1[0xc];
  *(int *)(param_1 + 0x2c) = piVar1[0xd] >> 0x10;
  if (*piVar1 != 0) {
    Fade_StartDefault(0,0);
    Camera_RestorePrevMode();
    SpaceDust_SetEnabled(1);
  }
  return;
}

