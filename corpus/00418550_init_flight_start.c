
void init_flight_start(void)

{
  undefined1 local_34 [52];
  
  clr_bytes(&DAT_005b31c0,0x5ea0);
  clr_bytes(local_34,0x34);
  clr_bytes(&g_MissionEndFlag,0xc);
  Gfx_SetBrightMode(1);
  g_MissionEndReason = 0;
  DAT_005b8f48 = 1;
  Snd_ResetState();
  NetCli_RegisterGameCallbacks(local_34);
  Flight_InitViewport();
  CliPools_Init();
  Input_Init();
  Bdf_InitArray(0xcccc);
  if ((g_FlightStateFlags & 1) == 0) {
    VarStore_Load(s_vars_cfg_005343c0,&g_CurrentSavPath,&DAT_005a6148,0xcccc,1);
    Rules_Init();
    Races_Init();
  }
  Flight_InitAssets();
  DelaySnd_Init(0x10,0xcccc,&DAT_005a61e0);
  Snd3D_InitDefault();
  Scene_ResetState();
  Mem_CountTagged(0xffff,0xcccc);
  if ((g_FlightStateFlags & 1) != 0) {
    Voice_ClientInit();
    NetSrv_SetLocalPlayer(0x5b2c18,DAT_005a64f4,DAT_005a64f8);
  }
  ChatInput_Init(0x5b2c18);
  Debug_InitOverlays();
  Hud_Init();
  FlightUi_InitAll();
  g_NextMode = &g_Mode_StarbaseHub;
  Hyper_ResetState();
  SpaceDust_Init();
  Fog_Init();
  Sw_EnableZBuffer(1);
  DAT_005a6820 = 1;
  Audio_SetMasterVolume(0);
  Viewport_SetHeight(0xf1);
  Fade_SetLevel(0xf1);
  FlightMap_Open();
  return;
}

