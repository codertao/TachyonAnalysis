
void FUN_00477920(void)

{
  Profile_LoadoutInit(0);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(s_playrtmp_sav_00544490,g_PlayerVarStore);
  }
  DAT_005635e8 = 1;
  FUN_00471060();
  FUN_00444e30();
  if (DAT_00563638 != 0) {
    OurFreeMem(DAT_00563638);
    DAT_00563638 = 0;
  }
  FUN_0048b720();
  g_NextMode = g_StarbaseScreen;
  FUN_0043ed30();
  return;
}

