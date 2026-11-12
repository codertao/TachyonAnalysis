
/* sweep: WndStarBaseNews */

void SbNews_Enter(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  iVar3 = DAT_00589738;
  g_TitleMenu_ExitFlag = 0;
  DAT_005636b4 = 0;
  News_CountVisible();
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  News_LoadImages();
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseNews_00552c88,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseNews_00552c88);
  MenuHotkey_SetEscape(SbNews_ZoomOut);
  MenuHotkey_SetAccept(SbNews_ZoomOut);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  Starbase_PlayMusic(g_NextMode);
  SbNews_SelectItem(0xffffffff);
  SbNews_RefreshList();
  News_BuildTicker();
  DAT_005636b8 = 0;
  if (DAT_00589734 != 0) {
    piVar2 = (int *)(iVar3 + 0xfc);
    iVar3 = DAT_00589734;
    do {
      if (*piVar2 != 0) {
        DAT_005636b8 = DAT_005636b8 + 1;
      }
      piVar2 = piVar2 + 0x40;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnNewsFwd_00552ce8,8);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnNewsBck_00552cdc,8);
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(undefined4 *)(iVar1 + 0x48));
  Sw_EnableZBuffer(1);
  SbNews_InitSliders();
  return;
}

