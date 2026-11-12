
/* sweep */

void FlightMap_Close(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((g_FlightStateFlags & 4) != 0) {
    Map_Free();
    if (DAT_00571340 != 0) {
      Mnu_ShutdownKeepGfx(&DAT_005719a0);
    }
    Map_SetInFlight(0);
    puVar2 = &DAT_00571ca0;
    for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

