
void FUN_00448d40(void)

{
  Sw_EnableZBuffer(0);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  str_sprintf(&DAT_005a41e0,s_mptach_d_dat_00545c50,DAT_005a60c0);
  File_WriteAll(&DAT_005a41e0,&DAT_005a6080,0xb8);
  g_NextMode = g_StarbaseScreen;
  FUN_0048b6f0(0);
  FUN_0048b6f0(1);
  FUN_0048b6f0(2);
  FUN_0046dd30(0,0);
  DAT_00562c70 = 0;
  MpCfg_EndDrag();
  return;
}

