
/* (team==2 galspan, weapon shieldFactor): shf<=32 -> 1 / 3 else 0 / 2 */

uint ShieldFx_PickVariant(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return (uint)(param_2 < 0x21);
  }
  return 3 - (0x20 < param_2);
}

