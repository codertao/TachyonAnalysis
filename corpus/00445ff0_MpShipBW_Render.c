
/* sweep */

void MpShipBW_Render(void)

{
  if (DAT_00564ae4 != 0) {
    Ui_PresentFrame();
    Ui_RefreshWindow(&g_UiManager,s_WndMPShipBW_00545c14,0,0);
  }
  Ui_DrawAllMain();
  if (DAT_00564ae4 != 0) {
    Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
  }
  Gfx_Flip();
  return;
}

