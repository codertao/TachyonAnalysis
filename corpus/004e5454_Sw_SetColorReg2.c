
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (r, g, b) -> 0x502918 (no callers or readers found) */

void __cdecl Sw_SetColorReg2(int r,int g,int b)

{
  _DAT_00502918 = (r & 0xffU) << 0x10 | (g & 0xffU) << 8 | b & 0xffU;
  return;
}

