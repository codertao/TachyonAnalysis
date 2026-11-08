
/* <name>_frame_NN keyframes (0x2c), camera frames, particle paths */

void Anim_ParseAnim(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_004060e0(param_2);
  piVar1 = (int *)(param_2 + 0x1c);
  *(int *)(param_2 + 0x18) = iVar2;
  FUN_0048e3d0(piVar1,iVar2 * 0x2c,4,s_ANIM_KEYFRAMES_00532904,0xcccc);
  iVar2 = *piVar1;
  uVar3 = 0;
  if (*(int *)(param_2 + 0x18) != 0) {
    do {
      Anim_ParseKeyframe(param_2,iVar2,uVar3);
      uVar3 = uVar3 + 1;
      iVar2 = iVar2 + 0x2c;
    } while (uVar3 < *(uint *)(param_2 + 0x18));
  }
  Anim_ComputeDeltas(param_1,*piVar1,*(undefined4 *)(param_2 + 0x18));
  Anim_ParseCameraFrames(param_2);
  Anim_ParseParticlePaths(param_2,param_1);
  return;
}

