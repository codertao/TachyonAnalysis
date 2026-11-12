
/* sweep */

void ChatInput_Close(int param_1)

{
  if (param_1 == 0) {
    ChatInput_Send();
  }
  Input_PopBindingSet(&PTR_DAT_0053e8c0);
  FlightUi_SetPanelActive(4,0);
  Snd_Play2D(0x11,0,0,0xff);
  return;
}

