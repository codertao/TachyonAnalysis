
/* sweep */

void Anim_StartWithCamera(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[6];
  Anim_Start(param_2,param_1,iVar1);
  Anim_ResetParticlePaths(iVar1);
  if ((*param_1 != 0) && (param_1[0x14] == 0)) {
    Anim_StartCamera(param_1[6],param_2);
    Fade_StartDefault(0x3c,0);
    SpaceDust_SetEnabled(0);
  }
  return;
}

