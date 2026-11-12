
/* sweep */

void ShipBuy_Render(void)

{
  if (DAT_00564ae4 != 0) {
    Ui_PresentFrame();
  }
  ShipBuy_Draw();
  if (DAT_00564ae4 != 0) {
    Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
  }
  Gfx_Flip();
  return;
}

