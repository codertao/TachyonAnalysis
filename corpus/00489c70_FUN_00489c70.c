
undefined4 FUN_00489c70(void)

{
  int iVar1;
  
  if (((DAT_0056c480 != 0) && (DAT_00592e60 == 0)) && (DAT_005a4b4c == 0)) {
    thunk_FUN_00489e40();
  }
  MessagePump_IdleTick();
  if ((g_TitleMenu_ExitFlag != 0) && (DAT_00592e60 == 0)) {
    return 1;
  }
  Ui_Update(&GLBL_UI_ELEM_LIST);
  DAT_00592e60 = 0;
  iVar1 = FUN_0043b430(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan1_005596ec);
  if (iVar1 != 0) {
    DAT_00592e60 = 1;
  }
  iVar1 = FUN_0043b430(&GLBL_UI_ELEM_LIST,s_WndStarBaseWingMan2_005596d8);
  if (iVar1 == 0) {
    if ((DAT_00592e60 == 0) && (DAT_0056c484 != 0)) {
      DAT_0056c484 = 0;
    }
  }
  else {
    DAT_00592e60 = 1;
  }
  FUN_0048bae0();
  FUN_0048a2b0();
  FUN_00489700();
  if (DAT_00589758 != (code *)0x0) {
    (*DAT_00589758)();
  }
  return 0;
}

