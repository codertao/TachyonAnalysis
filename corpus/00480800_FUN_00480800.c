
undefined4 FUN_00480800(void)

{
  if ((DAT_0056c480 != 0) && (DAT_005a4b4c == 0)) {
    FUN_004809f0();
  }
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_00563d6c != 0) {
      FUN_004819a0();
    }
    Ui_Update(DAT_00571280);
    FUN_00481670();
    FUN_00480220();
    DAT_005711d4 = DAT_005711d4 + -0x10000;
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

