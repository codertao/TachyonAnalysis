
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void ShipBuy_Exit(void)

{
  g_NextMode = g_StarbaseScreen;
  _DAT_00556e6c = 0xffffffff;
  OurFreeMem(DAT_0056363c);
  Teletype_ResetSlot(0);
  Sw_EnableZBuffer(0);
  Gfx_HwControl1();
  ShipBuy_ReleaseModels();
  return;
}

