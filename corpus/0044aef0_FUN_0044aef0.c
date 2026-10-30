
undefined4 FUN_0044aef0(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    if (DAT_00592e64 != 0) {
      FUN_0044adf0();
    }
    return 0;
  }
  return 1;
}

