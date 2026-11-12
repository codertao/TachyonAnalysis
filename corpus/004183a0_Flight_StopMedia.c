
/* sweep */

void Flight_StopMedia(void)

{
  Snd3D_Shutdown();
  Audio_StopAllSamples();
  Audio_SetMasterVolume(0xff);
  return;
}

