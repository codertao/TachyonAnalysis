
/* mode tick: UI update, hover, MpShipCfg_HandleMouse */

undefined4 MpShipCfg_Tick(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    FUN_0048bae0();
    FUN_00448b40();
    FUN_004478d0(DAT_00603e40,DAT_00603e44);
    MpShipCfg_HandleMouse(DAT_00603e40,DAT_00603e44,DAT_00603e48);
    FUN_0046eac0(5);
    FUN_00447020();
    FUN_00446a60(&DAT_00546c38);
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

