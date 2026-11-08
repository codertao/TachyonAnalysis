
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047c830(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_00563680 = 0;
  _DAT_005524d4 = 0x3f800000;
  _DAT_005524d8 = 0x3f800000;
  _DAT_00563650 = 0;
  _DAT_00563654 = 0;
  DAT_005714e4 = 0x3ca3d70a;
  FUN_004abcc0(0x1e,0xf,0xf,100);
  FUN_0047bbc0(0x3f800000);
  FUN_004455f0();
  DAT_00571720 = DAT_00571fd0;
  DAT_00571724 = DAT_00571fd4;
  DAT_005524e8 = 0xff;
  DAT_005524dc = 1;
  DAT_005524e4 = 1;
  DAT_00571880 = 0;
  DAT_00571920 = 0;
  DAT_00571360 = 0;
  DAT_00571500 = 0;
  FUN_0043e6a0(g_MapUiCtx,s_TxtMapLoc_0055284c,&DAT_00571880);
  FUN_0043e6a0(g_MapUiCtx,s_TxtMapCurLoc_0055283c,&DAT_00571920);
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_REGION_00548d14,&local_4);
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_CURRENT_SECTOR_00548d04,&local_8);
  iVar1 = FUN_0047a900(local_4,local_8);
  if (iVar1 != 0) {
    FUN_0047c2b0(iVar1);
    _DAT_00571320 = *(undefined4 *)(iVar1 + 0x80);
    _DAT_00571324 = *(undefined4 *)(iVar1 + 0x84);
    DAT_0057132c = *(undefined4 *)(iVar1 + 0x8c);
    DAT_00571328 = *(undefined4 *)(iVar1 + 0x88);
  }
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_REGION_00552710,&local_4);
  Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_OVERRIDE_SECTOR_00552700,&local_8);
  iVar2 = FUN_0047a900(local_4,local_8);
  if (iVar2 == 0) {
    Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_REGION_0053fc08,&local_4);
    Var_GetInt(g_GameVarStore,s_PLAYER_MAIN_VARS_00534198,s_DESTINATION_SECTOR_0053fbf4,&local_8);
    iVar2 = FUN_0047a900(local_4,local_8);
    if (iVar2 != 0) goto LAB_0047ca19;
  }
  else {
LAB_0047ca19:
    if (iVar2 != iVar1) {
      FUN_0047c0f0(iVar2,0);
      iVar1 = FUN_0047a6d0(DAT_0057132c,DAT_00571328,*(undefined4 *)(iVar2 + 0x8c),
                           *(undefined4 *)(iVar2 + 0x88));
      if (iVar1 != 0) {
        FUN_0047a3a0(&DAT_005713e0);
      }
      goto LAB_0047ca65;
    }
  }
  FUN_0047c0f0(0,0);
LAB_0047ca65:
  puVar3 = &DAT_00571d80;
  for (iVar1 = 0x90; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_0043e6a0(g_MapUiCtx,s_TxtMapFloating_005526e0,&DAT_00571b00);
  GLBL_ingame_rtxt = load_rtxt_bin(s_ingame_bin_0053595c,0xa105);
  DAT_0057128c = find_ui_elem_by_name(g_MapUiCtx,s_TxtMapFloating_005526e0);
  FUN_0047abe0();
  return;
}

