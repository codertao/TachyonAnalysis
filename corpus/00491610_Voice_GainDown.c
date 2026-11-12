
/* sweep */

void Voice_GainDown(void)

{
  GLBL_spacesav[0x42] = GLBL_spacesav[0x42] + -5;
  if (GLBL_spacesav[0x42] < 0) {
    GLBL_spacesav[0x42] = 0;
  }
  netcomm_SetAudioGain(GLBL_spacesav[0x42]);
  return;
}

