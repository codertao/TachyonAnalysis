
/* sweep: fire.pak */

void FireFx_LoadModels(void)

{
  clr_bytes(&DAT_005b2160,0x1c);
  if ((g_FlightStateFlags & 2) != 0) {
    ModelPool_LoadListDefault(&PTR_s_fire_pak_00535a28,&g_FxModelPool);
  }
  return;
}

