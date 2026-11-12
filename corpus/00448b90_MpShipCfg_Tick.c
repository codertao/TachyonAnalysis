
/* mode tick: UI update, hover, MpShipCfg_HandleMouse */

undefined4 MpShipCfg_Tick(void)

{
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    Teletype_UpdateAll();
    MpCfg_CloseBuySellIfIdle();
    MpCfg_UpdateDragIcon(DAT_00603e40,DAT_00603e44);
    MpShipCfg_HandleMouse(DAT_00603e40,DAT_00603e44,DAT_00603e48);
    MountLine_Animate(5);
    CfgStat_Animate();
    ShipStat_Animate(&DAT_00546c38);
    if (DAT_00589758 != (code *)0x0) {
      (*DAT_00589758)();
    }
    return 0;
  }
  return 1;
}

