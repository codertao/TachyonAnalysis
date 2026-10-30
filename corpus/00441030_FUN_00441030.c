
undefined4 FUN_00441030(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    FUN_00441ac0(&g_UiManager);
    return 0;
  }
  return 1;
}

