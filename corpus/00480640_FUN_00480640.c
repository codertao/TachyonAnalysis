
void FUN_00480640(void)

{
  char *pcVar1;
  
  DAT_00571280 = &GLBL_UI_ELEM_LIST;
  if (g_MpModeFlag == 0) {
    DAT_00571280 = &g_UiManager;
  }
  Ui_PlaySoundEvent(DAT_00571280,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  g_TitleMenu_ExitFlag = 0;
  DAT_0056c480 = 0;
  FUN_0043ab40(DAT_00571280);
  FUN_0043a8d0(DAT_00571280,s_WndStarBaseOptions_00556bf0);
  Ui_ShowWindow(DAT_00571280,s_WndStarBaseOptions_00556bf0,0);
  FUN_00481530();
  FUN_004804d0();
  FUN_00480600();
  FUN_00437b30(FUN_00480ae0);
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
  FUN_00482170();
  DAT_00571184 = FUN_00469a70(s_DefaultLight_0053ff6c);
  FUN_004af2e0();
  Pak_SetLoadPalParams
            (g_PalBrightness,0x80,*(undefined4 *)(DAT_00571184 + 0x4c),
             *(undefined4 *)(DAT_00571184 + 0x50),*(undefined4 *)(DAT_00571184 + 0x54));
  FUN_00468e40(*(undefined4 *)(DAT_00571184 + 0x40),*(undefined4 *)(DAT_00571184 + 0x44),
               *(undefined4 *)(DAT_00571184 + 0x48));
  FUN_004822b0();
  Sw_EnableZBuffer(1);
  FUN_0046d8d0(s_Scomp03_wav_00556c04,0);
  return;
}

