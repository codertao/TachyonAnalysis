
undefined4 FUN_004781e0(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&DAT_00583420);
    FUN_0048bae0();
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

