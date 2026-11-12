
/* sweep */

void SbAudio_Play(undefined4 param_1,undefined4 param_2)

{
  SbAudio_StopAll();
  DAT_005635bc = Audio_LoadSample(param_1);
  DAT_005635c0 = Audio_PlaySample(DAT_005635bc,0,param_2,0);
  return;
}

