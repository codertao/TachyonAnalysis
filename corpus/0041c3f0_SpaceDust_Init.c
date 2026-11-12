
/* sweep: moveroid.pak, "Debris DCBS" */

void SpaceDust_Init(void)

{
  Pak_SetLoadPalParams(g_PalBrightness,0x80,0x80,0x80,0x80);
  DAT_005b27c0 = Pak_Load(s_moveroid_pak_00534c6c,0,s_moveroid_pal_00534c7c);
  DcbPool_Init(&DAT_005b27c4,0x3c,0x84,s_Debris_DCBS_00534c60,0);
  SpaceDust_SpawnAll();
  DAT_005b27ec = 1;
  return;
}

