
/* MP/mission sector start: Spx_LoadSectorTop(g_MapSpxName 0x590208) then mode hook */

void Sector_StartMP(undefined4 param_1)

{
  MpEnt_ClearAll();
  MpRules_IsGameTypeValid(param_1);
  Sectors_ShutdownDescs();
  Sectors_FreeMaps();
  DcbPools_Reset();
  Dialog_Reset(&DAT_005a5dd0);
  Mem_FreeTag(0xd500);
  Mem_FreeTag(0xd530);
  Nop();
  Spx_LoadSectorTop(&DAT_00590208);
  if (*(code **)(DAT_00590238 + 0x50) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x50))();
  }
  Srv_ResetAllConns();
  Nop();
  MpEnt_ResetAll(0);
  return;
}

