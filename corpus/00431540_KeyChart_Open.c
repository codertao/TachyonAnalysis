
/* sweep */

void KeyChart_Open(void)

{
  int iVar1;
  
  iVar1 = FlightUi_SetPanelActive(2,1);
  if (iVar1 != 0) {
    Input_PushBindingSet(&PTR_DAT_0053e7e0);
    Snd_Play2D(0x10,0,0,0xff);
  }
  return;
}

