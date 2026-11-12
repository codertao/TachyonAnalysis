
/* sweep */

void WndLogin_Render(void)

{
  if (g_TitleMenu_ExitFlag == 0) {
    Ui_PresentFrame();
    WndLogin_Draw();
    if (DAT_00564ae4 != 0) {
      Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
    }
    Gfx_Flip();
    return;
  }
  return;
}

