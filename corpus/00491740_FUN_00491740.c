
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00491740(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_005657c0;
  for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  DAT_005657c8 = load_box_file(s_vonbox_box_00559ec4,0xcccc);
  DAT_005657c0 = load_font(s_shdw_10_pcx_00534eb0,0x20000);
  DAT_005657c4 = load_font(s_shdw_12_pcx_00535974,0x20000);
  FUN_0048e3d0(&DAT_005657cc,0x400,4,s_TEXT_BUFFER_00535968,0xcccc);
  FUN_0048e3a0(&DAT_005657d0,0x20,4,s_ICON_BUFFER_00559eb8,0xcccc);
  puVar2 = DAT_005657d0;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0xffffffff;
    puVar2 = puVar2 + 1;
  }
  _DAT_005657d4 = DAT_005657d0;
  DAT_005657dc = 2;
  DAT_005657dd = 3;
  DAT_005657e0 = 0x20008;
  if (DAT_005a6140 == 0) {
    DAT_005a6140 = load_rtxt_bin(s_ingame_bin_0053595c,0xcccc);
    FUN_0049c840(DAT_005a6140,s_ingame_bin_0053595c);
  }
  return;
}

