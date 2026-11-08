
/* rules shutdown, VarStore_Save .sav (SP only), free pools, netcomm_Shutdown */

void Flight_ServerShutdown(void)

{
  int iVar1;
  
  FUN_0049cb20(s_preclose_txt_00549614);
  FUN_00445720();
  Rules_Shutdown();
  if ((g_CurrentSavPath != '\0') && (DAT_005b7e38 == 0)) {
    iVar1 = FUN_00434450();
    if ((iVar1 == 1) && ((g_FlightStateFlags & 4) != 0)) {
      VarStore_Save(&g_CurrentSavPath,DAT_005a6148);
    }
  }
  FUN_00445720();
  FUN_004b8860();
  FUN_00431c00();
  FUN_00462890();
  FUN_0049c690(0xb000,0xbfff);
  FUN_0049c690(0xd000,0xe000);
  if ((g_FlightStateFlags & 2) == 0) {
    FUN_0049c690(0xc000,0xcfff);
    FUN_004300d0();
  }
  FUN_00432980();
  FUN_0049cca0(s_srvrclos_txt_00549604);
  FUN_00442930();
  netcomm_Shutdown();
  FUN_00490180();
  return;
}

