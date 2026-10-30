
void FUN_00414740(void)

{
  DAT_005b9268 = (uint)(DAT_005b9268 == 0);
  if (DAT_005b9268 != 0) {
    FUN_0042ddb0(s_CHEATS_ENABLED_00534214,0xc);
    FUN_004525c0(5);
    return;
  }
  FUN_00414720();
  FUN_0042ddb0(s_CHEATS_DISABLED_00534204,0xc);
  return;
}

