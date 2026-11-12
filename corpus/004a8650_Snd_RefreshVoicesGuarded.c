
/* sweep */

void Snd_RefreshVoicesGuarded(uint param_1)

{
  if (GLBL_audio_running != 0) {
    DAT_00601e20 = param_1;
    if (0xff < param_1) {
      DAT_00601e20 = 0xff;
    }
    Snd_RefreshAllVoices();
    return;
  }
  return;
}

