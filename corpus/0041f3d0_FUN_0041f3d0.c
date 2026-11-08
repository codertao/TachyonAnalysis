
void FUN_0041f3d0(void)

{
  uint uVar1;
  
  FUN_0041f3a0();
  if ((DAT_005b22f8 != 0) && (DAT_005b22fc = DAT_005b22fc + -1, DAT_005b22fc < 1)) {
    DAT_005b22f8 = 0;
  }
  if (DAT_005b22e8 != 0) {
    if (DAT_005b22f4 == 0) {
      uVar1 = global_bad_shift_rng();
      DAT_005b22f4 = uVar1 % 0xc + 6;
      uVar1 = global_bad_shift_rng();
      DAT_005b22f0 = uVar1 % *(uint *)(DAT_005b22e8 + 0x40);
    }
    else {
      DAT_005b22f4 = DAT_005b22f4 + -1;
    }
    if (DAT_005b22ec != 0) {
      DAT_005b22ec = DAT_005b22ec + -1;
      return;
    }
    DAT_005b22e8 = 0;
  }
  return;
}

