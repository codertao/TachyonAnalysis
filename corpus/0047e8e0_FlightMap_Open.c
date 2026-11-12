
/* sweep */

void FlightMap_Open(void)

{
  if ((g_FlightStateFlags & 4) != 0) {
    DAT_005b90a0 = 0;
    Map_SetInFlight(1);
    Map_Enter();
    Ui_FreeCursorGfx();
    return;
  }
  return;
}

