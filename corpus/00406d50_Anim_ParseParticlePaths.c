
void Anim_ParseParticlePaths(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_004065d0(param_1);
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    FUN_0048e3d0((int *)(param_1 + 0x50),iVar1 * 0x9c,4,s_ANIM_PARTICLE_PATHS_005328f0,0xcccc);
    iVar1 = *(int *)(param_1 + 0x50);
    uVar2 = 0;
    if (*(int *)(param_1 + 0x4c) != 0) {
      do {
        Anim_ParseParticlePath(param_1,iVar1,uVar2,param_2);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x9c;
      } while (uVar2 < *(uint *)(param_1 + 0x4c));
    }
  }
  return;
}

