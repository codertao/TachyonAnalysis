
/* refine: Gfx_DrawImage with colour arg */

void Gfx_DrawImageTinted(uint param_1)

{
  if (DAT_00604494 == 0) {
    Gfx_DrawImageSw();
    return;
  }
  Gfx_DrawImageHwTinted((param_1 & 0xff00) << 0x10);
  return;
}

