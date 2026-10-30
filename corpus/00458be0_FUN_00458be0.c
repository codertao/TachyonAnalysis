
void FUN_00458be0(void)

{
  if ((DAT_0058f1c0 != 0) && ((g_FlightStateFlags & 4) != 0)) {
    DAT_0058f1d0 = 1;
    FUN_0049e8b0();
    FUN_00466f30(1);
    FUN_0044ed00(&DAT_0058f1d0,0,0);
  }
  return;
}

