
/* sweep */

undefined4 SbWing_Tick(void)

{
  int iVar1;
  
  if (((DAT_0056c480 != 0) && (DAT_00592e60 == 0)) && (DAT_005a4b4c == 0)) {
    SbWing_GoJobs();
  }
  MessagePump_IdleTick();
  if ((g_TitleMenu_ExitFlag != 0) && (DAT_00592e60 == 0)) {
    return 1;
  }
  Ui_Update(&GLBL_UI_ELEM_LIST);
  DAT_00592e60 = 0;
  iVar1 = Ui_StepWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec);
  if (iVar1 != 0) {
    DAT_00592e60 = 1;
  }
  iVar1 = Ui_StepWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8);
  if (iVar1 == 0) {
    if ((DAT_00592e60 == 0) && (DAT_0056c484 != 0)) {
      DAT_0056c484 = 0;
    }
  }
  else {
    DAT_00592e60 = 1;
  }
  Teletype_UpdateAll();
  SbWing_SelectHotspot();
  WingStat_Animate();
  if (DAT_00589758 != (code *)0x0) {
    (*DAT_00589758)();
  }
  return 0;
}

