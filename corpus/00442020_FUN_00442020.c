
undefined4 FUN_00442020(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    return 0;
  }
  return 1;
}

