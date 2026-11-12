
/* sweep */

void Anim_FreeParticlePaths(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    if ((param_2 != 0) && (uVar1 = 0, *(int *)(param_1 + 0x54) != 0)) {
      iVar2 = *(int *)(param_1 + 0x58) + 0x20;
      do {
        ModelRef_Release(iVar2);
        uVar1 = uVar1 + 1;
        iVar2 = iVar2 + 0x2c;
      } while (uVar1 < *(uint *)(param_1 + 0x54));
    }
    OurFreeMem(*(undefined4 *)(param_1 + 0x58));
  }
  return;
}

