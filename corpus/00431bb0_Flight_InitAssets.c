
/* sweep */

void Flight_InitAssets(void)

{
  Gfx_InitColorTable();
  SectorMap_Alloc(&DAT_005b31d4,0xcccc,&DAT_005b3304);
  Fonts_LoadTagged(&DAT_00562bb8);
  if ((g_FlightStateFlags & 1) == 0) {
    Flight_LoadAssets();
  }
  TextBar_Init();
  Rules_CallHook14();
  Nop();
  Weapon_DumpStats();
  return;
}

