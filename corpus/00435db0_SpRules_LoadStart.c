
/* sweep */

void SpRules_LoadStart(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_005a6618;
  if (DAT_005a6614 == 0) {
    uVar1 = 0xffffffff;
  }
  Ingame_LoadStarbase(uVar1);
  DAT_005a5e2c = Rtxt_GroupBaseIndex(DAT_005a6144,s_FLIGHT_GROUPS_0053fa08);
  Spx_LoadSectorTop(&DAT_005a5520);
  Sectors_InitTriggerVarConds();
  DAT_005a5e1c = g_SectorTable[0].regionId;
  DAT_005a5e20 = g_SectorTable[0].sectorId;
  Wingman_Init();
  return;
}

