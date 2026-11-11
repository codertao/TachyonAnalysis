
/* (count, hasAmmoHold): count * 1.25 when an AMMO_HOLD is mounted */

uint Ammo_ApplyHoldBonus(uint param_1,int param_2)

{
  if (param_2 != 0) {
    return (param_1 >> 2) + param_1;
  }
  return param_1;
}

