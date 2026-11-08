
/* netcomm; skipped in SP */

void Voice_ClientInit(void)

{
  if (((((g_FlightStateFlags & 4) == 0) && (GLBL_spacesav[0x26] != 0)) && (DAT_00565880 != '\0')) &&
     (DAT_00565881 != '\0')) {
    if (DAT_00565a39 != '\0') {
      netcomm_EnableLogging(1);
    }
    netcomm_ClientInitDefer(0,0,0,&DAT_00565894,DAT_005f9d64);
    DAT_00565882 = 1;
    netcomm_SetAudioGain(GLBL_spacesav[0x42]);
  }
  return;
}

