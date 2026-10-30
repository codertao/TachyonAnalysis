
void FUN_00491610(void)

{
  DAT_005b2cc8 = DAT_005b2cc8 + -5;
  if (DAT_005b2cc8 < 0) {
    DAT_005b2cc8 = 0;
  }
  netcomm_SetAudioGain(DAT_005b2cc8);
  return;
}

