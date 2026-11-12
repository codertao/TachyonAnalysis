
/* sweep */

void Loadout_CloseChoices(int param_1)

{
  DAT_005a73e8 = 0;
  DAT_005a68cc = 0;
  if (param_1 != 0) {
    Snd_Play2D(0x11,0,0,0xff);
  }
  return;
}

