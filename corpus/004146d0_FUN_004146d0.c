
void FUN_004146d0(void)

{
  if (DAT_005b9268 != 0) {
    DAT_005a661c = (uint)(DAT_005a661c == 0);
    if (DAT_005a661c != 0) {
      FUN_0042ddb0(s_GOD_MODE_ENABLED_005341f0,0xc);
      FUN_004525c0(5);
      return;
    }
    FUN_0042ddb0(s_GOD_MODE_DISABLED_005341dc,0xc);
  }
  return;
}

