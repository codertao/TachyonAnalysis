
/* Tachyon server config/callbacks -> NetSrv_Init (was populate_func_ptr_struct) */

void NetSrv_RegisterGameCallbacks(uint *param_1)

{
  if ((g_FlightStateFlags & 4) == 0) {
    DAT_005897e0 = GLBL_spacesav[0];
    if (0x20 < GLBL_spacesav[0]) {
      DAT_005897e0 = 0x20;
    }
  }
  else {
    DAT_005897e0 = 1;
  }
  *param_1 = DAT_005897e0;
  param_1[1] = 0x208;
  param_1[2] = 0x4000;
  param_1[3] = 0x100;
  param_1[4] = 0x80;
  param_1[5] = 0x114;
  param_1[6] = (uint)FUN_00445720;
  param_1[7] = (uint)TachSrv_WorldTick;
  param_1[8] = (uint)Tach_SrvDispatchEvent;
  param_1[9] = (uint)Tach_SrvReadPlayerData;
  param_1[10] = (uint)FUN_00445720;
  param_1[0xb] = (uint)FUN_00461280;
  param_1[0xc] = (uint)FUN_00461400;
  param_1[0xd] = (uint)FUN_00445720;
  param_1[0xe] = (uint)FUN_00445720;
  param_1[0xf] = (uint)Tach_SrvWriteGameData;
  param_1[0x10] = (uint)Tach_SrvWriteStartupStage;
  param_1[0x11] = (uint)Tach_SrvEventFilter;
  param_1[0x12] = (uint)FUN_00461b20;
  param_1[0x13] = (uint)Tach_SrvStartupStageDone;
  param_1[0x14] = (uint)Dcb_GC;
  param_1[0x15] = (uint)&DAT_0058b0a0;
  if ((g_FlightStateFlags & 2) == 0) {
    set_global_some_game_mode(2);
  }
  NetSrv_Init(param_1,0xb000);
  if ((g_FlightStateFlags & 4) != 0) {
    NetSrv_SetSendInterval(2);
    DAT_0058b070 = 4;
    return;
  }
  NetSrv_SetSendInterval(0x10);
  DAT_0058b070 = 4;
  Voice_ServerInit();
  return;
}

