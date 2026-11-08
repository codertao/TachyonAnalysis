
/* Flight_Update part 1: tick UI (if not cutscene), frame counter, mission-end check */

undefined4 Flight_Update_Phase1(void)

{
  NetSrv_Tick();
  if (g_CutsceneActive == 0) {
    FUN_00445720();
    Rules_Tick();
  }
  DAT_005897e4 = DAT_005897e4 + 1;
  FUN_00442800(DAT_006af664);
  if ((g_FlightStateFlags & 2) == 0) {
    Flight_InputDispatch();
    if (g_MissionEndFlag != 0) {
      g_NextMode = g_ReturnMode;
      return 1;
    }
  }
  return 0;
}

