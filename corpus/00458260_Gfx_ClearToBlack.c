
/* sweep */

void Gfx_ClearToBlack(void)

{
  Fog_SetDepthRange(0,0,0);
  Gfx_SetFogColor(0,0,0);
  Gfx_SetClearColor(0,0,0);
  return;
}

