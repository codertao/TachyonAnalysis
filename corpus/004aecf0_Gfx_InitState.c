
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* refine: default scales/masks then Gfx_InitTables */

void Gfx_InitState(void)

{
  _DAT_005a6304 = 0x3c000000;
  DAT_005a632c._3_1_ = 0xf;
  _DAT_005a637c = 0xff;
  _DAT_005a63fc = 0xffff;
  _DAT_005a647c = 0xffffffff;
  Gfx_InitTables();
  return;
}

