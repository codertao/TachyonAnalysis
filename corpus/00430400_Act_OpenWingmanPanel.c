
/* sweep */

void Act_OpenWingmanPanel(void)

{
  int iVar1;
  
  if (g_Wingman == 0) {
    Snd_Play2D(1,9,0,0xff);
  }
  else {
    iVar1 = FlightUi_SetPanelActive(5,1);
    if (iVar1 != 0) {
      Input_PushBindingSet(&PTR_DAT_0053e728);
      Snd_Play2D(0x10,0,0,0xff);
      return;
    }
  }
  return;
}

