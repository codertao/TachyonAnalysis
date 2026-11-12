
/* sweep: mptach%d.dat */

void MpLogin_SaveSlotHeader(void)

{
  str_sprintf(&DAT_005a41e0,s_mptach_d_dat_00545c50,DAT_005a60c0);
  File_WriteAll(&DAT_005a41e0,&DAT_005a6080,0xb8);
  GLBL_spacesav[0x29] = DAT_005a60c0;
  return;
}

