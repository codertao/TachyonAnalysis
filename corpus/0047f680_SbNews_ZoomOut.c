
/* sweep */

void SbNews_ZoomOut(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = MnuImage_Find(&GLBL_UI_ELEM_LIST,s_ImageNewsBg_0054e998);
  piVar2 = (int *)Starbase_FindFont(s_NEWS_ZOOM_DST_0054e9a4);
  Light_ApplyDefault();
  SbAudio_StopAll();
  if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
    Ui_DeactivateWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseNews_00552c88);
    Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768,0);
    Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBase_0054e768);
    MnuImage_LoadPcx(&GLBL_UI_ELEM_LIST,iVar1,0);
    ScreenZoom_Start(&GLBL_UI_ELEM_LIST,iVar1,s_WndStarBase_0054e768,*piVar2,piVar2[1],0,0,
                     piVar2[2] - *piVar2,piVar2[3] - piVar2[1],0x280,0x1e0,0,0x1a,SbNews_GoHub,
                     SbLobby_Draw);
    return;
  }
  SbNews_GoHub();
  return;
}

