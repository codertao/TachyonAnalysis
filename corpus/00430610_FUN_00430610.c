
void FUN_00430610(int param_1)

{
  DAT_005aeeb8 = DAT_005aeeb8 - param_1;
  if (0x400 < DAT_005aeeb8) {
    DAT_005aeeb8 = 0x400;
    return;
  }
  if (DAT_005aeeb8 < -0x400) {
    DAT_005aeeb8 = -0x400;
  }
  return;
}

