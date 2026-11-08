
void FUN_00488750(void)

{
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsName_00558904,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsLicense_005588f4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsHeight_005588e4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsWeight_005588d4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsBlood_005588c4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsBirth_005588b4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsEyes_005588a4,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsHair_00558894,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsEmployer_00558828,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsEmployerBanner_0055887c,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsShip_0055880c,0x10000);
  FUN_0043f840(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0x20000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsScan_00558864,0x10000);
  clr_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsScanComp_00558850,0x10000);
  FUN_00488200(0,0);
  FUN_00437b10(0);
  FUN_0043f810(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0);
  FUN_0043f5d0(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0x22);
  Ui_RefreshWindow(&GLBL_UI_ELEM_LIST,s_WndStarBaseStats_0055883c,0,0);
  if (DAT_0056c520 != 0) {
    FUN_00466860(s_Scomp03_wav_00556c04,GLBL_spacesav[0x55]);
  }
  DAT_0056c520 = 0;
  DAT_0056c490 = 0;
  return;
}

