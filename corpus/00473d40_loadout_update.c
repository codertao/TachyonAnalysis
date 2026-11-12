
undefined4 loadout_update(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_00563614 != 0) {
      initialize_loadout_ui();
    }
    Ui_Update(&GLBL_UI_ELEM_LIST);
    Teletype_UpdateAll();
    Loadout_CloseBuySellIfIdle();
    Loadout_UpdateTooltip(s_SHADOW10b_00550034);
    Loadout_UpdateDragCursor(DAT_00603e40,DAT_00603e44);
    Loadout_HandleMouse(DAT_00603e40,DAT_00603e44,DAT_00603e48);
    MountLine_Animate(5);
    LoadoutStat_Animate();
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

