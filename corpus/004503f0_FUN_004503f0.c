
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004503f0(void)

{
  clr_bytes(&DAT_0058f4a0,0x34);
  DAT_0058f4bc = load_font(s_shdw_12_pcx_00535974,0x20000);
  DAT_0058f4b8 = load_font(s_shdw_08b_pcx_005366e0,0x20000);
  DAT_0058f4c4 = FUN_004503c0();
  _DAT_0058f4c8 = DAT_0058f4c4 * 0x84;
  FUN_0048e3a0(&DAT_0058f4a0,_DAT_0058f4c8,4,s_MSGLOG_BUFFER_00548590,0xcccc);
  DAT_0058f4ac = 0x68;
  DAT_0058f4b0 = 0x2a;
  DAT_0058f4c0 = load_box_file(s_borders_box_0053365c,0xcccc);
  _DAT_0058f4d0 =
       (uint)((longlong)DAT_005a67e4 * 0x1b0) >> 0x10 |
       (int)((ulonglong)((longlong)DAT_005a67e4 * 0x1b0) >> 0x20) << 0x10;
  return;
}

