
/* sweep */

void Explosion_RandomSmall(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = global_bad_shift_rng();
  Explosion_Spawn(param_1,(uVar1 & 0x1fff) + 2000,3);
  return;
}

