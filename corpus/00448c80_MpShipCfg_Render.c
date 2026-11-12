
/* sweep */

void MpShipCfg_Render(void)

{
  if (DAT_00564ae4 != 0) {
    Ui_PresentFrame();
    Ui_RefreshWindow(&g_UiManager,s_WndMPShipDM_0054767c,0,0);
  }
  sbi_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  MpCfg_Draw();
  Gfx_Lock(1);
  MpCfg_DrawDragSave();
  ImageArea_Draw(&g_UiManager,DAT_00562c78,0,0,0);
  clr_label_flags_11c(&g_UiManager,s_TxtCFGDragQty_0054764c,0x10000);
  Ui_DrawLabelNow(&g_UiManager,s_TxtCFGDragQty_0054764c,0,0);
  if (DAT_00564ae4 != 0) {
    Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
  }
  Gfx_Flip();
  MpCfg_DrawDragRestore();
  return;
}

