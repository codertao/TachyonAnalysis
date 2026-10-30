
void FUN_004304f0(int param_1)

{
  DAT_005aeeb0 = DAT_005aeeb0 + param_1;
  if (0x400 < DAT_005aeeb0) {
    DAT_005aeeb0 = 0x400;
    DAT_005aeeb4 = 1;
    return;
  }
  if (DAT_005aeeb0 < -0x400) {
    DAT_005aeeb0 = -0x400;
  }
  DAT_005aeeb4 = 1;
  return;
}

