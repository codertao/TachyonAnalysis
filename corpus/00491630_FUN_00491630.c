
void FUN_00491630(void)

{
  DAT_005b2cc8 = DAT_005b2cc8 + 5;
  if (0xff < DAT_005b2cc8) {
    DAT_005b2cc8 = 0xff;
  }
  netcomm_SetAudioGain(DAT_005b2cc8);
  return;
}

