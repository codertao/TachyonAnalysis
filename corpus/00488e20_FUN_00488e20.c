
void FUN_00488e20(void)

{
  g_NextMode = g_StarbaseScreen;
  Sw_EnableZBuffer(0);
  FUN_0048b720();
  OurFreeMem(DAT_00563e20);
  DAT_00563e20 = 0;
  FUN_00440c80();
  FUN_00468ea0();
  return;
}

