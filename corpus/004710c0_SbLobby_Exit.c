
/* sweep */

void SbLobby_Exit(void)

{
  if (DAT_005b8f48 != 0) {
    Fog_Disable();
  }
  Fog_SetDepthRange(0,0,0);
  Gfx_SetFogColor(0,0,0);
  Gfx_SetClearColor(0,0,0);
  g_NextMode = g_StarbaseScreen;
  if ((g_StarbaseScreen == &g_Mode_InFlight) || (g_StarbaseScreen == &g_Mode_TitleMenu)) {
    Bdf_FreeBackdrop();
    Starbase_Shutdown();
  }
  Teletype_ResetAll();
  return;
}

