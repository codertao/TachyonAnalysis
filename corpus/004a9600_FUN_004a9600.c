
void FUN_004a9600(undefined4 param_1,int param_2)

{
  if ((param_2 == 0x3bd) && (GLBL_audio_running != 0)) {
    if (DAT_005f9e10 == 1) {
      DAT_005f9d60 = DAT_005f9e04;
      FUN_004cc708();
      DAT_005f9da4 = DAT_005f9d54;
      waveOutWrite(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9da0,0x20);
      DAT_005f9e10 = 2;
      return;
    }
    if (DAT_005f9e10 == 2) {
      DAT_005f9d60 = DAT_005f9e08;
      FUN_004cc708();
      DAT_005f9dc4 = DAT_005f9d54;
      waveOutWrite(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9dc0,0x20);
      DAT_005f9e10 = 3;
      return;
    }
    if (DAT_005f9e10 == 3) {
      DAT_005f9d60 = DAT_005f9e0c;
      FUN_004cc708();
      DAT_005f9de4 = DAT_005f9d54;
      waveOutWrite(DAT_005f9e00,(LPWAVEHDR)&DAT_005f9de0,0x20);
      DAT_005f9e10 = 1;
    }
  }
  return;
}

