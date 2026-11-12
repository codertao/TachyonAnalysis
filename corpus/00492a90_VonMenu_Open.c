
/* sweep */

void VonMenu_Open(void)

{
  int iVar1;
  
  iVar1 = FlightUi_SetPanelActive(7,1);
  if (iVar1 != 0) {
    Input_PushBindingSet(&PTR_DAT_0053e860);
    DAT_005657ac = &PTR_s_VON_OPTIONS_00559ef0;
    Snd_Play2D(0x10,0,0,0xff);
  }
  return;
}

