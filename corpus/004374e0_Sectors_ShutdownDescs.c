
/* sweep */

void Sectors_ShutdownDescs(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (g_SectorCount != 0) {
    puVar1 = (undefined4 *)&g_SectorTable[0].field_0x8;
    do {
      DescList_Shutdown(puVar1[-1]);
      DescList_Shutdown(*puVar1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x11;
    } while (uVar2 < g_SectorCount);
  }
  return;
}

