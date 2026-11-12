
/* sweep */

void Cycle_RandomOther(uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = global_bad_shift_rng();
  if (uVar1 % *param_2 == param_1) {
    Cycle_Next(uVar1 % *param_2,param_2);
  }
  return;
}

