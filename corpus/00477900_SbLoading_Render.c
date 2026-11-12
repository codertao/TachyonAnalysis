
/* sweep */

void SbLoading_Render(void)

{
  if (DAT_00564ae4 != 0) {
    Ui_PresentFrame();
  }
  SbLoading_Draw();
  Gfx_UnlockSurface();
  Gfx_Flip();
  return;
}

