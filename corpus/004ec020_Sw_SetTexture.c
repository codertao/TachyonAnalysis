
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* (tex, arg) tex +0 pixels, +8 log2 width, +9 log2 height */

void __cdecl Sw_SetTexture(void *tex,int arg)

{
  _DAT_004ec070 = tex;
  _DAT_004ec074 = arg;
  DAT_004e4adc = (uint)*(byte *)((int)tex + 8);
  DAT_004e4ae0 = (uint)*(byte *)((int)tex + 9);
  DAT_004ec08c = *(undefined4 *)tex;
  return;
}

