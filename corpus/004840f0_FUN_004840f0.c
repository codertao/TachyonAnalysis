
undefined4 FUN_004840f0(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&DAT_00583420);
    FUN_00484040();
    FUN_0046eac0(0);
    FUN_0048bae0();
    FUN_00483000();
    FUN_00482cb0();
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

