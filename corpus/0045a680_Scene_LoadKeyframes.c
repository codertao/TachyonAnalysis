
/* sweep */

void Scene_LoadKeyframes(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = Cbin_CountIndexed_Global(s_FRAME__02d_00549290);
  *(int *)(param_1 + 0x28) = iVar1;
  if (iVar1 != 0) {
    Mem_AllocZeroTagged((int *)(param_1 + 0x2c),iVar1 * 0x44,4,s_SCENE_KEYFRAMES_0054929c,0xcccc);
    iVar1 = *(int *)(param_1 + 0x2c);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      do {
        SceneKey_LoadFrame(param_1,iVar1,uVar2);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x44;
      } while (uVar2 < *(uint *)(param_1 + 0x28));
    }
  }
  return;
}

