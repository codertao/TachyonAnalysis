
void FUN_004374e0(void)

{
  undefined4 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (g_SectorCount != 0) {
    puVar1 = (undefined4 *)&g_SectorTable[0].field_0x8;
    do {
      FUN_004374a0(puVar1[-1]);
      FUN_004374a0(*puVar1);
      uVar2 = uVar2 + 1;
      puVar1 = puVar1 + 0x11;
    } while (uVar2 < g_SectorCount);
  }
  return;
}

