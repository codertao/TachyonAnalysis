
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GetCommandLineA; NLSTATS etc. */

void CmdLine_Dispatch(char *param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = &DAT_005a67a0;
  for (iVar2 = 0x22; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  __strupr(param_1);
  DAT_005b8f48 = 0;
  App_Init(param_1);
  iVar2 = Cd_Check(1);
  if (iVar2 != 0) {
    CmdLine_ParseSwitches(param_1);
    DAT_005a68a0 = Mixer_GetVolume();
    Voice_LoadSettings();
    pcVar1 = _strstr(param_1,s_NLSTATS_0053f42c);
    if (pcVar1 != (char *)0x0) {
      DAT_0053f288 = 1;
    }
    Pak_SetFaceLimit(0x9c4);
    Sys_SetVar39a0(0);
    _g_FlightStateFlags = 7;
    if (DAT_00562bc8 == 0) {
      StateMachine_Run(&g_Mode_TitleMenu);
    }
    else {
      KeyCfg_Reload(0);
      StateMachine_Run(&g_Mode_InFlight);
    }
    snapshot_to_spacesav();
    Mixer_SetVolume(DAT_005a68a0);
  }
  Audio_StopAll();
  Vid_SetResEx(0x280,0x1e0,1,0x280,0x1e0);
  Cursor_ForceShow();
  Video_ToggleFullscreen();
  Joy_Shutdown();
  if (DAT_005a6620 == 0) {
    CmdLine_RunPendingLaunch();
    return;
  }
  return;
}

