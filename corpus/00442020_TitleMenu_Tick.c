
/* sweep: shared tick */

undefined4 TitleMenu_Tick(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    return 0;
  }
  return 1;
}

