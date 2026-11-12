
/* sweep */

void OptionsPanel_Close(void)

{
  Input_PopBindingSet(&PTR_DAT_0053e820);
  FlightUi_SetPanelActive(3,0);
  Snd_Play2D(0x11,0,0,0xff);
  return;
}

