
/* sweep */

void SbLobby_ZoomNews(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = MnuImage_Find(&GLBL_UI_ELEM_LIST,s_ImageNewsBg_0054e998);
  piVar2 = (int *)Starbase_FindFont(s_NEWS_ZOOM_DST_0054e9a4);
  if (DAT_005a4b4c == 0) {
    if ((piVar2 != (int *)0x0) && (iVar1 != 0)) {
      MnuImage_LoadPcx(&GLBL_UI_ELEM_LIST,iVar1,0);
      ScreenZoom_Start(&GLBL_UI_ELEM_LIST,iVar1,s_WndStarBase_0054e768,0,0,*piVar2,piVar2[1],0x280,
                       0x1e0,piVar2[2] - *piVar2,piVar2[3] - piVar2[1],0,0x11,SbLobby_GoNews,0);
      return;
    }
    SbLobby_GoNews();
  }
  return;
}

