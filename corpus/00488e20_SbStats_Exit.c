
/* sweep */

void SbStats_Exit(void)

{
  g_NextMode = g_StarbaseScreen;
  Sw_EnableZBuffer(0);
  Teletype_ResetAll();
  OurFreeMem(DAT_00563e20);
  DAT_00563e20 = 0;
  ScreenZoom_FreeAll();
  Light_ApplyDefault();
  return;
}

