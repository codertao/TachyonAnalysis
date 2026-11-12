
/* Tachyon client callbacks -> NetCli_Init */

void NetCli_RegisterGameCallbacks(undefined4 *param_1)

{
  *param_1 = 0x4000;
  param_1[1] = 0x200;
  param_1[2] = 0x114;
  param_1[3] = CliPools_EndFrame;
  param_1[4] = Tach_CliDispatchEvent;
  param_1[5] = TachCli_OnStartupData;
  param_1[6] = Tach_ReadGameData;
  param_1[7] = Tach_WritePlayerData;
  param_1[8] = TachCli_AcceptSeq;
  param_1[9] = TachCli_RequestQuit;
  param_1[10] = TachCli_Shutdown;
  param_1[0xb] = TachCli_OnDisconnect;
  param_1[0xc] = TachCli_OnServerTimeout;
  if ((g_FlightStateFlags & 1) == 0) {
    set_global_some_game_mode(1);
  }
  NetCli_Init(param_1,0xc000);
  if ((g_FlightStateFlags & 4) != 0) {
    NetCli_SetSendInterval(2);
    DAT_005b39d0 = DAT_006af60c;
    DAT_005b3308 = 1;
    return;
  }
  NetCli_SetSendInterval(0x10);
  DAT_005b39d0 = DAT_006af60c;
  DAT_005b3308 = 1;
  return;
}

