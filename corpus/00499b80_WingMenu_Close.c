
/* sweep */

void WingMenu_Close(void)

{
  Input_PopBindingSet(&PTR_DAT_0053e728);
  FlightUi_SetPanelActive(5,0);
  Snd_Play2D(0x11,0,0,0xff);
  return;
}

