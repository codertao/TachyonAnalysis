
/* sweep */

undefined * MpRegion_Clamp(uint param_1)

{
  if (DAT_0058f4e0 <= param_1) {
    param_1 = 0;
  }
  return &DAT_0058f4e8 + param_1 * 0x34;
}

