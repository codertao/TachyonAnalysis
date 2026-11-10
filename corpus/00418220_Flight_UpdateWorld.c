
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
    FUN_00455960();
  }
  if ((*(byte *)(DAT_005b95e0 + 0xc) & 4) != 0) {
    FUN_0042e000();
  }
  Net_CyclePump();
  if (g_CutsceneActive == 0) {
    FUN_004b5500();
  }
  FUN_00465e80();
  if (DAT_005b8f4c == 0) {
    FUN_00466dc0(&DAT_005b95e8,&DAT_005b9600);
  }
  if (g_CutsceneActive == 0) {
    FUN_0041da00();
    FUN_00468320();
    FUN_00425720();
    Music_UpdateFlightVars();
    FUN_0045bfa0();
  }
  if (GLBL_SOME_CONTEXT != 0) {
    Camera_Update();
  }
  if (DAT_005b90a0 != (code *)0x0) {
    (*DAT_005b90a0)();
  }
  FUN_00450a50();
  DAT_005b3304 = DAT_005b3304 + 1;
  if (g_MissionEndFlag != 0) {
    FUN_0049cb20(s_memstats_txt_00534340);
    return 1;
  }
  return 0;
}

