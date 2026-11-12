
/* S->C 0x1121 handler */

void CliOn_CampaignCheck(void)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = Var_GetInt(DAT_005a6148,s_PLAYER_MAIN_VARS_00534198,s_CAMPAIGN_MISSION_005342f0,&local_4);
  if ((iVar1 != 0) && (local_4 != 0)) {
    Act_OpenCampaignCheck(0);
  }
  return;
}

