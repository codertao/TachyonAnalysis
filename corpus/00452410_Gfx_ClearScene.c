
/* sweep */

void Gfx_ClearScene(void)

{
  Sw_ClearZBuffer();
  Gfx_FillRows(0,DAT_00604464,*(undefined4 *)(&DAT_005a6440 + (uint)DAT_005a632a * 4));
  Gfx_FillRows(DAT_0060446c,DAT_0060444c - DAT_0060446c,
               *(undefined4 *)(&DAT_005a6440 + (uint)DAT_005a632a * 4));
  return;
}

