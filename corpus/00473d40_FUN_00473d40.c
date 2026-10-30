
undefined4 FUN_00473d40(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_00563614 != 0) {
      FUN_00475100();
    }
    Ui_Update(&DAT_00583420);
    FUN_0048bae0();
    FUN_00473cf0();
    FUN_00476ec0(s_SHADOW10b_00550034);
    FUN_00472140(DAT_00603e40,DAT_00603e44);
    FUN_00472260(DAT_00603e40,DAT_00603e44,DAT_00603e48);
    FUN_0046eac0(5);
    FUN_00471890();
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

