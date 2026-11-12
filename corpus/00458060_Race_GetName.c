
/* sweep */

undefined4 * Race_GetName(uint param_1)

{
  if (DAT_0058f2e0 <= param_1) {
    return &DAT_00536778;
  }
  return (undefined4 *)(DAT_0058f2e4 + param_1 * 0x24);
}

