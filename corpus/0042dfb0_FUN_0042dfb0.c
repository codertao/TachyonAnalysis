
void FUN_0042dfb0(void)

{
  uint uVar1;
  
  if (DAT_005b0744 != 0) {
    uVar1 = FUN_0048e350();
    DAT_005b0740 = ((int)(((uVar1 & 0xff) - 0x7f) * DAT_005b0750) >> 8) + DAT_005b0734;
    if (DAT_005b0740 < 2) {
      DAT_005b0740 = DAT_005b0740 + 0x82;
    }
    DAT_005b0744 = DAT_005b0744 + -1;
    return;
  }
  DAT_005b0740 = DAT_005b0734;
  return;
}

