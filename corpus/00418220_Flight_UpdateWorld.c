
/* Flight_Update part 2: orchestrates client frame: input-binding dispatch, net cycle, camera, HUD,
   render-prep; applies server DCB snapshots; evaluates mission-end. Does NOT contain the entity
   think loop directly (see method table +0x68) */

undefined4 Flight_UpdateWorld(void)

{
  Flight_InputDispatch();
  if ((((g_FlightStateFlags & 4) == 0) && (DAT_005b9058 == 0)) && (DAT_00603a3b != '\0')) {
    g_MissionEndFlag = 1;
    g_MissionEndReason = 9;
    g_NextMode = g_ReturnMode;
  }
  if (((DAT_005b3304 & 0xf) == 0) && (DAT_005b3344 == 0)) {
    DAT_005b3340 = 0;
  }
  if ((DAT_005b904c != 0) && (DAT_005b904c = DAT_005b904c + -1, DAT_005b904c == 0)) {
    g_MissionEndFlag = 1;
    g_MissionEndReason = 3;
    g_NextMode = g_ReturnMode;
  }
  if (DAT_005b9050 != 0) {
    DAT_005b9050 = DAT_005b9050 + -1;
  }
  if ((DAT_005b3330 != 0) && (DAT_005b3330 = DAT_005b3330 + -1, DAT_005b3330 == 0)) {
    Player_Undock();
  }
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 4) != 0) {
    Hud_Update();
  }
  Net_CyclePump();
  if (g_CutsceneActive == 0) {
    Music_Tick();
  }
  Music_Update();
  if (DAT_005b8f4c == 0) {
    Snd3D_Update(&DAT_005b95e8,&DAT_005b9600);
  }
  if (g_CutsceneActive == 0) {
    DelaySnd_Update();
    Bdf_LightningTick();
    Rules_CallUpdate();
    Music_UpdateFlightVars();
    Scene_Tick();
  }
  if (GLBL_SOME_CONTEXT != 0) {
    Camera_Update();
  }
  if (DAT_005b90a0 != (code *)0x0) {
    (*DAT_005b90a0)();
  }
  Orders_Update();
  DAT_005b3304 = DAT_005b3304 + 1;
  if (g_MissionEndFlag != 0) {
    Mem_DumpStatsToFile(s_memstats_txt_00534340);
    return 1;
  }
  return 0;
}

