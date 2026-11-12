
/* sweep */

void Snd_WaveOutStop(void)

{
  MMRESULT MVar1;
  int iVar2;
  
  if (GLBL_audio_running != 0) {
    waveOutReset(DAT_005f9e00);
    waveOutUnprepareHeader(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9da0,0x20);
    waveOutUnprepareHeader(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9dc0,0x20);
    waveOutUnprepareHeader(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9de0,0x20);
    iVar2 = 0;
    do {
      MessagePump_IdleTick();
      MVar1 = waveOutClose(DAT_005f9e00);
      if (MVar1 == 0) break;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 10000);
    Mem_FreeTemp(DAT_005f9e04);
    Mem_FreeTemp(DAT_005f9e08);
    Mem_FreeTemp(DAT_005f9e0c);
  }
  return;
}

