
/* sweep */

void KeyChart_Close(void)

{
  Input_PopBindingSet(&PTR_DAT_0053e7e0);
  FlightUi_SetPanelActive(2,0);
  Snd_Play2D(0x11,0,0,0xff);
  return;
}

