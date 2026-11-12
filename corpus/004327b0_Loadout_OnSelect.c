
/* sweep */

void Loadout_OnSelect(void)

{
  if (DAT_005a73e8 == 0) {
    Loadout_OpenChoices(DAT_005a6a58);
    return;
  }
  if (DAT_005a73dc != 0) {
    Loadout_ApplyChoice(DAT_005a6a58,DAT_005a73e0);
  }
  return;
}

