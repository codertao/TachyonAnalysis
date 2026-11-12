
void SpRules_Tick(void)

{
  if ((g_FlightStateFlags & 1) == 0) {
    SpRules_TickQuadrants();
  }
  if ((0xfa < DAT_005b3304) && (DAT_005b332c == 0)) {
    Player_Undock();
    return;
  }
  return;
}

