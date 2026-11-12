
/* sweep: WndStarBaseWingMan */

void SbWing_Enter(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_00589724;
  g_TitleMenu_ExitFlag = 0;
  DAT_00592e60 = 0;
  DAT_0056c480 = 0;
  DAT_0056c484 = 1;
  Ui_PlaySoundEvent(&GLBL_UI_ELEM_LIST,s_SNDEVNT_CHANGE_MENUS_0053ff54);
  Ui_DeactivateAllWindows(&GLBL_UI_ELEM_LIST);
  SbWing_LoadImages();
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan_00559700,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan_00559700);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,0);
  Ui_OpenWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8);
  Ui_SetWindowPos(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec,0x22,0xfffffef7);
  Ui_StartWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec,
                      s_WndStarBaseWingMan_00559700,0x22,0,0x19,0);
  Ui_SetWindowPos(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,0x280,0x118);
  Ui_StartWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,
                      s_WndStarBaseWingMan_00559700,0x22,0x118,0x19,0);
  MenuHotkey_SetEscape(SbWing_SlidePanels);
  MenuHotkey_SetAccept(SbWing_SlidePanels);
  TitleHover_Clear();
  Ui_SetCursor(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  Ui_ShowCursor();
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,1);
  Ui_ClearButtonFlags(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,0x80000);
  Wingman_RefreshList();
  DAT_0056c488 = Wingman_GetCurrent();
  SbWing_ShowDetails();
  SbWing_RefreshSlots();
  Sw_EnableZBuffer(1);
  SbWing_InitStatBars();
  SbWing_SetStatLabels(0);
  if (DAT_0056c488 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  SbWing_SelectWingman(uVar3);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,8);
  DAT_00563e30 = 0;
  DAT_00563e2c = 0;
  if (DAT_00589720 != 0) {
    piVar1 = (int *)(iVar2 + 0x10);
    iVar2 = DAT_00589720;
    do {
      if ((piVar1 != (int *)0x10) && (*piVar1 != 0)) {
        DAT_00563e2c = DAT_00563e2c + 1;
      }
      piVar1 = piVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  SbWing_InitSliders();
  Starbase_PlayMusic(g_NextMode);
  return;
}

