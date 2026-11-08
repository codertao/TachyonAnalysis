
void Anim_StepParticlePath(undefined4 param_1,int param_2)

{
  uint uVar1;
  
  if (*(int *)(param_2 + 0x94) != 0) {
    *(int *)(param_2 + 0x94) = *(int *)(param_2 + 0x94) + -1;
    return;
  }
  if (*(int *)(param_2 + 0x98) != 0) {
    *(int *)(param_2 + 0x3c) = *(int *)(param_2 + 0x3c) + *(int *)(param_2 + 0x28);
    *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + *(int *)(param_2 + 0x2c);
    *(int *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x48) = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x34);
    *(int *)(param_2 + 0x4c) = *(int *)(param_2 + 0x4c) + *(int *)(param_2 + 0x38);
    *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x80) + *(int *)(param_2 + 0x6c);
    *(int *)(param_2 + 0x84) = *(int *)(param_2 + 0x84) + *(int *)(param_2 + 0x70);
    *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + *(int *)(param_2 + 0x74);
    uVar1 = global_bad_shift_rng();
    if (uVar1 % 0x32 <= (uint)(*(int *)(param_2 + 0x48) >> 0x10)) {
      Anim_EmitParticle(param_1,param_2);
    }
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + -1;
  }
  return;
}

