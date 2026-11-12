
/* sweep */

void Anim_Free(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    Anim_FreeParticlePaths(param_1,param_2);
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      do {
        Anim_FreeFrames(iVar1);
        uVar2 = uVar2 + 1;
        iVar1 = iVar1 + 0x54;
      } while (uVar2 < *(uint *)(param_1 + 4));
    }
    OurFreeMem(*(undefined4 *)(param_1 + 0x44));
    OurFreeMem(*(undefined4 *)(param_1 + 0x14));
    OurFreeMem(*(undefined4 *)(param_1 + 8));
    OurFreeMem(*(undefined4 *)(param_1 + 0x10));
    OurFreeMem(param_1);
  }
  return;
}

