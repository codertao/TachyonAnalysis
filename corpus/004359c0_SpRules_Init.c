
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* load desnames.cfg, PLAYER_MAIN_VARS.PLAYER_SIDE */

void SpRules_Init(void)

{
  int iVar1;
  
  clr_bytes(&DAT_005a5520,0x910);
  SpRules_SetCampaignFlag(1);
  Sped_LoadNameRegistry(s_desnames_cfg_0053f928,0xd100);
  iVar1 = DAT_005a6540;
  if (DAT_005a6540 == 0) {
    iVar1 = SpRules_GetPlayerSide(s_PLAYER_MAIN_VARS_00534198,s_PLAYER_SIDE_0053f968);
  }
  _DAT_0058b074 = iVar1;
  DAT_005a5df4 = iVar1;
  DAT_005a5df0 = Race_GetFlags(iVar1);
  SpRules_ResetMissionVars();
  Counters_Reset();
  return;
}

