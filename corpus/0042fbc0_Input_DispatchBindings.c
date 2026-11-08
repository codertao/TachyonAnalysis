
/* per-frame input binding tree walk + camera-axis input (0x42f730); gated by DAT_0058f1c0 /
   DAT_005b2cb8 modes */

void Input_DispatchBindings(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00562bb0;
  DAT_005aeea4 = 0;
  DAT_005aeeac = 0;
  DAT_005aeeb4 = 0;
  Input_WalkBindingTree(DAT_00562bb0);
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
  if (GLBL_spacesav[0x3e] == 1) {
    FUN_0042fab0();
    FUN_0042f980();
    DAT_005b1edc = DAT_005aefd4 + DAT_005aefd8;
    return;
  }
  FUN_0042f9c0(uVar1);
  Flight_ReadControlAxes();
  DAT_005b1edc = DAT_005aefd4 + DAT_005aefd8;
  return;
}

