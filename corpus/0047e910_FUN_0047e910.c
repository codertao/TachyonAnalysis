
void FUN_0047e910(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((g_FlightStateFlags & 4) != 0) {
    FUN_0047a930();
    if (DAT_00571340 != 0) {
      FUN_00437e00(&DAT_005719a0);
    }
    FUN_0047cad0(0);
    puVar2 = &DAT_00571ca0;
    for (iVar1 = 0x33; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
  }
  return;
}

