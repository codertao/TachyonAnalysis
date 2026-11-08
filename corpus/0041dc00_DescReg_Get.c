
/* slot -> descriptor */

undefined4 DescReg_Get(uint param_1)

{
  if (0xff < param_1) {
    return 0;
  }
  return (&g_DescRegistry)[param_1];
}

