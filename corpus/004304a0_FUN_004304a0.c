
void FUN_004304a0(int param_1)

{
  DAT_005aeea8 = DAT_005aeea8 + param_1;
  if (0x400 < DAT_005aeea8) {
    DAT_005aeea8 = 0x400;
    DAT_005aeeac = 1;
    return;
  }
  if (DAT_005aeea8 < -0x400) {
    DAT_005aeea8 = -0x400;
  }
  DAT_005aeeac = 1;
  return;
}

