
/* sweep */

void Snd_ResetState(void)

{
  clr_bytes(&DAT_00563580,0x30);
  clr_bytes(&DAT_005897c0,8);
  Music_ResetState();
  Audio_Init(8,1);
  return;
}

