
void FUN_00489a40(void)

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
  FUN_0043ab40(&GLBL_UI_ELEM_LIST);
  FUN_004899e0();
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan_00559700,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan_00559700);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec);
  Ui_ShowWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,0);
  FUN_0043a8d0(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8);
  FUN_0043b370(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec,0x22,0xfffffef7);
  FUN_0043b3a0(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec,s_WndStarBaseWingMan_00559700,0x22,
               0,0x19,0);
  FUN_0043b370(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,0x280,0x118);
  FUN_0043b3a0(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8,s_WndStarBaseWingMan_00559700,0x22,
               0x118,0x19,0);
  FUN_00437b30(FUN_00489e70);
  FUN_00437b10(FUN_00489e70);
  FUN_00445710();
  FUN_0043e8f0(&GLBL_UI_ELEM_LIST,s_Cursor1_0053ff4c);
  FUN_0043efa0();
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,8);
  Ui_SetButtonFlag(&GLBL_UI_ELEM_LIST,s_BtnWingFire_005596cc,0x80000);
  set_button_state(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,1);
  FUN_0043c150(&GLBL_UI_ELEM_LIST,s_BtnWingHire_005596c0,0x80000);
  FUN_004691e0();
  DAT_0056c488 = FUN_00469330();
  FUN_0048a620();
  FUN_0048a0c0();
  FUN_004e4b65(1);
  FUN_00489750();
  FUN_00489440(0);
  if (DAT_0056c488 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = 0;
  }
  FUN_0048a500(uVar3);
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
  FUN_0048a790();
  FUN_00468f50(g_NextMode);
  return;
}

