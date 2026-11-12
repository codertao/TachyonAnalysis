
/* sweep */

void SbStats_ShowLabels(void)

{
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsName_00558904,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsLicense_005588f4,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsHeight_005588e4,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsWeight_005588d4,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsBlood_005588c4,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsBirth_005588b4,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsEyes_005588a4,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsHair_00558894,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsEmployer_00558828,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsEmployerBanner_0055887c,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsShip_0055880c,0x10000);
  sbi_label_flags_11c(&GLBL_UI_ELEM_LIST,s_TxtStatsScanComp_00558850,0x10000);
  set_flag_10c_on_elem_by_id(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0x20000);
  ImageArea_SetValueF4(&GLBL_UI_ELEM_LIST,s_IAJake_00558874,0);
  DAT_0056c524 = 0;
  DAT_0056c520 = 0;
  DAT_0056c490 = 1;
  Voice_Play(s_Scomp01_wav_00558924,GLBL_spacesav[0x55]);
  return;
}

