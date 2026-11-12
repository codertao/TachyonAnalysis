
/* sweep */

void Vid_SetRes(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  DAT_006022f4 = param_3;
  Vid_SetResWithFallback(param_1,param_2);
  return;
}

