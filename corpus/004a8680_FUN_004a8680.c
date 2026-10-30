
void FUN_004a8680(uint param_1)

{
  if (DAT_00563e98 != 0) {
    DAT_005f9d40 = param_1;
    if (0xff < param_1) {
      DAT_005f9d40 = 0xff;
    }
    FUN_004df56a();
    return;
  }
  return;
}

