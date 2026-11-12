
/* sweep */

void SbAudio_StopAll(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x32;
  if (DAT_005635bc != 0) {
    Audio_StopSample(DAT_005635c0);
    iVar1 = SbAudio_Stop();
    for (; (iVar1 != 0 && (iVar2 != 0)); iVar2 = iVar2 + -1) {
      Music_Tick();
      iVar1 = SbAudio_Stop();
    }
    OurFreeMem(DAT_005635bc);
    DAT_005635bc = 0;
    DAT_005635c0 = 0;
  }
  return;
}

