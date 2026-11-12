
/* sweep */

void PlayerList_SetVisible(int param_1,int param_2)

{
  DAT_00590d58 = param_1;
  if (param_1 == 0) {
    Input_PopBindingSet(&PTR_DAT_0053eaa8);
    if (param_2 != 0) {
      Snd_Play2D(0x11,0,0,0xff);
    }
  }
  else {
    Input_PushBindingSet();
    if (param_2 != 0) {
      Snd_Play2D(0x10,0,0,0xff);
      return;
    }
  }
  return;
}

