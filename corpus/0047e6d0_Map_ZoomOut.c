
/* sweep */

void Map_ZoomOut(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = MnuImage_Find(g_MapUiCtx,s_ImageMapBg_0054e97c);
  piVar2 = (int *)Starbase_FindFont(s_MAP_ZOOM_DST_0054e988);
  if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
    Ui_DeactivateWindow(g_MapUiCtx,s_WndStarBaseMap_00552858);
    Ui_ShowWindow(g_MapUiCtx,s_WndStarBase_0054e768,0);
    Ui_OpenWindow(g_MapUiCtx,s_WndStarBase_0054e768);
    MnuImage_LoadPcx(g_MapUiCtx,iVar1,0);
    ScreenZoom_Start(g_MapUiCtx,iVar1,s_WndStarBase_0054e768,*piVar2,piVar2[1],0,0,
                     piVar2[2] - *piVar2,piVar2[3] - piVar2[1],0x280,0x1e0,0,0x1a,Map_GoHub,
                     SbLobby_Draw);
    return;
  }
  Map_GoHub();
  return;
}

