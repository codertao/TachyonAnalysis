
void FUN_0044b680(int param_1)

{
  if ((param_1 != -1) || (param_1 = DAT_005a60c0, DAT_005a60c0 != -1)) {
    FUN_0044b180();
    if ((-1 < param_1) && (param_1 < 10)) {
      (&DAT_005928f0)[param_1 * 0x8c] = 0;
      File_Delete(&DAT_005928e0 + param_1 * 0x8c);
      str_sprintf(&DAT_005a41e0,s_mpplay_02d_sav_005479d8,param_1);
      File_Delete(&DAT_005a41e0);
      str_sprintf(&DAT_005a41e0,s_mpplay_02d_cfg_005479c8,param_1);
      File_Delete(&DAT_005a41e0);
      DAT_005a60c0 = -1;
    }
    FUN_004206b0(DAT_005a3848);
    DAT_005a3848 = 0;
  }
  return;
}

