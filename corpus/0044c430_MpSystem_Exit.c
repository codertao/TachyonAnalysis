
/* sweep: lstartup.htm */

void MpSystem_Exit(void)

{
  g_NextMode = g_StarbaseScreen;
  DPlay_StopEnumSessions();
  NW_BrowserShutdown();
  if (g_PlayerVarStore != 0) {
    VarStore_Save(&DAT_005a60a0,g_PlayerVarStore);
    VarStore_Close();
    g_PlayerVarStore = 0;
  }
  DeleteFileA(s_lstartup_htm_00547f80);
  return;
}

