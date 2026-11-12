
/* sweep */

void Input_UpdateAxes(void)

{
  if ((g_FlightStateFlags & 2) != 0) {
    if (DAT_005aeed0 == 0) {
      Input_MouseToAxes();
    }
    else {
      Input_JoyToAxes();
    }
    if (DAT_005aeeb4 == 0) {
      DAT_005aeeb0 = 0;
    }
  }
  return;
}

