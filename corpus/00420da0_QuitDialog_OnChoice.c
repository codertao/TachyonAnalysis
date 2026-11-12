
/* sweep */

void QuitDialog_OnChoice(int param_1)

{
  if (param_1 == 0) {
    Input_PopBindingSet(&PTR_DAT_0053e760);
    FlightUi_SetPanelActive(1,0);
  }
  else if (param_1 == 1) {
    Input_PopBindingSet(&PTR_DAT_0053e780);
    FlightUi_SetPanelActive(6,0);
    g_MissionEndFlag = 1;
    DAT_005b7e38 = 1;
    Snd_Play2D(0x11,0,0,0xff);
    return;
  }
  Snd_Play2D(0x11,0,0,0xff);
  return;
}

