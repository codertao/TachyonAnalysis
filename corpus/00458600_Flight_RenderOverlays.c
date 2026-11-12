
/* sweep: guess */

void Flight_RenderOverlays(void)

{
  Frustum_SetPlanes(&DAT_006b0858,4,0);
  Camera_BuildRotation();
  Rend_SetCamera(&DAT_005b9600,&DAT_005b95e8);
  Rend_SetAnimClock(DAT_005b3304);
  (*DAT_005a652c)();
  Debug_DrawOverlays();
  if (DAT_005b3a34 != 0) {
    Hud_DrawConnectionLost();
  }
  Gfx_UnlockSurface();
  Gfx_Flip();
  DAT_005a6520 = DAT_005a6520 + 1;
  return;
}

