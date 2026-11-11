
/* (r, g, b) -> 0x502914 (0x00RRGGBB), read by the MMX span code; reached from Gfx_SetClearColor
   (BDF fog RGB) */

void __cdecl Sw_SetFogColor(int r,int g,int b)

{
  DAT_00502914 = (r & 0xffU) << 0x10 | (g & 0xffU) << 8 | b & 0xffU;
  return;
}

