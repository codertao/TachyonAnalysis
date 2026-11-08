
void FUN_00425210(void)

{
  GLBL_FONT_SHDW_08 = 0;
  GLBL_FONT_SHDW_12 = 0;
  GLBL_BORDERS_BOX = 0;
  DAT_005b1ddc = (undefined **)0x0;
  GLBL_BORDERS_BOX = load_box_file(s_borders_box_0053365c,0xcccc);
  GLBL_FONT_SHDW_08 = load_font(s_shdw_08_pcx_00535e9c,0x20000);
  GLBL_FONT_SHDW_12 = load_font(s_shdw_12_pcx_00535974,0x20000);
  DAT_005b1ddc = &PTR_s_GAME_OPTIONS_00535c88;
  return;
}

