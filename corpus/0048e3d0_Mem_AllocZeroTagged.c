
/* sweep: 106 callers */

void Mem_AllocZeroTagged(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                        undefined4 param_5)

{
  Mem_AllocTagged(param_1,param_2,param_3,param_4,param_5);
  if (*param_1 != 0) {
    clr_bytes(*param_1,param_2);
  }
  return;
}

