
undefined4 FUN_00488c40(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&GLBL_UI_ELEM_LIST);
    FUN_0048bae0();
    FUN_00488aa0();
    DAT_005711d4 = DAT_005711d4 + -0x10000;
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

