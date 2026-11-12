
/* sweep */

void SbLobby_Render(void)

{
  if (g_TitleMenu_ExitFlag == 0) {
    if (DAT_00564ae4 != 0) {
      Ui_PresentFrame();
    }
    SbLobby_Draw();
    if (DAT_005635dc == 0) {
      if (DAT_005a4b4c == 0) {
        Teletype_DrawAll();
      }
      else {
        ScreenZoom_DrawAll();
      }
    }
    if (DAT_00564ae4 != 0) {
      Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
    }
    Gfx_Flip();
    return;
  }
  return;
}

