
/* rules shutdown, VarStore_Save .sav (SP only), free pools, netcomm_Shutdown */

void Flight_ServerShutdown(void)

{
  int iVar1;
  
  Mem_DumpStatsToFile(s_preclose_txt_00549614);
  Nop();
  Rules_Shutdown();
  if ((g_CurrentSavPath != '\0') && (DAT_005b7e38 == 0)) {
    iVar1 = Stub_Nop434450();
    if ((iVar1 == 1) && ((g_FlightStateFlags & 4) != 0)) {
      VarStore_Save(&g_CurrentSavPath,DAT_005a6148);
    }
  }
  Nop();
  NetSrv_Shutdown();
  Flight_FreeAssets();
  Flight_ServerGfxShutdown();
  Mem_FreeByTag(0xb000,0xbfff);
  Mem_FreeByTag(0xd000,0xe000);
  if ((g_FlightStateFlags & 2) == 0) {
    Mem_FreeByTag(0xc000,0xcfff);
    Input_FreeBindings();
  }
  DebugLog_Close();
  Mem_DumpAllPoolsToFile(s_srvrclos_txt_00549604);
  NW_Deregister();
  netcomm_Shutdown();
  Voice_LoadSettings();
  return;
}

