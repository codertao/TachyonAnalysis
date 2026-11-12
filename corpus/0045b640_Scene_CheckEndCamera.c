
/* sweep: guess */

void Scene_CheckEndCamera(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x134);
  if ((uVar1 & 4) != 0) {
    *(uint *)(param_1 + 0x134) = uVar1 & 0xfffffffb;
    Scene_PlayChained(param_1);
    Scene_Finish(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x140) != 0) {
    Scene_SetFade(0xffffffff,*(int *)(param_1 + 0x140),&LAB_0045b610,1);
    return;
  }
  if ((uVar1 & 1) != 0) {
    Fade_StartDefault(0xf1,&LAB_0045b610);
    return;
  }
  Fade_StartDefault(*(undefined4 *)(param_1 + 0x138),&LAB_0045b610);
  return;
}

