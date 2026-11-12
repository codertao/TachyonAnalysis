
/* sweep */

undefined4 MpShipBW_Tick(void)

{
  int iVar1;
  
  MessagePump_IdleTick();
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_Update(&g_UiManager);
    ShipStat_Animate(&DAT_005444d0);
    ShipStat_Animate(&DAT_00545040);
    DAT_005a3454 = DAT_005a3454 + -0x10000;
    iVar1 = DAT_005a3484 - DAT_005a36ec;
    DAT_005a34b4 = DAT_005a34b4 + -0x10000;
    if (DAT_005a3484 < DAT_005a36ec) {
      DAT_005a3484 = DAT_005a3484 + 0x800;
      iVar1 = DAT_005a3484 - DAT_005a36ec;
    }
    if (DAT_005a3484 != DAT_005a36ec && SBORROW4(DAT_005a3484,DAT_005a36ec) == iVar1 < 0) {
      DAT_005a3484 = DAT_005a36ec;
    }
    iVar1 = DAT_005a3424 - DAT_005a36e8;
    if (DAT_005a3424 < DAT_005a36e8) {
      DAT_005a3424 = DAT_005a3424 + 0x800;
      iVar1 = DAT_005a3424 - DAT_005a36e8;
    }
    if (DAT_005a3424 != DAT_005a36e8 && SBORROW4(DAT_005a3424,DAT_005a36e8) == iVar1 < 0) {
      DAT_005a3424 = DAT_005a36e8;
    }
    return 0;
  }
  return 1;
}

