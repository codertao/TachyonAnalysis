
/* sweep */

void Shipyard_Render(void)

{
  if (g_TitleMenu_ExitFlag != 0) {
    return;
  }
  if ((DAT_00564ae4 != 0) || (DAT_005635dc != 0)) {
    Ui_PresentFrame();
    if (DAT_00564ae4 != 0) goto LAB_004861ae;
  }
  Sw_ClearZBuffer();
LAB_004861ae:
  Shipyard_Draw();
  if (DAT_00564ae4 != 0) {
    Ui_DrawCursor(DAT_006022e0,DAT_006022e4);
  }
  Gfx_Flip();
  return;
}

