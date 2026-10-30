
void FUN_004b55f0(int param_1)

{
  if (param_1 < 0) {
    DAT_006af51c = 0;
    return;
  }
  if (0xff < param_1) {
    param_1 = 0xff;
  }
  DAT_006af51c = param_1 << 0x10;
  return;
}

