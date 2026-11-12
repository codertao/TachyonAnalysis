
/* sweep */

void SbOptions_ZoomOut(void)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = MnuImage_Find(DAT_00571280,s_ImageOptionBg_0054e908);
  piVar2 = (int *)Starbase_FindFont(s_OPT_ZOOM_DST_0054e918);
  if (DAT_00563d64 != 0) {
    PlayerCfg_Save();
  }
  SbAudio_StopAll();
  Light_ApplyDefault();
  if (((g_MpModeFlag != 0) && (piVar2 != (int *)0x0)) && (iVar1 != 0)) {
    Ui_DeactivateWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0);
    Options_HidePages();
    Ui_ShowWindow(DAT_00571280,s_WndStarBase_0054e768,0);
    Ui_OpenWindow(DAT_00571280,s_WndStarBase_0054e768);
    MnuImage_LoadPcx(DAT_00571280,iVar1,0);
    ScreenZoom_Start(DAT_00571280,iVar1,s_WndStarBase_0054e768,*piVar2,piVar2[1],0,0,
                     piVar2[2] - *piVar2,piVar2[3] - piVar2[1],0x280,0x1e0,0,0x1a,SbOptions_GoBack,
                     SbLobby_Draw);
    return;
  }
  SbOptions_GoBack();
  return;
}

