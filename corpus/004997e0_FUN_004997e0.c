
void FUN_004997e0(void)

{
  DAT_00565300 = 0;
  DAT_00565304 = 0;
  DAT_00565308 = 0;
  DAT_0056530c = 0;
  DAT_00565308 = FUN_0041fd80(s_borders_box_0053365c,0xcccc);
  DAT_00565300 = FUN_00431de0(s_shdw_10_pcx_00534eb0,0x20000);
  DAT_00565304 = FUN_00431de0(s_shdw_12_pcx_00535974,0x20000);
  FUN_0048e3d0(&DAT_0056530c,0x400,4,s_TEXT_BUFFER_00535968,0xcccc);
  if (DAT_005a6140 == 0) {
    DAT_005a6140 = FUN_0049df00(s_ingame_bin_0053595c,0xcccc);
    FUN_0049c840(DAT_005a6140,s_ingame_bin_0053595c);
  }
  return;
}

