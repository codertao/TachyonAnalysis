
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Particle_FadeThinkA(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + 1;
  if (*(int *)(param_1 + 0x2c) < 1) {
    Quad_Unlink(param_1);
    return;
  }
  iVar1 = *(int *)(param_1 + 0x2c) + -5;
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x98);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 < 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + -0x1c2;
  iVar1 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
  uVar2 = iVar1 + *(int *)(param_1 + 0x1c) * -4;
  uVar3 = (int)uVar2 >> 0x1f;
  if ((uVar2 ^ uVar3) - uVar3 < 0x40000) {
    _DAT_005b1ed8 = (float)*(int *)(param_1 + 0x2c) * _DAT_0052e744 + _DAT_005b1ed8;
  }
  return;
}

