
/* refine: draw current image record (DAT_005a64c8) as a screen quad at rect 0x5a62d8..; sw or hw
   path (23 UI callers) */

void Gfx_DrawImage(void)

{
  if (DAT_00604494 == 0) {
    Gfx_DrawImageSw();
    return;
  }
  Gfx_DrawImageHw();
  return;
}

