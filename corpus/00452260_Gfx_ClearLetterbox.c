
/* sweep: guess */

void Gfx_ClearLetterbox(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  Gfx_ClearToFogColor();
  uVar2 = DAT_0060446c;
  uVar1 = DAT_00604464;
  DAT_0060446c = DAT_0060444c + -1;
  DAT_00604464 = 0;
  Gfx_HwSetClipRect(0,0,DAT_00604448,DAT_0060444c);
  Gfx_SetFogColor(0,0,0);
  DAT_005a62e8 = (uint)DAT_005a632a;
  DAT_005a62d8 = 0;
  DAT_005a62dc = 0;
  DAT_005a62e0 = DAT_005a67a8;
  DAT_005a62e4 = DAT_005a67c4;
  Gfx_FillViewport();
  DAT_005a62e4 = DAT_005a67ac - DAT_005a67cc;
  DAT_005a62dc = DAT_005a67cc;
  DAT_005a62e8 = (uint)DAT_005a632a;
  DAT_005a62d8 = 0;
  DAT_005a62e0 = DAT_005a67a8;
  Gfx_FillViewport();
  if (DAT_005b9084 != 0) {
    Gfx_SetFogColor(*(undefined4 *)(DAT_005b9084 + 0xe8),*(undefined4 *)(DAT_005b9084 + 0xec),
                    *(undefined4 *)(DAT_005b9084 + 0xf0));
  }
  DAT_00604464 = uVar1;
  DAT_0060446c = uVar2;
  Gfx_HwSetClipRect(0,uVar1,DAT_00604448 + -1,uVar2);
  return;
}

