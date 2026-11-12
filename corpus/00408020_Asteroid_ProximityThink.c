
/* sweep: within desc+0xc0 of player */

void Asteroid_ProximityThink(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (((*(uint *)(param_1 + 0x104) ^ DAT_005b3304) & 3) == 0) {
    iVar1 = *(int *)(param_1 + 0x8c);
    uVar4 = distance_between((vec3 *)(param_1 + 0x34),(vec3 *)(GLBL_SOME_CONTEXT + 0x34));
    uVar2 = *(uint *)(iVar1 + 0xc0);
    if (uVar4 < uVar2) {
      local_8 = uVar2 - uVar4;
      lVar3 = (longlong)local_8 * (longlong)*(int *)(iVar1 + 0xc4);
      local_14 = ((vec3 *)(param_1 + 0x34))->x - *(int *)(GLBL_SOME_CONTEXT + 0x34);
      local_10 = *(int *)(param_1 + 0x38) - *(int *)(GLBL_SOME_CONTEXT + 0x38);
      local_c = *(int *)(param_1 + 0x3c) - *(int *)(GLBL_SOME_CONTEXT + 0x3c);
      Vec_ToAngles(&local_14,
                   (int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) >> 0x10);
      *(int *)(GLBL_SOME_CONTEXT + 0xa0) = *(int *)(GLBL_SOME_CONTEXT + 0xa0) + local_14;
      *(int *)(GLBL_SOME_CONTEXT + 0xa4) = *(int *)(GLBL_SOME_CONTEXT + 0xa4) + local_10;
      *(int *)(GLBL_SOME_CONTEXT + 0xa8) = *(int *)(GLBL_SOME_CONTEXT + 0xa8) + local_c;
      Hud_SetWarningBits(4);
    }
  }
  return;
}

