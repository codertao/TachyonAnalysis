
/* sweep */

undefined4 Credits_Tick(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    Credits_UpdateBlocks(&g_UiManager);
    return 0;
  }
  return 1;
}

