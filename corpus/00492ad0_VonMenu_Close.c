
/* sweep */

void VonMenu_Close(void)

{
  Input_PopBindingSet(&PTR_DAT_0053e860);
  FlightUi_SetPanelActive(7,0);
  Snd_Play2D(0x11,0,0,0xff);
  return;
}

