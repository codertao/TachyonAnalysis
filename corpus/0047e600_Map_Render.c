
/* sweep */

void Map_Render(void)

{
  if (DAT_00564ae4 != 0) {
    Ui_PresentFrame();
  }
  Map_Draw();
  if (DAT_00564ae4 != 0) {
    Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
  }
  if (DAT_00571340 == 0) {
    Gfx_Flip();
  }
  Ui_RefreshWindow(g_MapUiCtx,s_WndStarBaseMap_00552858,0,0);
  return;
}

