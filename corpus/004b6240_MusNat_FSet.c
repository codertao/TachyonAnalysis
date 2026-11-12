
/* refine: native "FSet" (table 0x55ed28) */

void MusNat_FSet(undefined4 *param_1)

{
  *(uint *)*param_1 = *(uint *)*param_1 | param_1[-1];
  return;
}

