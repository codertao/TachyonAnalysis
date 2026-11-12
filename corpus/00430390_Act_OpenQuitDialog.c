
/* sweep: key action */

void Act_OpenQuitDialog(void)

{
  int iVar1;
  
  iVar1 = FlightUi_SetPanelActive(1,1);
  if (iVar1 != 0) {
    Input_PushBindingSet(&PTR_DAT_0053e760);
    Snd_Play2D(0x10,0,0,0xff);
  }
  return;
}

