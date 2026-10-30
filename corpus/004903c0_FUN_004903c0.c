
void FUN_004903c0(void)

{
  if (((((g_FlightStateFlags & 4) == 0) && (DAT_005b2c58 != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    if (DAT_00565a39 != '\0') {
      netcomm_EnableLogging(1);
    }
    netcomm_ClientInitDefer(0,0,0,&DAT_00565894,DAT_005f9d64);
    DAT_00565882 = 1;
    netcomm_SetAudioGain(DAT_005b2cc8);
  }
  return;
}

