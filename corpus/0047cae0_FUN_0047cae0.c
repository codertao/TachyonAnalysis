
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047cae0(void)

{
  int iVar1;
  
  g_TitleMenu_ExitFlag = 0;
  if (DAT_00571340 == 0) {
    g_MapUiCtx = &DAT_00583420;
    g_GameVarStore = g_PlayerVarStore;
  }
  else {
    FUN_0046ffd0(&DAT_005719a0,s_cbMapExit_005524f0);
    _DAT_00571a14 = 1;
    _DAT_00571a10 = 1;
    iVar1 = FUN_004396c0(s_map_mnu_00552868,&DAT_005719a0);
    if (iVar1 == 0) {
      FUN_0047e7a0();
      return;
    }
    g_MapUiCtx = (undefined4 *)&DAT_005719a0;
    g_GameVarStore = DAT_005a6148;
  }
  FUN_0046e980();
  FUN_0047ace0();
  FUN_0047c830();
  if (DAT_00571340 == 0) {
    FUN_00440460(g_MapUiCtx,s_SNDEVNT_CHANGE_MENUS_0053ff54);
    FUN_0043ab40(g_MapUiCtx);
  }
  FUN_0043ab40(g_MapUiCtx);
  FUN_0043a8d0(g_MapUiCtx,s_WndStarBaseMap_00552858);
  Ui_ShowWindow(g_MapUiCtx,s_WndStarBaseMap_00552858,0);
  FUN_00437b10(0);
  FUN_00437b30(FUN_0047e7a0);
  FUN_00437af0(0x73,FUN_0047e7a0);
  FUN_00445710();
  FUN_0043e8f0(g_MapUiCtx,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  if (DAT_00571340 == 0) {
    FUN_00468f50(g_NextMode);
  }
  FUN_0043a820(g_MapUiCtx,s_WndStarBaseMap_00552858,FUN_0047e490);
  return;
}

