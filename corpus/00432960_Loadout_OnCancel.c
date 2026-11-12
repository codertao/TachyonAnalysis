
/* sweep */

void Loadout_OnCancel(void)

{
  if (DAT_005a73e8 == 0) {
    Loadout_SetOpen(0);
    return;
  }
  Loadout_CloseChoices(1);
  return;
}

