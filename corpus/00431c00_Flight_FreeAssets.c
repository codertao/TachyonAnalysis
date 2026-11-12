
/* sweep */

void Flight_FreeAssets(void)

{
  if ((g_FlightStateFlags & 2) != 0) {
    FlightMap_Close();
  }
  Pal_FreeRefList();
  Gfx_HwControl1();
  clr_bytes(&DAT_005a7400,0x7968);
  clr_bytes(&DAT_005a6840,0x60);
  Pak_SetTexturesEnabled(1);
  return;
}

