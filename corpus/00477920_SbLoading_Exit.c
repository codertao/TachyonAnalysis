
/* sweep: playrtmp.sav */

void SbLoading_Exit(void)

{
  Profile_LoadoutInit(0);
  if (g_PlayerVarStore != 0) {
    VarStore_Save(s_playrtmp_sav_00544490,g_PlayerVarStore);
  }
  DAT_005635e8 = 1;
  Starbase_Shutdown();
  Bdf_FreeBackdrop();
  if (DAT_00563638 != 0) {
    OurFreeMem(DAT_00563638);
    DAT_00563638 = 0;
  }
  Teletype_ResetAll();
  g_NextMode = g_StarbaseScreen;
  Ui_FreeCursorGfx();
  return;
}

