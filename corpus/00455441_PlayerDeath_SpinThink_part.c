
/* sweep: mis-split, guess */

void PlayerDeath_SpinThink_part
               (int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(uint *)(unaff_ESI + 0xf8) < 0x81) {
    if (0x7f < *(uint *)(unaff_ESI + 0xf8)) {
      Explosion_SpawnByType(3,0,unaff_ESI + 0x34,0x10000,0);
      *(uint *)(unaff_ESI + 0x18) = *(uint *)(unaff_ESI + 0x18) | 2;
    }
    *(int *)(unaff_ESI + 0x34) = *(int *)(unaff_ESI + 0x34) + *(int *)(unaff_ESI + 0xa0);
    *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) + *(int *)(unaff_ESI + 0xa4);
    *(int *)(unaff_ESI + 0x3c) = *(int *)(unaff_ESI + 0x3c) + *(int *)(unaff_ESI + 0xa8);
    uVar1 = global_bad_shift_rng();
    if ((uVar1 & 0x7f) <= (uint)(*(int *)(unaff_ESI + 0xf8) * 2)) {
      call_Math_SinCos3((float *)&stack0x0000001c,*(int *)(unaff_ESI + 0x4c),
                        *(int *)(unaff_ESI + 0x50),*(int *)(unaff_ESI + 0x54));
      call_Rot_SetSinCos((float *)&stack0x0000001c);
      some_rotate_by_global((vec3 *)&param_1,(vec3 *)&param_1);
      param_4 = param_1 + *(int *)(unaff_ESI + 0x34);
      param_5 = param_2 + *(int *)(unaff_ESI + 0x38);
      param_6 = *(int *)(unaff_ESI + 0x3c) + param_3;
      iVar2 = Debris_SpawnChunks(&param_4,11000,0x20,0x80);
      if (iVar2 != 0) {
        *(int *)(iVar2 + 0xa0) = *(int *)(iVar2 + 0xa0) + (*(int *)(unaff_ESI + 0xa0) >> 2);
        *(int *)(iVar2 + 0xa4) = *(int *)(iVar2 + 0xa4) + (*(int *)(unaff_ESI + 0xa4) >> 2);
        *(int *)(iVar2 + 0xa8) = *(int *)(iVar2 + 0xa8) + (*(int *)(unaff_ESI + 0xa8) >> 2);
      }
    }
  }
  return;
}

