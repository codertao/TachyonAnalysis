
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Blit_SetSrc(undefined4 param_1,uint param_2,int param_3)

{
  DAT_005a4b20 = param_1;
  _DAT_005a4b24 = param_2;
  DAT_005a4b28 = (param_2 >> 3) * param_3;
  return;
}

