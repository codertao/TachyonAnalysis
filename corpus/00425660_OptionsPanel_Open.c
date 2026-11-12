
/* sweep */

void OptionsPanel_Open(void)

{
  int iVar1;
  
  iVar1 = FlightUi_SetPanelActive(3,1);
  if (iVar1 != 0) {
    Input_PushBindingSet(&PTR_DAT_0053e820);
    DAT_005b1ddc = &PTR_s_GAME_OPTIONS_00535c88;
    Snd_Play2D(0x10,0,0,0xff);
  }
  return;
}

