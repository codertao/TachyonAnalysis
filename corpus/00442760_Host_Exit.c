
/* sweep */

void Host_Exit(void)

{
  Host_SaveEntries();
  if (GLBL_spacesav[0x13] == 1) {
    GLBL_spacesav[0x69] = GLBL_spacesav[0];
  }
  else {
    GLBL_spacesav[0x5f] = GLBL_spacesav[0];
  }
  DAT_00590e34 = &g_Mode_InFlight;
  if ((g_FlightStateFlags & 2) == 0) {
    DAT_00590e34 = &PTR_Flight_SceneSetup_005493a0;
  }
  OurFreeMem(DAT_005a40b8);
  DAT_005a40b8 = 0;
  OurFreeMem(DAT_00562c04);
  DAT_00562c04 = 0;
  g_NextMode = g_StarbaseScreen;
  return;
}

