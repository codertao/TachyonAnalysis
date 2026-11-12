
/* sweep */

void Gfx_BeginFrame(void)

{
  Gfx_Lock(1);
  if ((DAT_00564ae4 == 0) && (DAT_005a6820 != 0)) {
    Sw_ClearZBuffer();
  }
  if (0 < DAT_005a67c4) {
    Gfx_ClearIfHw();
    return;
  }
  Gfx_ClearToFogColor();
  return;
}

