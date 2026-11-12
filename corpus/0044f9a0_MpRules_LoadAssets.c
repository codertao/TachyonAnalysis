
/* sweep */

void MpRules_LoadAssets(void)

{
  Orders_InitClientPool(&DAT_005b31c0);
  DAT_00590d40 = (int *)load_font(s_shdw_10_pcx_00534eb0,0x20000);
  DAT_00590d44 = load_font(s_shdw_16_pcx_00533668,0x20000);
  DAT_00590d48 = (int *)load_font(s_shdw_08_pcx_00535e9c,0x20000);
  DAT_00590d4c = (uint)*(byte *)(*DAT_00590d40 + 4);
  DAT_00590d54 = load_box_file(s_borders_box_0053365c,0xcccc);
  DAT_00590d60 = 0;
  DAT_00590d5c = *(byte *)(*DAT_00590d48 + 4) - 2;
  Input_PushBindingSet(&PTR_DAT_0053ea78);
  return;
}

