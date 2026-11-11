
/* set busy flag 0x5f9d5c around Snd_MixerReset so the mix callback skips */

void Snd_MixerResetGuarded(void)

{
  DAT_005f9d5c = 1;
  Snd_MixerReset();
  DAT_005f9d5c = 0;
  return;
}

