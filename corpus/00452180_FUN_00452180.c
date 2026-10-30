
void FUN_00452180(uint param_1)

{
  if ((param_1 & DAT_005a6800) == 0) {
    if (DAT_005a6814 != 0) {
      FUN_00452150();
    }
  }
  else if (DAT_005a6814 == 0) {
    FUN_00452100();
    DAT_005a6810 = param_1;
    return;
  }
  DAT_005a6810 = param_1;
  return;
}

