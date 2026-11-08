
undefined4 NetBridge_Get(int param_1)

{
  if (param_1 == 1) {
    if (DAT_006af560 != 0) {
      DAT_006af560 = 0;
      DAT_0055e404 = 0;
      return DAT_006af564;
    }
  }
  else if (DAT_006af56c != 0) {
    DAT_006af56c = 0;
    DAT_0055e404 = 0;
    return DAT_006af570;
  }
  return 0;
}

