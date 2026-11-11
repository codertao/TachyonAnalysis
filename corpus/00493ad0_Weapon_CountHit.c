
/* server: shooter +0xec (class 0x11) or +0xf4 hit counters */

void Weapon_CountHit(int param_1)

{
  if ((param_1 != 0) && (*(short *)(param_1 + 0x76) == 1)) {
    if ((DAT_00565404 & 0x11) != 0) {
      *(int *)(DAT_005653f4 + 0xec) = *(int *)(DAT_005653f4 + 0xec) + 1;
      return;
    }
    *(int *)(DAT_005653f4 + 0xf4) = *(int *)(DAT_005653f4 + 0xf4) + 1;
  }
  return;
}

