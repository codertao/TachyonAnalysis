
/* sweep */

void Viewport_SetFlight(int param_1)

{
  if (param_1 != 0) {
    Viewport_SetAndClear(0,0x3c,0x27f,0x1a3);
    return;
  }
  Viewport_SetAndClear(0,0,0x27f,0x1df);
  return;
}

