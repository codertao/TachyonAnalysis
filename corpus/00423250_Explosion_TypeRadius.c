
/* sweep */

undefined4 Explosion_TypeRadius(uint param_1)

{
  if (0xb < param_1) {
    param_1 = 0xb;
  }
  return *(undefined4 *)(&DAT_00535a74 + param_1 * 0x10);
}

