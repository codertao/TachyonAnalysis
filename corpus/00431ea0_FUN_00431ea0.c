
void FUN_00431ea0(int param_1)

{
  DAT_005b2ca0 = DAT_005b2ca0 + param_1 * 8;
  if (DAT_005b2ca0 < 1) {
    DAT_005b2ca0 = 1;
  }
  else if (0xff < DAT_005b2ca0) {
    DAT_005b2ca0 = 0xff;
  }
  FUN_004af260(DAT_005b2ca0,0x80,0x80);
  return;
}

