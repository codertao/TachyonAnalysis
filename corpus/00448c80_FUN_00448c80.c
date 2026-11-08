
void FUN_00448c80(void)

{
  if (DAT_00564ae4 != 0) {
    FUN_004455f0();
    Ui_RefreshWindow(&g_UiManager,s_WndMPShipDM_0054767c,0,0);
  }
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_00448c40();
  FUN_00452180(1);
  FUN_004475e0();
  FUN_0043f190(&g_UiManager,DAT_00562c78,0,0,0);
  clr_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  FUN_0043e120(&g_UiManager,s_TxtCFGDragQty_0054764c,0,0);
  if (DAT_00564ae4 != 0) {
    FUN_0043e980(DAT_006022e0,DAT_006022e4);
  }
  FUN_004521c0();
  FUN_004476d0();
  return;
}

