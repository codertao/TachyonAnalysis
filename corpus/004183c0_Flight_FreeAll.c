
/* sweep: artram/close/sysclose/clntclos memory logs */

void Flight_FreeAll(void)

{
  Flight_FreeAssets();
  Mem_DumpStatsToFile2(s_artram_txt_0053437c,0xcf00,0xcf01);
  Mem_CountTagged(0xffff,0xcccc);
  Music_Close();
  Flight_StopMedia();
  Teletype_ResetAll();
  Mem_FreeByTag(0xc000,0xcfff);
  Mem_DumpStatsToFile(s_close_txt_00534370);
  Mem_DumpTempToFile(s_sysclose_txt_00534360);
  Viewport_SetScaled(0,0,0x27f,0x1df,1);
  Gfx_SetClipRect(&DAT_005a67a0);
  NetCli_Shutdown();
  Gfx_ClearToBlack();
  Sw_EnableZBuffer(0);
  DAT_005a6820 = 0;
  SndTrig_Free(&DAT_005a61e0);
  FlightUi_FreeAll();
  Bdf_Reset();
  clr_bytes(&DAT_005b31c0,0x5ea0);
  Audio_SetMasterVolume(0xff);
  Mem_FreeByTag(0xd000,0xe000);
  Mem_DumpAllPoolsToFile(s_clntclos_txt_00534350);
  DAT_006691e4 = 0;
  DAT_005b8f48 = 0;
  FF_StopSpring();
  Gfx_SetBrightMode(0);
  Input_FreeBindings();
  netcomm_Shutdown();
  Voice_LoadSettings();
  return;
}

