
undefined4 FUN_0047f4f0(void)

{
  int iVar1;
  
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&GLBL_UI_ELEM_LIST);
    FUN_0048bae0();
    FUN_0047ec60();
    FUN_0048d400();
    FUN_0047eb20();
    FUN_0047f790();
    iVar1 = FUN_0046d900();
    if (iVar1 == 0) {
      FUN_00468fb0(0,0);
    }
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

