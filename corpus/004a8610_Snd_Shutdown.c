
/* sweep */

void Snd_Shutdown(void)

{
  if (GLBL_audio_running != 0) {
    if (DAT_00563e9c == 0) {
      Snd_WaveOutStop();
      return;
    }
    timeEndPeriod(DAT_005f9d44);
    timeKillEvent(DAT_005b9d20);
  }
  return;
}

