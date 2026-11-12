
/* sweep */

void ObjDisplay_Init(void)

{
  clr_bytes(&DAT_0058f420,0x70);
  DAT_0058f420 = load_font(s_shdw_08b_pcx_005366e0,0x20000);
  DAT_0058f424 = 10;
  DAT_0058f428 = 200;
  DAT_0058f42c = 0xffa200;
  DAT_0058f43c = 0xc;
  return;
}

