
void TitleMenu_Render(void)

{
  Ui_PresentFrame();
  TitleMenu_Draw();
  if (DAT_00564ae4 != 0) {
    Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
  }
  Gfx_Flip();
  return;
}

