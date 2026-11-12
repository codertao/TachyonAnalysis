
/* sweep */

void Loadout_Init(void)

{
  clr_bytes(&DAT_005a68c0,0xb2c);
  DAT_005a68c0 = (int *)load_font(s_shdw_08b_pcx_005366e0,0x20000);
  DAT_005a68c4 = load_box_file(s_borders_box_0053365c,0xcccc);
  DAT_005a68d0 = *(byte *)(*DAT_005a68c0 + 4) - 2;
  return;
}

