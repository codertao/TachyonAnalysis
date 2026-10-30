
void FUN_0040d500(void)

{
  FUN_0048e380(&DAT_005b97c0,0x24);
  DAT_005b97a0 = FUN_00431de0(s_lcd_10_pcx_00533674,0x20000);
  DAT_005b97a4 = FUN_00431de0(s_shdw_16_pcx_00533668,0x20000);
  DAT_005b97a8 = FUN_0041fd80(s_borders_box_0053365c,0xcccc);
  *(undefined1 **)(DAT_005b1dc4 + 0x70) = &LAB_0042afe0;
  *(undefined1 **)(DAT_005b1dc4 + 0x7c) = &LAB_0040c4d0;
  *(undefined1 **)(DAT_005b1dc4 + 0x78) = &LAB_0040d450;
  *(undefined1 **)(DAT_005b1dc4 + 0x88) = &LAB_0040d470;
  *(code **)(DAT_005b1dc4 + 0x90) = FUN_004010e0;
  *(undefined1 **)(DAT_005b1dc4 + 0x98) = &LAB_0040d4d0;
  FUN_0048cd90(0x19);
  FUN_00431ef0();
  return;
}

