
/* sweep */

void BW_InitClient(void)

{
  clr_bytes(&DAT_005b97c0,0x24);
  DAT_005b97a0 = load_font(s_lcd_10_pcx_00533674,0x20000);
  DAT_005b97a4 = load_font(s_shdw_16_pcx_00533668,0x20000);
  DAT_005b97a8 = load_box_file(s_borders_box_0053365c,0xcccc);
  *(undefined1 **)(g_ActiveRules + 0x70) = &LAB_0042afe0;
  *(undefined1 **)(g_ActiveRules + 0x7c) = &LAB_0040c4d0;
  *(undefined1 **)(g_ActiveRules + 0x78) = &LAB_0040d450;
  *(undefined1 **)(g_ActiveRules + 0x88) = &LAB_0040d470;
  *(code **)(g_ActiveRules + 0x90) = TargetRule_Any;
  *(undefined1 **)(g_ActiveRules + 0x98) = &LAB_0040d4d0;
  TextBar_SetY(0x19);
  Loadout_Init();
  return;
}

