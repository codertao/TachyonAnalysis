
void shutdown_audio(void)

{
  _AIL_waveOutClose_4(DAT_00601e70);
  _AIL_shutdown_0();
  GLBL_audio_running = 0;
  return;
}

