
void FUN_0043ef40(void)

{
  FUN_0043efb0(DAT_00603e40,DAT_00603e44);
  if (DAT_005a5504 != 0) {
    if (DAT_005a54dc < DAT_005a54e0) {
      DAT_005a54dc = DAT_005a54dc + 1;
    }
    else {
      DAT_005a54e4 = DAT_005a54e4 + 1;
      DAT_005a54dc = 0;
      if (DAT_005a54e4 == DAT_005a54d8) {
        DAT_005a54e4 = 0;
        return;
      }
    }
  }
  return;
}

