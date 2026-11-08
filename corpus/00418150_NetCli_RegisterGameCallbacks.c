
/* Tachyon client callbacks -> NetCli_Init */

void NetCli_RegisterGameCallbacks(undefined4 *param_1)

{
  *param_1 = 0x4000;
  param_1[1] = 0x200;
  param_1[2] = 0x114;
  param_1[3] = FUN_00415d90;
  param_1[4] = Tach_CliDispatchEvent;
  param_1[5] = TachCli_OnStartupData;
  param_1[6] = Tach_ReadGameData;
  param_1[7] = Tach_WritePlayerData;
  param_1[8] = FUN_00417e50;
  param_1[9] = FUN_00417fd0;
  param_1[10] = FUN_00417ff0;
  param_1[0xb] = FUN_00418050;
  param_1[0xc] = FUN_00418110;
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

