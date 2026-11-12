
/* sweep */

void Snd_MixerResetFwd(void)

{
  if (GLBL_audio_running != 0) {
    Snd_MixerResetGuarded();
    return;
  }
  return;
}

