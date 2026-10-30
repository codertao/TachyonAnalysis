
void FUN_004183c0(void)

{
  FUN_00431c00();
  FUN_0049cb70(s_artram_txt_0053437c,0xcf00,0xcf01);
  FUN_0049c630(0xffff,0xcccc);
  thunk_FUN_004b5550();
  FUN_004183a0();
  FUN_0048b720();
  FUN_0049c690(0xc000,0xcfff);
  FUN_0049cb20(s_close_txt_00534370);
  FUN_0049cc70(s_sysclose_txt_00534360);
  FUN_00451fc0(0,0,0x27f,0x1df,1);
  FUN_00451e10(&DAT_005a67a0);
  FUN_004b8f60();
  FUN_00458260();
  FUN_004e4b65(0);
  DAT_005a6820 = 0;
  FUN_0049d0f0(&DAT_005a61e0);
  FUN_00425180();
  FUN_00468770();
  FUN_0048e380(&DAT_005b31c0,0x5ea0);
  FUN_0049e7d0(0xff);
  FUN_0049c690(0xd000,0xe000);
  FUN_0049cca0(s_clntclos_txt_00534350);
  DAT_006691e4 = 0;
  DAT_005b8f48 = 0;
  FUN_004a0a90();
  FUN_004ad380(0);
  FUN_004300d0();
  netcomm_Shutdown();
  FUN_00490180();
  return;
}

