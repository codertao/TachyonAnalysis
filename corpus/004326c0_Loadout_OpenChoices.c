
/* sweep */

void Loadout_OpenChoices(int param_1)

{
  clr_bytes(&DAT_005a6a5c,0x988);
  DAT_005a68cc = 1;
  DAT_005a73e8 = 1;
  Snd_Play2D(0x10,0,0,0xff);
  if ((&DAT_005a68d4)[param_1 * 3] == 1) {
    Loadout_BuildWeaponChoices();
    return;
  }
  Loadout_BuildSystemChoices(&DAT_005a68d4 + param_1 * 3);
  return;
}

