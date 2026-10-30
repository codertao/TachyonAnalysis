
void FUN_0044c430(void)

{
  g_NextMode = g_StarbaseScreen;
  thunk_FUN_004aa4b0();
  FUN_0044d590();
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  DeleteFileA(s_lstartup_htm_00547f80);
  return;
}

