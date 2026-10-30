
void FUN_004a8650(uint param_1)

{
  if (DAT_00563e98 != 0) {
    DAT_00601e20 = param_1;
    if (0xff < param_1) {
      DAT_00601e20 = 0xff;
    }
    FUN_004def47();
    return;
  }
  return;
}

