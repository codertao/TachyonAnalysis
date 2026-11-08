
void FUN_00491630(void)

{
  GLBL_spacesav[0x42] = GLBL_spacesav[0x42] + 5;
  if (0xff < GLBL_spacesav[0x42]) {
    GLBL_spacesav[0x42] = 0xff;
  }
  netcomm_SetAudioGain(GLBL_spacesav[0x42]);
  return;
}

