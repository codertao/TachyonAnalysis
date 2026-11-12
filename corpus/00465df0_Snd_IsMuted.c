
/* sweep: guess */

uint Snd_IsMuted(void)

{
  return DAT_005897b0 & (DAT_005897b0 == GLBL_spacesav[0x54]) - 1;
}

