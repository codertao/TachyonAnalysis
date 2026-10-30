
undefined4 FUN_00444270(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    if (DAT_005a3960 != 0) {
      FUN_00444020();
    }
    if (DAT_005a3964 != (code *)0x0) {
      (*DAT_005a3964)();
    }
    return 0;
  }
  return 1;
}

