
/* MP/mission sector start: Spx_LoadSectorTop(g_MapSpxName 0x590208) then mode hook */

void Sector_StartMP(undefined4 param_1)

{
  FUN_0044fac0();
  FUN_0044fa40(param_1);
  FUN_004374e0();
  FUN_00437520();
  FUN_00462990();
  FUN_0041f620(&DAT_005a5dd0);
  FUN_0049c6e0(0xd500);
  FUN_0049c6e0(0xd530);
  FUN_00445720();
  Spx_LoadSectorTop(&DAT_00590208);
  if (*(code **)(DAT_00590238 + 0x50) != (code *)0x0) {
    (**(code **)(DAT_00590238 + 0x50))();
  }
  FUN_00461240();
  FUN_00445720();
  FUN_0044fa60(0);
  return;
}

