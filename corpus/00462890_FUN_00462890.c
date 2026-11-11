
void FUN_00462890(void)

{
  if ((g_FlightStateFlags & 2) == 0) {
    FUN_00458260();
    Sw_EnableZBuffer(0);
    DAT_005a6820 = 0;
  }
  return;
}

