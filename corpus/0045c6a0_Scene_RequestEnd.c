
/* sweep: guess */

void Scene_RequestEnd(void)

{
  if (((DAT_005a6730 != 0) && (DAT_0058f1c0 != 0)) && ((g_FlightStateFlags & 4) != 0)) {
    DAT_0058f210 = 1;
    RunOnce_Set(&DAT_0058f214,0,0);
    DAT_0058f214 = 0xfa;
  }
  return;
}

