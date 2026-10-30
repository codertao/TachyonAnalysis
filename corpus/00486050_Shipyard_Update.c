
/* pump + 3D scene tick + Ui_Update + per-frame hook */

undefined4 Shipyard_Update(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    FUN_00485f20();
    FUN_00485c30();
    FUN_00485f30();
    Ui_Update(&DAT_00583420);
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

