
/* if not paused (0x5affdc==0 && g_NextMode==0) -> Input_DispatchBindings */

void Flight_InputDispatch(void)

{
  if ((DAT_005affdc == 0) && (DAT_00590e48 == 0)) {
    Input_DispatchBindings();
    return;
  }
  return;
}

