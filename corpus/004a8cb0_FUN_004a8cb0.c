
void FUN_004a8cb0(void)

{
  if (GLBL_audio_running != 0) {
    Snd_MixerResetGuarded();
    return;
  }
  return;
}

