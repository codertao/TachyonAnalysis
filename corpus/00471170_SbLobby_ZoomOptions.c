
/* sweep: OPT_ZOOM_DST */

void SbLobby_ZoomOptions(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)Starbase_FindFont(s_OPT_ZOOM_DST_0054e918);
  if (DAT_005a4b4c == 0) {
    if (piVar1 != (int *)0x0) {
      iVar2 = MnuImage_Find(&GLBL_UI_ELEM_LIST,s_ImageOptionBg_0054e908);
      if (iVar2 != 0) {
        MnuImage_LoadPcx(&GLBL_UI_ELEM_LIST,iVar2,0);
        ScreenZoom_Start(&GLBL_UI_ELEM_LIST,iVar2,s_WndStarBase_0054e768,0,0,*piVar1,piVar1[1],0x280
                         ,0x1e0,piVar1[2] - *piVar1,piVar1[3] - piVar1[1],0,0x11,SbLobby_GoOptions,0
                        );
        return;
      }
    }
    SbLobby_GoOptions();
  }
  return;
}

