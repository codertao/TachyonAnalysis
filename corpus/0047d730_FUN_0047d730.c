
undefined4 FUN_0047d730(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    FUN_0047d500();
    Ui_Update(g_MapUiCtx);
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

