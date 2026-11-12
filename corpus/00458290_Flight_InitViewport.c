
/* sweep */

void Flight_InitViewport(void)

{
  Camera_Reset();
  Starfield_InitDefault();
  Viewport_SetScaled(0,0,0x27f,0x1df,1);
  Gfx_SetClipRect(&DAT_005a67a0);
  DAT_00666b00 = 0;
  Rend_SetFlushPerEntity(0);
  Rend_SetForceClip(0);
  return;
}

