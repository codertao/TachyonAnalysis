
/* sweep */

void Loadout_Build(void)

{
  clr_bytes(&DAT_005a68d4,0x180);
  DAT_005a6a54 = 0;
  DAT_005a6a58 = 0;
  Loadout_AddWeapons();
  Loadout_AddSystems();
  return;
}

