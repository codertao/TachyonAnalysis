
/* sweep */

void Mss_OpenWaveOutDS(void)

{
  _AIL_set_preference_8(0xf,1);
  _AIL_waveOutOpen_16(&DAT_00601e70,0,0xffffffff,&DAT_00601e60);
  return;
}

