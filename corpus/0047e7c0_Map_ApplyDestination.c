
/* sweep */

void Map_ApplyDestination(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_8;
  undefined4 local_4;
  
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_REGION_0053fc08,&local_4);
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_SECTOR_0053fbf4,&local_8);
  Var_SetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_REGION_00552710,0xffffffff);
  Var_SetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_SECTOR_00552700,0xffffffff);
  iVar1 = Map_FindRegionById(local_4,local_8);
  if (iVar1 != 0) {
    iVar2 = Map_FindRoute(DAT_0057132c,DAT_00571328,*(undefined4 *)(iVar1 + 0x8c),
                          *(undefined4 *)(iVar1 + 0x88));
    if (iVar2 != 0) {
      Map_AddConnectionLine(&DAT_005713e0);
      Map_SetDestinationText(iVar1,0);
      goto LAB_0047e894;
    }
  }
  Cfg_ClearScratch();
  Map_SetDestinationText(0,0);
LAB_0047e894:
  if (DAT_00571340 != 0) {
    Nav_SetOverrideQuadrant(local_4,local_8,g_SrvCurShip->quadrant);
    if (GLBL_spacesav[0x33] == 1) {
      GLBL_spacesav[0x33] = 2;
    }
  }
  return;
}

