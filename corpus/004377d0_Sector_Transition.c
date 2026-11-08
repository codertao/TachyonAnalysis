
/* SP sector transition(ctx,spxName): teardown prev (0x435c50), reset galaxy table (0x437520),
   Spx_LoadSectorTop(spxName), spawn player from PLAYER.SCR (0x41f590) */

void Sector_Transition(undefined4 param_1,undefined4 param_2)

{
  DAT_005a5dcc = param_1;
  FUN_00435c50(param_1);
  FUN_00466d70();
  FUN_00416300();
  FUN_004374e0();
  FUN_00437520();
  FUN_00462990();
  FUN_00467810();
  FUN_0049c6e0(0xd500);
  FUN_0049c6e0(0xd530);
  OurFreeMem(DAT_005a5dc8);
  FUN_0041f620(&DAT_005a5dd0);
  DAT_005a5dc8 = load_rtxt_bin(&DAT_005a5530,0xd100);
  Spx_LoadSectorTop(param_2);
  FUN_004375a0();
  FUN_0041f590(s_PLAYER_SCR_0053fa3c,DAT_0058b064,&DAT_005a5dd0);
  FUN_0048e090();
  return;
}

