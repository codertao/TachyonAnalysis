
void SpRules_Tick(void)

{
  if ((g_FlightStateFlags & 1) == 0) {
    FUN_00435a30();
  }
  if ((0xfa < DAT_005b3304) && (DAT_005b332c == 0)) {
    FUN_00455960();
    return;
  }
  return;
}

