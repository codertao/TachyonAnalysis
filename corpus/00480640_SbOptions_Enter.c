
/* sweep: WndStarBaseOptions */

void SbOptions_Enter(void)

{
  char *pcVar1;
  
  DAT_00571280 = &GLBL_UI_ELEM_LIST;
  if (g_MpModeFlag == 0) {
    DAT_00571280 = &g_UiManager;
  }
  Ui_PlaySoundEvent(DAT_00571280,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  g_TitleMenu_ExitFlag = 0;
  DAT_0056c480 = 0;
  Ui_DeactivateAllWindows(DAT_00571280);
  Ui_OpenWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0);
  Ui_ShowWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0);
  Options_StopVoiceTest();
  OptMenu_Build();
  Options_ResetOptAreas();
  MenuHotkey_SetEscape(SbOptions_RequestClose);
  Ui_SetButtonFlag(DAT_00571280,s_BtnOption0_005476d4,0x2004);
  Ui_SetButtonFlag(DAT_00571280,s_BtnOption1_00556c80,0x2004);
  Ui_SetButtonFlag(DAT_00571280,s_BtnOption2_00556c74,0x2004);
  Ui_SetButtonFlag(DAT_00571280,s_BtnOption3_00556c68,0x2004);
  Ui_SetButtonFlag(DAT_00571280,s_BtnOption4_00556c5c,0x2004);
  Ui_SetButtonFlag(DAT_00571280,s_BtnOption5_00556c50,0x2004);
  Ui_SetButtonFlag(DAT_00571280,s_BtnOption6_00556c44,0x2004);
  if (g_MpModeFlag == 0) {
    pcVar1 = s_BtnOption1_00556c80;
  }
  else {
    pcVar1 = s_BtnOption0_005476d4;
  }
  set_button_state(DAT_00571280,pcVar1,4);
  Options_InitSliders();
  DAT_00571184 = Starbase_FindLight(s_DefaultLight_0053ff6c);
  Rend_ResetScene();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(DAT_00571184 + 0x4c),
             *(undefined4 *)(DAT_00571184 + 0x50),*(undefined4 *)(DAT_00571184 + 0x54));
  Light_SetDirection(*(undefined4 *)(DAT_00571184 + 0x40),*(undefined4 *)(DAT_00571184 + 0x44),
                     *(undefined4 *)(DAT_00571184 + 0x48));
  Options_LoadShipPreview();
  Sw_EnableZBuffer(1);
  SbAudio_Play(s_Scomp03_wav_00556c04,0);
  return;
}

