
void FUN_0042fbc0(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00562bb0;
  DAT_005aeea4 = 0;
  DAT_005aeeac = 0;
  DAT_005aeeb4 = 0;
  FUN_0042fca0(DAT_00562bb0);
  if (DAT_0058f1c0 != 0) {
    if (DAT_0053cbc0 == -1) {
      DAT_0053cbc0 = DAT_005aeeb8;
    }
    DAT_005aeea0 = 0;
    DAT_005aeea8 = 0;
    DAT_005aeeb0 = 0;
    DAT_005aeeb8 = 0;
    DAT_005b1edc = DAT_005aefd4 + DAT_005aefd8;
    return;
  }
  if (DAT_0053cbc0 != -1) {
    DAT_005aeeb8 = DAT_0053cbc0;
    DAT_0053cbc0 = -1;
  }
  if (DAT_005b2cb8 == 1) {
    FUN_0042fab0();
    FUN_0042f980();
    DAT_005b1edc = DAT_005aefd4 + DAT_005aefd8;
    return;
  }
  FUN_0042f9c0(uVar1);
  FUN_0042f730();
  DAT_005b1edc = DAT_005aefd4 + DAT_005aefd8;
  return;
}

