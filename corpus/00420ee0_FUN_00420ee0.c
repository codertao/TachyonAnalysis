
void FUN_00420ee0(void)

{
  clr_bytes(&DAT_005b2160,0x1c);
  if ((g_FlightStateFlags & 2) != 0) {
    FUN_00431a10(&PTR_s_fire_pak_00535a28,&g_FxModelPool);
  }
  return;
}

