
uint FUN_0049d5f0(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (DAT_0055da14 << 0xb | DAT_0055da14 >> 0x15) + DAT_0055da14;
  uVar1 = uVar2 * 8;
  uVar2 = uVar2 >> 0x1d;
  DAT_0055da14 = uVar1 | uVar2;
  return (uVar1 & 0xff | uVar2) * param_1 >> 8;
}

