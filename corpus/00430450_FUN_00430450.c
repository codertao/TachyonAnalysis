
void FUN_00430450(int param_1)

{
  DAT_005aeea0 = DAT_005aeea0 + param_1;
  if (0x400 < DAT_005aeea0) {
    DAT_005aeea0 = 0x400;
    DAT_005aeea4 = 1;
    return;
  }
  if (DAT_005aeea0 < -0x400) {
    DAT_005aeea0 = -0x400;
  }
  DAT_005aeea4 = 1;
  return;
}

