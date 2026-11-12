
/* timer cleanup (not the main loop) */

void Timer_Teardown(void)

{
  if (DAT_006039bc != (code *)0x0) {
    (*DAT_006039bc)();
  }
  Timer_Stop();
  return;
}

