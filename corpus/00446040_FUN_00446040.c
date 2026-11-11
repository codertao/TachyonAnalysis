
void FUN_00446040(void)

{
  Sw_EnableZBuffer(0);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  str_sprintf(&DAT_005a41e0,s_mptach_d_dat_00545c50,DAT_005a60c0);
  File_WriteAll(&DAT_005a41e0,&DAT_005a6080,0xb8);
  FUN_00458230();
  OurFreeMem(DAT_005a3160);
  if (DAT_005a34c0 != 0) {
    FUN_004b1840(DAT_005a34c0);
    DAT_005a34c0 = 0;
  }
  if (DAT_005a3460 != 0) {
    FUN_004b1840(DAT_005a3460);
    DAT_005a3460 = 0;
    g_NextMode = g_StarbaseScreen;
    return;
  }
  g_NextMode = g_StarbaseScreen;
  return;
}

