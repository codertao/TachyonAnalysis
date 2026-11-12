
/* sweep: WndStarBaseStats */

void SbStats_Enter(void)

{
  int iVar1;
  
  iVar1 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  g_TitleMenu_ExitFlag = 0;
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseStats_0055883c);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseStats_0055883c,0);
  MenuHotkey_SetEscape(SbStats_ZoomOut);
  MenuHotkey_SetAccept(SbStats_HideLabels);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  Starbase_PlayMusic(g_NextMode);
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(iVar1 + 0x4c),*(undefined4 *)(iVar1 + 0x50),
             *(undefined4 *)(iVar1 + 0x54));
  Light_SetDirection(*(undefined4 *)(iVar1 + 0x40),*(undefined4 *)(iVar1 + 0x44),
                     *(undefined4 *)(iVar1 + 0x48));
  SbStats_LoadShipModel();
  Sw_EnableZBuffer(1);
  if (DAT_00590e24 != &g_Mode_StarbaseHub) {
    SbStats_HideLabels();
    return;
  }
  SbStats_ShowLabels();
  return;
}

