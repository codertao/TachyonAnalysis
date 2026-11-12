
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* galaxy map mode enter (starbase map or in-game map_mnu): Map_LoadConfig, show WndStarBaseMap,
   exit hook */

void Map_Enter(void)

{
  int iVar1;
  
  g_TitleMenu_ExitFlag = 0;
  if (DAT_00571340 == 0) {
    g_MapUiCtx = &GLBL_UI_ELEM_LIST;
    g_GameVarStore = g_PlayerVarStore;
  }
  else {
    Starbase_InitCallbacks(&DAT_005719a0,s_cbMapExit_005524f0);
    _DAT_00571a14 = 1;
    _DAT_00571a10 = 1;
    iVar1 = Mnu_LoadFileKeepGfx(s_map_mnu_00552868,&DAT_005719a0);
    if (iVar1 == 0) {
      Map_OnBack();
      return;
    }
    g_MapUiCtx = (undefined4 *)&DAT_005719a0;
    g_GameVarStore = DAT_005a6148;
  }
  Cfg_ClearScratch();
  Map_LoadConfig();
  Map_InitState();
  if (DAT_00571340 == 0) {
    Ui_PlaySoundEvent(g_MapUiCtx,s_SNDEVNT_CHANGE_MENUS_0053ff54);
    Ui_DeactivateAllWindows(g_MapUiCtx);
  }
  Ui_DeactivateAllWindows(g_MapUiCtx);
  Ui_OpenWindow(g_MapUiCtx,s_WndStarBaseMap_00552858);
  Ui_ShowWindow(g_MapUiCtx,s_WndStarBaseMap_00552858,0);
  MenuHotkey_SetAccept(0);
  MenuHotkey_SetEscape(Map_OnBack);
  MenuHotkey_Set(0x73,Map_OnBack);
  TitleHover_Clear();
  Ui_SetCursor(g_MapUiCtx,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  if (DAT_00571340 == 0) {
    Starbase_PlayMusic(g_NextMode);
  }
  Ui_SetWindowHandler10c(g_MapUiCtx,s_WndStarBaseMap_00552858,Map_DrawView);
  return;
}

