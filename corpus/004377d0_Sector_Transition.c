
/* SP sector transition(ctx,spxName): teardown prev (0x435c50), reset galaxy table (0x437520),
   Spx_LoadSectorTop(spxName), spawn player from PLAYER.SCR (0x41f590) */

void Sector_Transition(undefined4 param_1,undefined4 param_2)

{
  DAT_005a5dcc = param_1;
  Region_FindByName(param_1);
  Snd3D_StopAll();
  Cli_ResetWorld();
  Sectors_ShutdownDescs();
  Sectors_FreeMaps();
  DcbPools_Reset();
  Bdf_FreeAll();
  Mem_FreeTag(0xd500);
  Mem_FreeTag(0xd530);
  OurFreeMem(DAT_005a5dc8);
  Dialog_Reset(&DAT_005a5dd0);
  DAT_005a5dc8 = load_rtxt_bin(&DAT_005a5530,0xd100);
  Spx_LoadSectorTop(param_2);
  Sped_FreeAliases();
  Dialog_BindActor(s_PLAYER_SCR_0053fa3c,g_SrvCurShip,&DAT_005a5dd0);
  Sectors_InitTriggerVarConds();
  return;
}

