
/* sweep */

void Bdf_InitArray(undefined4 param_1)

{
  clr_bytes(&DAT_005b9080,0x1c);
  Mem_AllocZeroTagged(&DAT_005b9080,0x1440,4,s_BDF_ARRAY_0054a5ac,param_1);
  DAT_005b9098 = param_1;
  return;
}

