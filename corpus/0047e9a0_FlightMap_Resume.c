
/* sweep: guess */

void FlightMap_Resume(void)

{
  Input_ResetForFlight();
  Sim_SetFrozen(DAT_00571fc8);
  DAT_005b90a0 = 0;
  g_CutsceneActive = 0;
  return;
}

