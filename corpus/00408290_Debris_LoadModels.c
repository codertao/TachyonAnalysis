
/* sweep: rdebris1.pak into g_FxModelPool */

void Debris_LoadModels(void)

{
  if ((g_FlightStateFlags & 2) != 0) {
    ModelPool_LoadListDefault(&PTR_s_rdebris1_pak_00532988,&g_FxModelPool);
  }
  return;
}

