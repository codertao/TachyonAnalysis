
/* sweep */

uint Cycle_Next(int param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1 + 1;
  if (*param_2 <= uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}

