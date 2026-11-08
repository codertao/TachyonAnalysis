
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* rotate-add RNG for model effects */

uint Rng_Pak(void)

{
  _DAT_0055eb58 = (_DAT_0055eb58 << 0xb | _DAT_0055eb58 >> 0x15) + _DAT_0055eb58;
  _DAT_0055eb58 = _DAT_0055eb58 * 8 | _DAT_0055eb58 >> 0x1d;
  return _DAT_0055eb58;
}

