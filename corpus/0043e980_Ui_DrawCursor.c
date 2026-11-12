
/* sweep */

void Ui_DrawCursor(undefined4 param_1)

{
  if ((DAT_005a5508 != 0) && (DAT_005a5504 == 1)) {
    if (DAT_005a4318 != (code *)0x0) {
      (*DAT_005a4318)();
    }
    Ui_WarpCursor(0x27f,0x1df);
    Gfx_Lock(1);
    if ((DAT_00564ae4 == 0) && (GLBL_some_str != 0)) {
      Blit_SetDst(DAT_005a5484,DAT_00604488,DAT_005a54d0);
      Blit_SetSrc(GLBL_some_str,DAT_00604488,param_1);
      Blit_CopyRect(0,0,DAT_005a54ec,DAT_005a54f0,DAT_005a54f4,DAT_005a54f8);
    }
    MnuImage_SetFrame(DAT_00562bec,DAT_005a54f4,DAT_005a54f8,DAT_005a54e4,DAT_005a54ec,DAT_005a54f0)
    ;
    Gfx_UnlockSurface();
    return;
  }
  return;
}

