
undefined4 FUN_00478fa0(void)

{
  int iVar1;
  
  if (((DAT_0056c480 != 0) && (DAT_00592e60 == 0)) && (DAT_005a4b4c == 0)) {
    FUN_00479160();
  }
  MessagePump_IdleTick();
  if ((g_TitleMenu_ExitFlag != 0) && (DAT_00592e60 == 0)) {
    return 1;
  }
  Ui_Update(&GLBL_UI_ELEM_LIST);
  DAT_00592e60 = 0;
  iVar1 = FUN_0043b430(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel1_00552258);
  if (iVar1 != 0) {
    DAT_00592e60 = 1;
  }
  iVar1 = FUN_0043b430(&GLBL_UI_ELEM_LIST,s_WndStarBaseJobsPanel3_00552240);
  if (iVar1 != 0) {
    DAT_00592e60 = 1;
  }
  FUN_0048bae0();
  if ((DAT_00592e60 == 0) && (DAT_0056c480 == 0)) {
    FUN_00478720();
  }
  if (DAT_00589758 != (code *)0x0) {
    (*DAT_00589758)();
  }
  return 0;
}

