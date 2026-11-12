
/* sweep: asm, reg-passed args */

void SwAsm_Rand(void)

{
  uint uVar1;
  
  uVar1 = (DAT_004e4afc << 0xb | DAT_004e4afc >> 0x15) + DAT_004e4afc;
  DAT_004e4afc = uVar1 * 8 | uVar1 >> 0x1d;
  return;
}

