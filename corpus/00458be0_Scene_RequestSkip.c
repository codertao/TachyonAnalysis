
/* sweep: guess */

void Scene_RequestSkip(void)

{
  if ((DAT_0058f1c0 != 0) && ((g_FlightStateFlags & 4) != 0)) {
    DAT_0058f1d0 = 1;
    Audio_StopAllSamples();
    Snd3D_SetPaused(1);
    RunOnce_Set(&DAT_0058f1d0,0,0);
  }
  return;
}

