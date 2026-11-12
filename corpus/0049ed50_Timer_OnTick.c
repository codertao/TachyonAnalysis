
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: guess */

void Timer_OnTick(void)

{
  Timer_Stop();
  if (DAT_006039b4 != (code *)0x0) {
    (*DAT_006039b4)();
  }
  _DAT_006039b0 = 1;
  Nop();
  return;
}

