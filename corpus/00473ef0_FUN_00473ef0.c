
void FUN_00473ef0(void)

{
  g_NextMode = g_StarbaseScreen;
  FUN_004e4b65(0);
  FUN_0048b6f0(0);
  FUN_0048b6f0(1);
  FUN_0048b6f0(2);
  FUN_0046dd30(0,0);
  if (DAT_00563604 != 0) {
    FUN_0046be30(DAT_00563604 + 0x20,DAT_00563604,*(undefined4 *)(DAT_00563604 + 0x54));
  }
  DAT_00563604 = 0;
  FUN_00471de0();
  return;
}

