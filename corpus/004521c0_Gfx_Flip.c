
/* sweep: guess */

void Gfx_Flip(void)

{
  Gfx_UnlockSurface();
  Gfx_DrawLine(DAT_005a67c0,DAT_005a67c4,DAT_005a67c8,DAT_005a67c4,DAT_005a632a);
  Gfx_DrawLine(DAT_005a67c8,DAT_005a67c4,DAT_005a67c8,DAT_005a67cc,DAT_005a632a);
  Gfx_DrawLine(DAT_005a67c8,DAT_005a67cc,DAT_005a67c0,DAT_005a67cc,DAT_005a632a);
  Gfx_DrawLine(DAT_005a67c0,DAT_005a67cc,DAT_005a67c0,DAT_005a67c4,DAT_005a632a);
  Gfx_Present();
  Pipe_EndFrameStats();
  return;
}

