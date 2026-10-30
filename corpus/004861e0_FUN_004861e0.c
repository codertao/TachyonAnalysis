
void FUN_004861e0(void)

{
  FUN_00486270();
  FUN_004acfa0();
  FUN_00485240();
  g_NextMode = g_StarbaseScreen;
  if ((g_StarbaseScreen == &g_Mode_InFlight) || (g_StarbaseScreen == &g_Mode_TitleMenu)) {
    FUN_00471060();
  }
  FUN_004ad380(0);
  FUN_004e4b65(0);
  return;
}

