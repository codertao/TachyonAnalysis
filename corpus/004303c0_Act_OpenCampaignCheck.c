
/* sweep */

void Act_OpenCampaignCheck(void)

{
  int iVar1;
  
  iVar1 = FlightUi_SetPanelActive(6,1);
  if (iVar1 != 0) {
    SpRules_SetCampaignFlag(0);
    Input_PushBindingSet(&PTR_DAT_0053e780);
    Snd_Play2D(0x10,0,0,0xff);
  }
  return;
}

