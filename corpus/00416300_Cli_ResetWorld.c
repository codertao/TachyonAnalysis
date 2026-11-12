
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep */

void Cli_ResetWorld(void)

{
  clr_bytes(&DAT_005b334c,0x40);
  *(undefined4 *)(GLBL_SOME_CONTEXT + 0x90) = 0;
  DAT_005b1864 = 0;
  Gate_FreeAnims();
  CliPools_Flush();
  Replica_DestroyAll();
  EntityLabel_ClearAll();
  SectorMap_Clear(&DAT_005b31d4);
  DAT_005b31c8 = 0;
  Gate_FreeAllReplicas();
  DAT_005b7e44 = 0;
  DAT_005b9044 = 0;
  DcbList_FreeByType(DAT_005b31c0,0xb);
  DcbList_FreeByType(DAT_005b31c0,3);
  DcbList_FreeByType(DAT_005b31c0,0x17);
  DcbList_FreeByType(DAT_005b31c0,0x12);
  DcbList_FreeByType(DAT_005b31c0,7);
  DcbList_FreeByType(DAT_005b31c0,9);
  DcbList_FreeByType(DAT_005b31c0,8);
  Fx_FreeAllType1a();
  _DAT_005b3310 = 0;
  DAT_005b39a8 = 0;
  DAT_005b3318 = 0;
  DAT_005b3340 = 0;
  Orders_ClearClient();
  return;
}

