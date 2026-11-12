
/* sweep */

void Flight_ResetViewport(void)

{
  if ((g_FlightStateFlags & 2) == 0) {
    Viewport_SetScaled(0,0,0x27f,0x1df,1);
    Gfx_SetClipRect(&DAT_005a67a0);
  }
  return;
}

