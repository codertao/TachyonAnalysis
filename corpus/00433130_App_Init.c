
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* sweep: tachyon.pff, subsystems init */

void App_Init(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  
  Cbin_ResetGlobalCtx();
  Mem_SetDebugFlag(1);
  Mem_InitPool();
  Mem_InitMainPool();
  Mem_InitTempPool();
  Input_ClearAllKeys();
  vid_Init();
  File_ResetState();
  Pal_ClearCurrent();
  Pal_ResetTables();
  Nop();
  Snd_ResetState();
  MessagePump_IdleTick();
  File_SetLogCallback(Error_CannotOpenFile);
  Mem_SetVar3e90(&LAB_00433050);
  Mem_SetVar3f74(1);
  Rend_Init();
  Pak_SetErrorCallback(&LAB_00432f40);
  set_global_near_far(0x2000,0x13880000);
  Rend_SetTickRate(0x32);
  Pal_SetVar389c(1);
  Pool_SetVar_55effc(0xffff);
  Pak_SetMemPools(0xffff,0xffff);
  Pal_SwapMemPool(0x10000);
  Gfx_InitState();
  Sw_SelectRasterizer(DAT_0060398c);
  NetDrv_Init();
  Sys_SetVar39ac(0x100);
  Sys_SetVar39d4(CrashDump_WriteAppData);
  Input_ClearKeyboardState(0);
  puVar3 = &DAT_005a6520;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  g_MissionEndFlag = 0;
  g_CutsceneActive = 0;
  DAT_005a6140 = 0;
  g_MissionEndReason = 0;
  DAT_005a6144 = 0;
  DAT_005a6148 = 0;
  puVar3 = &DAT_005a6540;
  for (iVar2 = 0x44; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_005a614c = 0;
  DAT_005a6150 = 0;
  _g_FlightStateFlags = 0;
  puVar3 = &DAT_005a6720;
  for (iVar2 = 0x1c; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  DAT_0060399c = 1;
  DAT_005a6190 = Pff_Open(s_tachyon_pff_0053f3fc);
  Pff_SetBase(DAT_005a6190);
  File_SetErrorFlag(1);
  File_SetBypassPff(1);
  Config_Load();
  File_SetBypassPff(0);
  Display_InitDevice();
  Display_ClampAndApply();
  local_8 = (undefined4)(longlong)ROUND(_DAT_005b2b98 * _DAT_0052e544);
  Rend_SwapLodScale(local_8);
  if (DAT_005b2b2c != 0) {
    DInput_Init();
    DInput_SelectByGuid(DAT_005640d0 + 0x14);
    FF_SetEnabledA(0);
    FF_SetEnabledB(0);
  }
  pcVar1 = _strstr(param_1,&DAT_0053f3f8);
  if (pcVar1 != (char *)0x0) {
    File_SetBypassPff(1);
  }
  Cursor_HideOnce();
  Sys_SetTimerCallback(&LAB_00432d00);
  Sys_SetShutdownCallback(&LAB_00432cb0);
  Sys_SetVar39c0(&LAB_00432d40);
  Sys_SetVar39c4(&LAB_00432d60);
  Sys_SetVar39d8(&LAB_00432d80);
  Sys_SetVar39dc(&LAB_00432dc0);
  Vid_SetPixelScale(0x20);
  Pal_FreeAllRefs();
  Pal_SetTableDepth(0x20);
  DAT_005a6808 = (uint)(DAT_005b2ad4 != 0);
  Video_Init();
  KeyCfg_LoadHelpText();
  return;
}

