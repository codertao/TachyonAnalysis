
/* sweep */

void Flight_ServerGfxShutdown(void)

{
  if ((g_FlightStateFlags & 2) == 0) {
    Gfx_ClearToBlack();
    Sw_EnableZBuffer(0);
    DAT_005a6820 = 0;
  }
  return;
}

