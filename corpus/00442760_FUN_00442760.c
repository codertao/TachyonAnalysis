
void FUN_00442760(void)

{
  FUN_00442e90();
  if (DAT_005b2c0c == 1) {
    DAT_005b2d64 = DAT_005b2bc0;
  }
  else {
    DAT_005b2d3c = DAT_005b2bc0;
  }
  DAT_00590e34 = &g_Mode_InFlight;
  if ((g_FlightStateFlags & 2) == 0) {
    DAT_00590e34 = &PTR_Flight_SceneSetup_005493a0;
  }
  FUN_0049c530(DAT_005a40b8);
  DAT_005a40b8 = 0;
  FUN_0049c530(DAT_00562c04);
  DAT_00562c04 = 0;
  g_NextMode = g_StarbaseScreen;
  return;
}

