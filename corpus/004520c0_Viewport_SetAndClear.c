
/* sweep: guess */

void Viewport_SetAndClear
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  Gfx_Lock(1);
  Viewport_SetScaled(param_1,param_2,param_3,param_4,1);
  Gfx_SetClipRect(&DAT_005a67a0);
  Gfx_UnlockSurface();
  return;
}

