
void FUN_00490ae0(void)

{
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    if ((-1 < DAT_005658a4) && (DAT_005658a4 < 0x80)) {
      if (DAT_00565a34._2_1_ == '\0') {
        FUN_00491440();
      }
      DAT_0056589c = DAT_005658a4;
      return;
    }
    if ((-1 < DAT_005658a8) && (DAT_005658a8 < 0x80)) {
      if (DAT_00565a34._2_1_ == '\0') {
        FUN_00491440();
      }
      DAT_0056589c = DAT_005658a8;
      return;
    }
    FUN_00491330(0);
  }
  return;
}

