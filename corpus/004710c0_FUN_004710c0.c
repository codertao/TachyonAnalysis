
void FUN_004710c0(void)

{
  if (DAT_005b8f48 != 0) {
    FUN_00424ec0();
  }
  FUN_004b23a0(0,0,0);
  FUN_004ad0c0(0,0,0);
  Gfx_SetClearColor(0,0,0);
  g_NextMode = g_StarbaseScreen;
  if ((g_StarbaseScreen == &g_Mode_InFlight) || (g_StarbaseScreen == &g_Mode_TitleMenu)) {
    FUN_00444e30();
    FUN_00471060();
  }
  FUN_0048b720();
  return;
}

