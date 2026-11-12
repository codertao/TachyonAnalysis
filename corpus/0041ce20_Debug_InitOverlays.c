
/* sweep */

void Debug_InitOverlays(void)

{
  clr_bytes(&DAT_005b2720,0x90);
  VarDebug_SelectSection(0);
  DAT_005b276c = load_box_file(s_borders_box_0053365c,0xcccc);
  DAT_005b2770 = load_font(s_shdw_10_pcx_00534eb0,0x20000);
  DAT_005b2774 = load_font(s_small320_pcx_00534ea0,0x20000);
  return;
}

