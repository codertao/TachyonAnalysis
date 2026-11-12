
/* sweep: guess */

uint Weapon_JitterTick(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *(short *)(param_1 + 0x18) = *(short *)(param_1 + 0x18) + 1;
  uVar1 = *(uint *)(*(uint *)(param_1 + 0x48) + 0x100);
  if (0x20 < (int)uVar1) {
    uVar3 = uVar1 >> 2;
    uVar2 = global_bad_shift_rng();
    *(uint *)(param_1 + 0x14) = (uVar1 >> 1) + uVar3 + uVar2 % uVar3;
    return uVar2 / uVar3;
  }
  *(uint *)(param_1 + 0x14) = uVar1;
  return *(uint *)(param_1 + 0x48);
}

