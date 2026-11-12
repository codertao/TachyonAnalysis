
/* sweep */

void Shipyard_Exit(void)

{
  Shipyard_SaveCurrentShip();
  Gfx_HwControl1();
  Shipyard_FreeModels();
  g_NextMode = g_StarbaseScreen;
  if ((g_StarbaseScreen == &g_Mode_InFlight) || (g_StarbaseScreen == &g_Mode_TitleMenu)) {
    Starbase_Shutdown();
  }
  Gfx_SetBrightMode(0);
  Sw_EnableZBuffer(0);
  return;
}

