
/* sweep */

void Timer_Stop(void)

{
  if ((DAT_0060394c != 0) && (DAT_00603a04 != 0)) {
    timeEndPeriod(DAT_006039e4);
    timeKillEvent(DAT_006039e0);
    DAT_00603a04 = 0;
  }
  return;
}

