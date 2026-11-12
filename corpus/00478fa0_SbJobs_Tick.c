
/* sweep */

undefined4 SbJobs_Tick(void)

{
  int iVar1;
  
  if (((DAT_0056c480 != 0) && (DAT_00592e60 == 0)) && (DAT_005a4b4c == 0)) {
    SbJobs_ZoomOut();
  }
  MessagePump_IdleTick();
  if ((g_TitleMenu_ExitFlag != 0) && (DAT_00592e60 == 0)) {
    return 1;
  }
  Ui_Update(&GLBL_UI_ELEM_LIST);
  DAT_00592e60 = 0;
  iVar1 = Ui_StepWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258);
  if (iVar1 != 0) {
    DAT_00592e60 = 1;
  }
  iVar1 = Ui_StepWindowSlide(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240);
  if (iVar1 != 0) {
    DAT_00592e60 = 1;
  }
  Teletype_UpdateAll();
  if ((DAT_00592e60 == 0) && (DAT_0056c480 == 0)) {
    SbJobs_SelectHotspot();
  }
  if (DAT_00589758 != (code *)0x0) {
    (*DAT_00589758)();
  }
  return 0;
}

