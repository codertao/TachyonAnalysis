
/* sweep */

void Video_SetupViewport(int param_1,int param_2)

{
  Proj_SetupMain(param_1,param_2,DAT_005a6824);
  Viewport_SetScaled(0,0,param_1 + -1,param_2 + -1,1);
  Gfx_SetClipRect(&DAT_005a67a0);
  return;
}

