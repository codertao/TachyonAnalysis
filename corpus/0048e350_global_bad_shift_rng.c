
uint global_bad_shift_rng(void)

{
  uint uVar1;
  
  uVar1 = (GLBL_rng_state << 0xb | (uint)GLBL_rng_state >> 0x15) + GLBL_rng_state;
  GLBL_rng_state = uVar1 * 8 | uVar1 >> 0x1d;
  return GLBL_rng_state;
}

