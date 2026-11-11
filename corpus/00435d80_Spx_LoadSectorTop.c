
/* LoadSector(name): Spx_LoadSector(name,0) + finalize 0x4355a0; records count into g_SectorCount2
   (0x58af70) */

void Spx_LoadSectorTop(undefined4 param_1)

{
  Spx_LoadSector(param_1,0);
  FUN_004355a0();
  DAT_0058af70 = g_SectorCount;
  return;
}

