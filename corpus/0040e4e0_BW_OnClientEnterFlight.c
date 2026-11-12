
/* sweep */

void BW_OnClientEnterFlight(void)

{
  Loadout_SetOpen(0,0);
  Player_InitWeapons(&DAT_005b8ff0,&DAT_005b1f10,DAT_005b1f0c);
  DAT_005b2154 = DAT_005b8f84;
  DAT_005b20d4 = 0;
  DAT_005b20d8 = 1;
  return;
}

